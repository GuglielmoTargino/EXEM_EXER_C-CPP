

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

    public int getId() {
        return id;
    }

    public String getNome() {
        return nome;
    }

    public String getCategoria() {
        return categoria;
    }

    public double getSalario() {
        return salario;
    }

    public double getDesconto() {
        return desconto;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCategoria(String categoria) {
        this.categoria = categoria;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    public void setDesconto(double desconto) {
        this.desconto = desconto;
    }
    public double calcularSalario(){
        return salario-desconto;
    }
}
