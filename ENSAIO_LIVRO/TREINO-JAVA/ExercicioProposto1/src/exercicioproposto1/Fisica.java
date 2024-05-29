/**
 *Exercicio proposto 1 do livro Java do prof. Evandro Teruel.
 * @author Guglielmo H T
 * Data:29mai24
 * Versão:v0.
 */
package exercicioproposto1;


public class Fisica extends Pessoa{
    private String cpf;
    
    //construtor
    public Fisica(String cpf, String nome){
        super(nome);
        this.cpf=cpf;
    }

    public void setCpf(String cpf) {
        this.cpf = cpf;
    }

    public String getCpf() {
        return cpf;
    }
    @Override
   public void escreverNome(){
       System.out.println("Nome é"+super.getNome());
   }
   @Override
   public boolean validarDocumento(){
       return true;
   }
    
}
