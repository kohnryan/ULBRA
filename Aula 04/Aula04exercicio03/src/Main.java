public class Main {
    public static void main(String[] args) {
        Triangulo triangulo = new Triangulo(4, 5);
        double areaTriangulo = triangulo.calcularArea();
        System.out.println("Área do triângulo: " + areaTriangulo);

        Quadrado quadrado = new Quadrado(3);
        double areaQuadrado = quadrado.calcularArea();
        System.out.println("Área do quadrado: " + areaQuadrado);

        Circunferencia circunferencia = new Circunferencia(2);
        double areaCircunferencia = circunferencia.calcularArea();
        System.out.println("Área da circunferência: " + areaCircunferencia);

        Trapezio trapezio = new Trapezio(6, 4, 3);
        double areaTrapezio = trapezio.calcularArea();
        System.out.println("Área do trapézio: " + areaTrapezio);
    }
}
