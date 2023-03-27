public class Ponteiro {
    private int posicao;

    public void setPosicao(int posicao) {
        this.posicao = posicao % 60;
    }

    public int getPosicao() {
        return this.posicao;
    }
}
