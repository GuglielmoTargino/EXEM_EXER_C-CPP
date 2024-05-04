
package projetoteste;

/*
 * @author Guglielmo H T
Exercício do livro java por prof. Evandro Teruel.
Data:03mai24.
Versão:v0
 */
public class ContaCorrente extends Conta {
    private double limitecheque;
    private double jurocheque;
    
    //construtor parametrizado.
    public ContaCorrente(double limitecheque, double jurocheque,
             String nrbanco,String nragencia, String nrconta,
        String nmcliente,double saldo){
        
        /*metodo da superclasse. ou pode usar o operador this >1
         1> para cada atributo.
        */
        //super(nrbanco,nragencia,nrconta,nmcliente,saldo);        
        this.limitecheque=limitecheque;
        this.jurocheque=jurocheque;
        
        /*this.nrbanco=nrbanco;
        this.nragencia=nragencia;
        this.nrconta=nrconta;
        this.nmcliente=nmcliente;
        this.saldo=saldo;
        */
        
        
    }

    public double getlimiteCheque() {
        return limitecheque;
    }

    public double getjuroCheque() {
        return jurocheque;
    }

    public void setlimiteCheque(double limitecheque) {
        this.limitecheque = limitecheque;
    }

    public void setjuroCheque(double jurocheque) {
        this.jurocheque = jurocheque;
    }
    //construtor não parametrizado.
    public ContaCorrente(){
        
    }
    
    
    
}
