
import javax.swing.JOptionPane;
import java.util.Scanner;

/*
Exercício do livro JAVA
Aluno: Guglielmo Targino.
Data: 22mar24.
Versão: v0.
 */
public class Teste {
    public static void main(String[]args){
        
        Funcionario empregado[];
        empregado=new Funcionario[2];
        Funcionario func;
        Funcionario colaborador=new Funcionario();
        Scanner ler;
        ler=new Scanner(System.in);
        
        System.out.println("digite o nome");
        
        
        colaborador.setNome(ler.nextLine());
        
        System.out.println("vc digitou :"+colaborador.getNome());
       
        /*  
        
   
        for(int indice=0; indice<empregado.length;indice++){
            func=new Funcionario();
            func.setNome(JOptionPane.showInputDialog("Digite Nome"+(indice+1)));
            func.setCargo(JOptionPane.showInputDialog("Digite Cargo"+(indice+1)));
            func.setMatricula(Integer.parseInt(JOptionPane.showInputDialog("Digite Matricula"+(indice+1))));
            empregado[indice]=func;
            
            
        }
        
        for(int indice=0;indice<empregado.length;indice++){
            func=empregado[indice];
            JOptionPane.showMessageDialog(null, "Nome do empregado "+(indice+1)+" é "+func.getNome());
            JOptionPane.showMessageDialog(null, "Cargo do empregado é:"+(indice+1)+"é"+func.getCargo());
        }*/
        
    }
        
     
}
