public class Main {
    public static void main(String[] args) {
        Product product01 = new Product("Refrigerante", 7.50,20);
        Product product02 = new Product("Suco", 6.90,15);
        Product product03 = new Product("Torta", 20.99,9);
        Product product04 = new Product("Raçao para cachorro", 30.99, 15);

        Store store = new Store();
        //Listando produtos
        store.listProducts();

        //Adicionando produtos
        store.addProduct(product01);
        store.addProduct(product02);
        store.addProduct(product03);
        store.addProduct(product04);

        //Listando produtos
        store.listProducts();

        //Removendo produto [Torta]
        store.removeProduct(product03);

        //Listando produtos
        store.listProducts();

        //Vendendo produto [Refrigerante]
        store.sellProduct(product01, 10);
        store.sellProduct(product01, 70);

        //Listando produtos
        store.listProducts();

        //Adicionando estoque de Refrigerante
        store.addStock(product01, 9);

        //Listando produtos
        store.listProducts();


    }
}
