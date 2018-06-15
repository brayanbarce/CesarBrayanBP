/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

import controlador.Controlador2;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.net.ServerSocket;
import java.net.Socket;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Brayan
 */
public class ModeloServidor2 extends Thread{
    Controlador2 controlador;
    
/////////////Poner el puerto de preferencia o al que se va a conectar el usuario 2////////////////
    
    final int PUERTO = 40080;
    
////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////
//Poner IP del usuario 2, en este caso para probar se pone la IP del servidor//
                        //que se esta usando//
    final String BOST = "localhost";
    
    Socket socket;
    BufferedReader br;
    BufferedWriter bv;
    
    public void setControlador(Controlador2 controlador){
        this.controlador = controlador;
    }   
    
    public void conectarConElServidor(){
        try {
            socket = new Socket(BOST, PUERTO);
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor2.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void crearFlujos(){
        try {
            InputStream is = socket.getInputStream();
            InputStreamReader isr = new InputStreamReader(is);
            br = new BufferedReader(isr);
            
            OutputStream os = socket.getOutputStream();
            OutputStreamWriter osv = new OutputStreamWriter(os);
            bv = new BufferedWriter(osv);
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor2.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void enviarMensaje(String mensaje){
        try {
            bv.write(mensaje);
            bv.newLine();
            bv.flush();
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor2.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public String recibirMensaje(){
        try {
            String mensaje = br.readLine();
            return mensaje;
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor2.class.getName()).log(Level.SEVERE, null, ex);
        }
        return "";
    }
    
    public void run(){
        while(true){
            String mensaje = recibirMensaje();
            controlador.mostrarMensajeEnTrasiego("Usuario 1: " + mensaje);
        }
    }
}