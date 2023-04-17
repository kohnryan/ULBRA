public class Gincana {
    private String NomeGincana;
    private int TotalEstudantes = 0;
    private Estudante EstudanteVencedor;
    private int PontuacaoMaxima = 0;
    public void setNomeGincana(String nome){
        this.NomeGincana = nome;
    }
    public void setTotalEstudantes(int totalEstudantes){
        this.TotalEstudantes = totalEstudantes;
    }
    public void setEstudanteVencedor(Estudante estudante){
        this.EstudanteVencedor = estudante;
        int pontuacaoMaxima = this.EstudanteVencedor.getPontos();
        this.setPontuacaoMaxima(pontuacaoMaxima);
    }
    public void setPontuacaoMaxima(int pontuacaoMaxima){
        this.PontuacaoMaxima = pontuacaoMaxima;
    }
    public String getNomeGincana(){
        return this.NomeGincana;
    }
    public int getTotalEstudantes(){
        return this.TotalEstudantes;
    }
    public Estudante getEstudanteVencedor(){
        return this.EstudanteVencedor;
    }
    public int getPontuacaoMaxima(){
        return this.PontuacaoMaxima;
    }
    public void adicionarEstudante(Estudante estudante){
        this.TotalEstudantes += 1;
        int pontos = estudante.getPontos();
        boolean atualizarcondicaoEstudanteVencedor = this.verificarPontosAluno(pontos);

        if (atualizarcondicaoEstudanteVencedor) {
            this.setEstudanteVencedor(estudante);
            this.setPontuacaoMaxima(pontos);
        }
    }
    public void exibirVencedor(){
        String estudanteVencedor = this.EstudanteVencedor.getNome();
        System.out.println("Vencedor atual: " + estudanteVencedor + "\nPontuação máxima: " + this.PontuacaoMaxima + "pontos.");
    }
    private boolean verificarPontosAluno(int pontos){
        boolean condicao = this.PontuacaoMaxima < pontos;
        if (condicao) {
            return true;
        }
        return false;
    }
}
