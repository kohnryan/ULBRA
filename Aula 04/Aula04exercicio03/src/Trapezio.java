public class Trapezio {
    private double baseMaior;
    private double baseMenor;
    private double altura;

    public Trapezio(double baseMaior, double baseMenor, double altura) {
        this.baseMaior = baseMaior;
        this.baseMenor = baseMenor;
        this.altura = altura;
    }

    public double calcularArea() {
        return ((baseMaior + baseMenor) * altura) / 2;
    }

    public void setBaseMaior(double baseMaior) {
        this.baseMaior = baseMaior;
    }

    public void setBaseMenor(double baseMenor) {
        this.baseMenor = baseMenor;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

    public double getBaseMaior() {
        return this.baseMaior;
    }

    public double getBaseMenor() {
        return this.baseMenor;
    }

    public double getAltura() {
        return this.altura;
    }
}
