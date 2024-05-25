

/**exercício do livro JAVA prof. Evandro Teruel
 * @author Guglielmo H 
 * Data:25mai24
 * Versão:v0
 */
public abstract class Funcionarios {
    private int id;
    private String nome;
    private String categoria;
    private double salario;
    private double desconto;
    
    public abstract String obterCargo();
    //construtir da classe funcionarios
    public Funcionarios(int id, String nome,String categoria,double salario,double desconto){
        this.id=id;
        this.nome=nome;
        this.categoria=categoria;
        this.salario=salario;
        this.desconto=desconto;
    }
    
}
