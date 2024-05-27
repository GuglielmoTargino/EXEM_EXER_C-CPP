package admin;


/**exercício do livro JAVA prof. Evandro Teruel
 * @author Guglielmo H 
 * Data:25mai24
 * Versão:v0
 */
public class Academico extends Funcionarios{
    
    private String area;
    
    /*construtor inseriu o atributo area, pois é atributo da classe 
    Academico.*/ 
    public Academico (String area, int id, String nome, String categoria,
            double salario, double desconto){
        //super importa os atributos de funcionario.
        super(id,nome,categoria,salario,desconto);
        this.area=area;
    }

    public String getArea() {
        return area;
    }

    public void setArea(String area) {
        this.area = area;
    }
   
    @Override
   public String obterCargo(){
        switch(super.getCategoria()){
            case "A":
                return "Pesquisa";
            case "B":
                return "Professor";
            default:
                return "Tutor";
        }
    }
   
    
    
        
    
}
