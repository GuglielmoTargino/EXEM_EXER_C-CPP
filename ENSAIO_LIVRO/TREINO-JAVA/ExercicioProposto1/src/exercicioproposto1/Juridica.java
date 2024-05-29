/**
 *Exercicio proposto 1 do livro Java do prof. Evandro Teruel.
 * @author Guglielmo H T
 */
package exercicioproposto1;


public class Juridica extends Pessoa{
    private String cnpj; 
    
    //construtor
    public Juridica(String cnpj,String nome){
        super(nome);
        this.cnpj=cnpj;        
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getCnpj() {
        return cnpj;
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
