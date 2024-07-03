/*
 Teste com exercício try catch do livro java Evandro Teruel
Aluno:Guglielmo Targino.
Data: 10jun24
 */
package testetrycath;

import javax.swing.JOptionPane;

public class TesteTryCath {

    public static void main(String[] args) {
        // TODO code application logic here
        int op;
        String[] lista=new String[2];
        
        try{
            lista[0]="dara";
            lista[1]="lic";
            lista[2]="NIA";
            System.out.println("nome é_"+lista[1]);
        
    }catch(ArrayIndexOutOfBoundsException v){
    System.out.println("Array muito longa");
}
}
    
    int  op = JOptionPane.showConfirmDialog(null,"Deseja confirar?",JOptionPane.YES_NO_OPTION);
     if(op==0){
    JOptionPane.showMessageDialog(null,"voce digitou sim");
}else if(op==1){
    JOptionPane.showMessageDialog(null,"Voce clicou não");
}
}
