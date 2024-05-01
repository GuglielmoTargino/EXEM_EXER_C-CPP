/*
Exercicio do livro JAVA Evandro Teruel.
Aluno: Guglielmo Targino.
Data: 30abr24
Versão: v0.
*/
package exercicioproj2produto;
import javax.swing.JOptionPane;
import produto.Produto;



public class ExercicioProj2Produto {

  
    public static void main(String[] args) {
        // TODO code application logic here
        
        Produto livro;
        livro =new Produto();
        
       
        livro.setId(20);
        
        JOptionPane.showMessageDialog(null,"numero"+livro.getId());
        
    }
    
}
