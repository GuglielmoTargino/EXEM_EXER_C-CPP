/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package app;

/**
 *
 * @author Guglielmo H T
 */
public class Teste {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        Calculo calc=new Calculo();
        
        double med1=calc.media(50.5,5.5);
        double med2=calc.media(20, 30, 40.1);
        
        System.out.println(med1);
        System.out.println(med2);
        
        
    }
    
}