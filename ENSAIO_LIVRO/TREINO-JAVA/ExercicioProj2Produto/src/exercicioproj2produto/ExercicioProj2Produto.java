/*
Exercicio do livro JAVA Evandro Teruel.
Aluno: Guglielmo Targino.
Data: 30abr24
Versão: v0.
*/
package exercicioproj2produto;
import javax.swing.JOptionPane;
import produto.Produto;
import java.util.Scanner;



public class ExercicioProj2Produto {

  
    public static void main(String[] args) {
        
        //Classe para exibir prompt de comandos.
        Scanner ler;
        Produto livro, caneta;
        livro =new Produto();
        caneta=new Produto();
        ler=new Scanner(System.in);
        
        
       
        
        caneta.setId(25);
        System.out.println("Digite um id para licro");
        livro.setId(ler.nextInt());
        System.out.println("Digite o preco:");
        livro.setPreco(ler.nextInt());
        
        System.out.println("Codigo livro é "+livro.getId());
        System.out.println("Preco do livro e"+livro.getPreco());
        
        livro.aumentarPreco(50);
        System.out.println("Novo preco"+livro.getPreco());
        livro.diminuirPreco(30);
        System.out.println("Preco promocao"+livro.getPreco());
        
        
        
        
        
        
        
        //JOptionPane.showMessageDialog(null,"numero"+livro.getId());
        //JOptionPane.showMessageDialog(null, "ID caneta:"+caneta.getId());
        
    }
    
}
