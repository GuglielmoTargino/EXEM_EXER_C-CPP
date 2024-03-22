/*
Exercício do livro JAVA.
Aluno: Guglielmo Targino.
Data: 22mar24.
Versão: v0.
 */
public class Funcionario {
    private int matricula;
    private String nome;
    private String cargo;
    private double salario;
    
    /* metodo construtor*/
public Funcionario(int matricula, String nome, String cargo, double salario){
    this.cargo=cargo;
    this.matricula=matricula;
    this.nome=nome;
    this.salario=salario;   
    
}

public Funcionario(){
    
}

public int getMatricula(){
    return matricula;
}
public void setMatricula(int matricula){
    this.matricula=matricula;
}

public String getNome(){
    return nome;    
}
public void setNome(String nome){
    this.nome=nome;
}

public String getCargo(){
    return cargo;
}
public void setCargo(String cargo){
    this.cargo=cargo;
    
}

public double getSalario(){
    return salario;
}
public void setSalario(double salario){
    this.salario=salario;
}

public void ajustarSalario(){
    this.salario=this.salario+this.salario*percentual/100;
}


    
}
