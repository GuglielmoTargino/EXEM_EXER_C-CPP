/*
 *Execrcício do livro java prof. Evandro Teruel.
 * Data: 20mai24
 * versão:v0
 * @author Guglielmo H T
 */
public class Alimentacao extends Produto {
    private double peso;
    public Alimentacao(double pes,String nom, double var){
        super(nom,var);
        this.peso=pes;
                
    }

    public double getPeso() {
        return peso;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }
    @Override
    public double calcularPreco(){
        return super.getValor()*this.peso;
    }
    
}
