public class Main {
    public static void main(String[] args) {
        Relogio relogio = new Relogio();

        relogio.acertarRelogio(3, 5, 10);

        System.out.println("Hora: " + relogio.lerHora());
        System.out.println("Minuto: " + relogio.lerMinuto());
        System.out.println("Segundo: " + relogio.lerSegundo());
    }
}
