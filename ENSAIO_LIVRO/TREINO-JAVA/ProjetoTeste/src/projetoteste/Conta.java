
package projetoteste;

/*
 * @author Guglielmo H T
Data:03mai24
Versão:v0
 */
public class Conta {
   protected  String nrbanco;
    protected String nragencia;
    protected String nrconta;
    protected String nmcliente;
    protected double saldo;
    
    //contrutor parametrizado.
    public Conta(String nrbanco, String nragencia, String nrconta, String nmcliente, double saldo){
        this.nrbanco=nrbanco;
        this.nragencia=nragencia;
        this.nmcliente=nrconta;
        this.nrconta=nmcliente;
        this.saldo=saldo; 
        
    }
    //construtor não parametrizado.
    public Conta(){
        
    }

    public void setNrbanco(String nrbanco) {
        this.nrbanco = nrbanco;
    }

    public void setNragencia(String nragencia) {
        this.nragencia = nragencia;
    }

    public void setNrconta(String nrconta) {
        this.nrconta = nrconta;
    }

    public void setNmcliente(String nmcliente) {
        this.nmcliente = nmcliente;
    }

    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    public String getNrbanco() {
        return nrbanco;
    }

    public String getNragencia() {
        return nragencia;
    }

    public String getNrconta() {
        return nrconta;
    }

    public String getNmcliente() {
        return nmcliente;
    }

    public double getSaldo() {
        return saldo;
    }
    
    
    
    
    
}
