/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package modelo;

import controlador.Controlador;
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
public class ModeloServidor extends Thread{
    Controlador controlador;
            
 //////Poner el puerto de preferencia o al que se va a conectar en este servidor//
    final int PUERTO = 40080;
    
    ServerSocket sk;
    Socket socket;
    BufferedReader br;
    BufferedWriter bv;
    
    public void setControlador(Controlador controlador){
        this.controlador = controlador;
    }   
    
    public void  abrirPuerto(){
        try {
            sk = new ServerSocket(PUERTO);
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void esperarAlCliente(){
        try {
           socket = sk.accept();
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor.class.getName()).log(Level.SEVERE, null, ex);
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
            Logger.getLogger(ModeloServidor.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public void enviarMensaje(String mensaje){
        try {
            bv.write(mensaje);
            bv.newLine();
            bv.flush();
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    public String recibirMensaje(){
        try {
            String mensaje = br.readLine();
            return mensaje;
        } catch (IOException ex) {
            Logger.getLogger(ModeloServidor.class.getName()).log(Level.SEVERE, null, ex);
        }
        return "";
    }
    
    public void run(){
        while(true){
            String mensaje = recibirMensaje();
            controlador.mostrarMensajeEnTrasiego("Usuario 2: " + mensaje);
        }
    }
}