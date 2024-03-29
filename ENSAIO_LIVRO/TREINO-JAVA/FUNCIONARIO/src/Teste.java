
import javax.swing.JOptionPane;

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
        for(int indice=0; indice<empregado.length;indice++){
            func=new Funcionario();
            func.setNome(JOptionPane.showInputDialog("Nome"+(indice+1)));
            func.setCargo(JOptionPane.showInputDialog("Cargo"+(indice+1)));
            empregado[indice]=func;
            
        }
        
        for(int indice=0;indice<empregado.length;indice++){
            func=empregado[indice];
            JOptionPane.showMessageDialog(null, "Nome do empregado é:"+func.getNome());
            JOptionPane.showMessageDialog(null, "Cargo do empregado é:"+func.getCargo());
        }
        
    }
     
}
