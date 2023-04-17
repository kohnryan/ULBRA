public class Estudante {
    private String Nome;
    private int Idade;
    private int Pontos;
    public void setNome(String nome){
        this.Nome = nome;
    }
    public void setIdade(int idade){
        this.Idade = idade;
    }
    public void setPontos(int pontos){
        this.Pontos = pontos;
    }
    public String getNome() {
        return this.Nome;
    }
    public int getIdade(){
        return this.Idade;
    }
    public int getPontos(){
        return this.Pontos;
    }
}
