
package projetoteste;

/*
 * @author Guglielmo H T
Data:03mai24
Versão:v0
 */
public class Conta {
    private String nrbanco;
    private String nragencia;
    private String nrconta;
    private String nmcliente;
    private double saldo;
    
    //contrutor parametrizado.
    public Conta(String a, String b, String c, String d, double e){
        this.nrbanco=a;
        this.nragencia=b;
        this.nmcliente=d;
        this.saldo=e;        
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
