/**
 *Exercicio proposto 1 do livro Java do prof. Evandro Teruel.
 * @author Guglielmo H T
 */
package exercicioproposto1;


public class Pessoa implements Validador {
    private String nome;
            
    public Pessoa(String nome){
        this.nome=nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }
   public void escreverNome(){
       System.out.println("Nome é"+this.nome);
   }
   @Override
   public boolean validarDocumento(){
       return true;
   }
    
}
