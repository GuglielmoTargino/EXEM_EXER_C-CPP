/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package app;

/**
 *
 * @author Guglielmo H T
 */
public class Calculo {
 
    
    public Calculo(){        
    }
    
    public double media(double v1, double v2){
        return (v1+v2)/2;
    }
    
    public double media(double v1,double v2, double v3){
        return(v1+v2+v3)/3;
    }
    
    public int soma(int v1, int v2){
        return (v1+v2);
        
    }
    
    public double soma (int v1, int v2, double v3){
        return v1+v2+v3;
    }
    
    public double raizQuad(int valor){
        return (Math.sqrt(valor));
    }
    
}
