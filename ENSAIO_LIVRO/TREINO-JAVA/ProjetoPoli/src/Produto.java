
/**
 *Execrcício do livro java prof. Evandro Teruel.
 * Data: 20mai24
 * versão:v0
 * @author Guglielmo H T
 */
public class Produto {
    
    private String nome;
    private double valor;
    
    public Produto(String nom, double var){
        this.nome=nom;
        this.valor=var;
    }

    public String getNome() {
        return nome;
    }

    public double getValor() {
        return valor;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }
    
    
    
}
