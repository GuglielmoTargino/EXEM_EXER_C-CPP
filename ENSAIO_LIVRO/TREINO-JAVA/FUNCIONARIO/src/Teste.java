
import javax.swing.JOptionPane;

/*
Exercício do livro JAVA
Aluno: Guglielmo Targino.
Data: 22mar24.
Versão: v0.
 */
public class Teste {
    public static void main(String[]args){
        double saj;
     
        Funcionario func=new Funcionario();
        func.setMatricula(67543);
        func.setNome("Guga");
        func.setSalario(10);
        saj=func.ajustarSalario(1000);
        
        
        //System.out.println(func.getNome());
        JOptionPane.showMessageDialog(null,"Nome é :"+ func.getNome());
        JOptionPane.showMessageDialog(null,"a matricula é :"+func.getMatricula());
        //JOptionPane.showMessageDialog(null,"Salario é:"+ saj);
        System.out.println(saj);
        
    }
    
}
