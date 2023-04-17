public class Programa {
    public static void main(String[] args) throws Exception{
        Estudante estudante01 = new Estudante();
        estudante01.setNome("Felipe");
        estudante01.setIdade(20);
        estudante01.setPontos(800);

        Estudante estudante02 = new Estudante();
        estudante02.setNome("Érica");
        estudante02.setIdade(16);
        estudante02.setPontos(900);

        Estudante estudante03 = new Estudante();
        estudante03.setNome("Ryan");
        estudante03.setIdade(21);
        estudante03.setPontos(1000);

        Estudante estudante04 = new Estudante();
        estudante03.setNome("Manuela");
        estudante03.setIdade(16);
        estudante03.setPontos(500);

        Gincana gincana = new Gincana();
        gincana.setNomeGincana("Cabo de Guerra");
        gincana.setEstudanteVencedor(estudante02);

        gincana.adicionarEstudante(estudante01);
        gincana.adicionarEstudante(estudante02);
        gincana.adicionarEstudante(estudante03);
        gincana.adicionarEstudante(estudante04);

        System.out.println("Total de participantes da gincana: " + gincana.getTotalEstudantes());
        gincana.exibirVencedor();
    }
}
