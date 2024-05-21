/**
 *Execrcício do livro java prof. Evandro Teruel.
 * Data: 20mai24
 * versão:v0
 * @author Guglielmo H T
 */
public class Vestiario extends Produto {
     private double qtd;
     
     public Vestiario (double qtdade,String nom,double var){
         super(nom,var);
         this.qtd=qtdade;
     }

    public double getQtd() {
        return qtd;
    }

    public void setQtd(double qtd) {
        this.qtd = qtd;
    }
    @Override
    public double calcularPreco(){
        return(super.getValor()*this.qtd)-super.getValor();
    }
}
