/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import modelo.ModeloServidor;
import vista.IVista;

/**
 *
 * @author Brayan
 */
public class Controlador implements ActionListener{
    IVista vista;
    ModeloServidor modelo;
    
    public Controlador(IVista vista, ModeloServidor modelo) {
        this.vista = vista;
        this.modelo = modelo;
    }

    public void arrancar(){
        vista.hacerVisible();
        vista.inicializar();
        vista.mostrarMensajeEnTrasiego("Abriendo el puerto...");
        modelo.abrirPuerto();
        vista.mostrarMensajeEnTrasiego("Esperando al usuario 2");
        modelo.esperarAlCliente();
        modelo.crearFlujos();
        modelo.start();
    }

    @Override
    public void actionPerformed(ActionEvent e) {
       switch(e.getActionCommand()){
           case IVista.ENVIAR:
               vista.mostrarMensajeEnTrasiego("Enviando mensaje...");
               modelo.enviarMensaje(vista.getMensajeAEnviar());
               vista.mostrarMensajeEnTrasiego("Enviado");
               vista.borrarTextoAEnviar();
               break;
        }
    }
    
    public void mostrarMensajeEnTrasiego(String mensaje){
        vista.mostrarMensajeEnTrasiego(mensaje);
    }
}
 