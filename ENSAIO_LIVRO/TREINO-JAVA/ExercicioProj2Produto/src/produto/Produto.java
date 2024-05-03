/*
Exercicio do livro JAVA Evandro Teruel.
Aluno: Guglielmo Targino.
Data: 30abr24
Versão: v0.
*/
package produto;

public class Produto {
    private long id;
    private String nome;
    private double preco;

public Produto(){
    
}
public Produto(long x, String y, double z){
    this.id=x;
    this.nome=y;
    this.preco=z;
    
}
public void setId(long a){
    this.id=a;
    }
public void setNome(String b){
    this.nome=b;
    
}
public void setPreco(double c){
    this.preco=c;    
}

public long getId(){
    return id;
}

public String getNome(){
    return nome;
}

public double getPreco(){
    return preco;
}

public void diminuirPreco(double percentual){
    this.preco-=(percentual/100)*this.preco;
        
}

public void aumentarPreco(double percentual){
    this.preco+=(percentual/100)*this.preco;
    
}
    
}
