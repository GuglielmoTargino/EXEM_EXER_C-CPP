
package projetoteste;
import java.util.Date;


/*
 * @author Guglielmo H T
 * Data03mai24
 * Versão:v0
 */
public class ProjetoTeste {

   
    public static void main(String[] args) {
        // TODO code application logic here
        ContaCorrente ghtcc;
        ContaPoupanca agcpp;
        Date date;
        date=new Date("05/03/24");
        agcpp=new ContaPoupanca(date,"035","143-2","4512-9","Guga",32789.6);

        //ghtcc=new ContaCorrente(5000.36,5.5,"035","143-2","4512-9","Guga",32789.6);
        //System.out.println("A numero banco é "+ghtcc.getNrbanco());
        //System.out.println("A nome cliente "+ghtcc.getNmcliente());
        //System.out.println("A limite cheque "+ghtcc.getlimiteCheque());
        //System.out.println("A numero agencia "+ghtcc.getNragencia());
        System.out.println("a DAta e "+agcpp.getDataaniversario());
    }
    
    
}
