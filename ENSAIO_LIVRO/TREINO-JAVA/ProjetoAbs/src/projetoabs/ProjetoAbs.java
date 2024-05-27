
package projetoabs;

import admin.Administrativo;
import admin.Academico;


/**exercício do livro JAVA prof. Evandro Teruel
 * @author Guglielmo H 
 * Data:25mai24
 * Versão:v0
 */
public class ProjetoAbs {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Administrativo adm=new Administrativo(10,"Guga","A",10678.56,789.53);
        System.out.println("Nome"+adm.getNome()+"\n"+"Cargo"+adm.obterCargo()+"\n"+"Salario"+adm.calcularSalario()+"\n");
        
        Academico aca=new Academico("Matematica",12,"Dara","B",8432.32,521.23);
        System.out.println("nome"+aca.getNome()+"\n"+"Caargo"+aca.obterCargo()+"\n"+"salario"+"\n"+aca.calcularSalario());
    }
    
}
