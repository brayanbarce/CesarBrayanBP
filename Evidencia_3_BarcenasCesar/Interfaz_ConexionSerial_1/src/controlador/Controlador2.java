/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import modelo.ModeloServidor2;
import vista.IVista;

/**
 *
 * @author Brayan
 */
public class Controlador2 implements ActionListener{
    IVista vista;
    ModeloServidor2 modelo;
    
    public Controlador2(IVista vista, ModeloServidor2 modelo) {
        this.vista = vista;
        this.modelo = modelo;
    }

    public void arrancar(){
        vista.hacerVisible();
        vista.inicializar();
        vista.mostrarMensajeEnTrasiego("Conectando...");
        modelo.conectarConElServidor();
        vista.mostrarMensajeEnTrasiego("Conectado");
        modelo.crearFlujos();
        modelo.start();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
       switch(e.getActionCommand()){
           case IVista.ENVIAR:
               vista.mostrarMensajeEnTrasiego("Enviando mensaje...");
               modelo.enviarMensaje(vista.getMensajeAEnviar());
               vista.mostrarMensajeEnTrasiego("Enviando...");
               vista.borrarTextoAEnviar();
               break;
        }
    }
    
    public void mostrarMensajeEnTrasiego(String mensaje){
        vista.mostrarMensajeEnTrasiego(mensaje);
    }
}
 