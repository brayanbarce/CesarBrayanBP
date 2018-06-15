/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package interfaz_conexionserial;

import controlador.Controlador2;
import modelo.ModeloServidor2;
import vista.IVista;
import vista.VistaJFrame;

/**
 *
 * @author Brayan
 */
public class Interfaz_ConexionSerial {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        IVista vista = new VistaJFrame();
        ModeloServidor2 modelo = new ModeloServidor2();
        
        Controlador2 controlador = new Controlador2(vista, modelo);
        
        vista.setControlador(controlador);
        modelo.setControlador(controlador);
        
        controlador.arrancar();
    }
    
}
