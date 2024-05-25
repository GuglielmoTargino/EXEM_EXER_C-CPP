/**exercício do livro JAVA prof. Evandro Teruel
 * @author Guglielmo H 
 * Data:25mai24
 * Versão:v0
 */
public class Academico extends Funcionarios{
    
    private String area;
    public Academico (String area, int id, String nome, String categoria,
            double salario, double desconto){
        //super importa os atributos de funcionario.
        super(id,nome,categoria,salario,desconto);
        this.area=area;
    }
    
    
        
    
}
