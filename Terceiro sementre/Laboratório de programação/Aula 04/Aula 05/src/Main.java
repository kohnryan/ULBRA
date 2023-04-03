public class Main {
    public static void main(String[] args) {
        Pessoa person = new Pessoa("Ryan kohn", 21, 1.76);
        System.out.println("Nome: " + person.getName());
        System.out.println("Idade: " + person.getAge());
        System.out.println("Altura: " + person.getHeight());

        Carro car = new Carro("Audi", "A3", 2014);
        System.out.println("Marca: " + car.getBrand());
        System.out.println("Modelo: " + car.getModel());
        System.out.println("Ano: " + car.getYear());

        ContaBancaria account = new ContaBancaria("26788", 2000, person);
        System.out.println(account.getBalance());
        System.out.println(account.deposit(650));
        System.out.println(account.withdraw(650));
    }
}
