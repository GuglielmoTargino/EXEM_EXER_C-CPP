

/**exercício do livro JAVA prof. Evandro Teruel
 * @author Guglielmo H 
 * Data:25mai24
 * Versão:v0
 */
public class Administrativo extends Funcionarios {
    
    //construtor da classe com atributos herdados de funcionario
    public Administrativo(int id, String nome, String categoria,
            double salario, double desconto){
        super(id,nome,categoria,salario,desconto);        
    }
    @Override
    
    public String obterCargo(){
        switch(super.getCategoria()){
            case "A":
                return "Gerente";
            case "B":
                return "Contador";
            default:
                return "Auxiliar";
            
        }
    }    
    
}
