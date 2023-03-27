public class Circunferencia {
    private double raio;
    private final double pi = 3.14;

    public Circunferencia(double raio) {
        this.raio = raio;
    }

    public double calcularArea() {
        return pi * raio * raio;
    }

    public void setRaio(double raio) {
        this.raio = raio;
    }

    public double getRaio() {
        return this.raio;
    }
}
