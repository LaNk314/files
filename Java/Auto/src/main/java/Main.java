public class Main {
    public static void main(String[] args) {
        Auto Kacper = new Auto("clio", "reno", "osobowy", 1.5, 45.0, 1984, 150000, 200);
        Kacper.stanBaku = 20;
        Kacper.sprzedaj();
        Kacper.czyNaChodzie();
        Kacper.bak();
        Kacper.tankuj(24);
        Kacper.tankuj(-1);
        Kacper.bak();
        Kacper.silnik();
        Kacper.przyspiesz(140);
        Kacper.przyspiesz(100);
        Kacper.predkosciomierz();
        Kacper.zwolnij(-200);
        Kacper.silnik();
        Kacper.tankuj(1);
        Kacper.informacje();

    }
}