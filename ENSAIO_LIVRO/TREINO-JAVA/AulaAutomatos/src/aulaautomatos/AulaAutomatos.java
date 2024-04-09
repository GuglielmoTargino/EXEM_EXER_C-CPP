
package aulaautomatos;

/*
Treino de aula de automatos.
 @author Guglielmo H T.
Data: 09abr24.
Versão: v0.
 */
public class AulaAutomatos {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        String palavra="www.uni9.br";
        
        // TODO code application logic here
        
        //boolean verifica=palavra.matches("^[abcd]-[2345]#\\d $");
        boolean verifica =palavra.matches("^[w]{3}+[.][a-z0-9]+[.][a-z]+$");
        System.out.println(verifica);
    }
    
}
