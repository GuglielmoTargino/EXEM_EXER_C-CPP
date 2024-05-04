
package projetoteste;

import java.util.Date;

/**
 Exercício do livro java pelo prof. Evandro Teruel
 * @author Guglielmo H T
 * Data: 03mai24
 * Versão: v0.
 */
public class ContaPoupanca extends Conta{
    private Date dataaniversario;
    
    //construtor parametrizado.
    public ContaPoupanca(Date dataaniversario,String nrbanco,String nragencia, String nrconta,
        String nmcliente,double saldo){
        
        super(nrbanco,nragencia,nrconta,nmcliente,saldo); 
        this.dataaniversario=dataaniversario;        
    }
     public ContaPoupanca(){
            
        }
    
    //construtor não parametrizado.

    public Date getDataaniversario() {
        return dataaniversario;
    }
   
    
}
