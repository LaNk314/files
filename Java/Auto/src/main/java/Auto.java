public class Auto {
    String model; String marka; String typ;
    double pojemnoscSilnika; double pojemnoscBaku; double stanBaku;
    int rokProdukcji; int przebieg; int wlasciciel = 1; int maksPredkosc; int obecnaPredkosc = 0;
    boolean czyWlaczony = false;
    Auto(String model, String marka, String typ, double pojemnoscSilnika, double pojemnoscBaku, int rokProdukcji, int przebieg, int maksPredkosc) {
        this.model = model; this.marka = marka; this.typ = typ;
        this.pojemnoscSilnika = pojemnoscSilnika; this.stanBaku = this.pojemnoscBaku = pojemnoscBaku;
        this.rokProdukcji = rokProdukcji; this.przebieg = przebieg; this.maksPredkosc = maksPredkosc;
    }
    void silnik() {
        if (this.obecnaPredkosc == 0){
            this.czyWlaczony = !this.czyWlaczony;
            System.out.println(this.czyWlaczony ? "Uruchamiam silnik!" : "Wyłączam silnik..");
        } else {
            System.out.println("Najpierw się zatrzymaj, jeśli chcesz wyłączyć silnik.");
        }
    }
    void czyNaChodzie(){
        System.out.println(this.czyWlaczony ? "Silnik uruchomiony" : "Silnik wyłączony");
    }
    void sprzedaj(){
        this.wlasciciel ++;
        System.out.println("Sprzedano!");
    }
    void bak(){
        System.out.println("Pozostało "+this.stanBaku+" litrów paliwa");
    }
    void tankuj(double iloscPaliwa){
        if(!this.czyWlaczony){
            if(iloscPaliwa<=0){
                System.out.println("Podaj poprawną ilość");
            } else if (this.stanBaku + iloscPaliwa > this.pojemnoscBaku) {
                System.out.println("Tyle nie wejdzie, wlej mniej");
            } else if (this.stanBaku >= .95 * this.pojemnoscBaku) {
                System.out.println("Prawie pełno, nie ma co dolewać");
            } else {
                this.stanBaku += iloscPaliwa;
                System.out.println("Dolano " + iloscPaliwa + "l");
            }
        } else {
            System.out.println("Aby zatankować, najpierw wyłącz silnik.");
        }
    }
    void przyspiesz(int wartosc){
        if(wartosc>0) {
            if (this.czyWlaczony) {
                if (this.obecnaPredkosc == this.maksPredkosc) {
                    System.out.println("Nie ma opcji, szybciej nie da rady");
                } else if (this.obecnaPredkosc + wartosc > this.maksPredkosc) {
                    this.obecnaPredkosc = this.maksPredkosc;
                    System.out.println("Chciałbyś, przyśpieszam do " + this.maksPredkosc + "km/h");
                } else {
                    this.obecnaPredkosc += wartosc;
                    System.out.println("Przyśpieszam do " + this.obecnaPredkosc + "km/h");
                }
            } else {
                System.out.println("Nie mogę jechać z wyłączonym silnikiem.");
            }
        } else {
            System.out.println("Podaj poprawną wartość");
        }
    }
    void zwolnij(int wartosc){
        if(wartosc>0) {
            if (this.czyWlaczony) {
                if (this.obecnaPredkosc == 0) {
                    System.out.println("Wolniej nie da się stać");
                } else if (this.obecnaPredkosc - wartosc <= 0) {
                    this.obecnaPredkosc = 0;
                    System.out.println("Zatrzymuję się.. ");
                } else {
                    this.obecnaPredkosc -= wartosc;
                    System.out.println("Zwalniam do " + this.obecnaPredkosc + "km/h");
                }
            } else {
                System.out.println("Silnik nawet nie jest uruchomiony!");
            }
        } else {
            System.out.println("Podaj poprawną wartość");
        }
    }
    void predkosciomierz(){
        System.out.println("Jedziemy z prędkością "+this.obecnaPredkosc+"km/h");
    }
    void informacje(){
        System.out.println("===============================");
        System.out.println("Marka, typ, model: " +this.marka+", "+this.typ+", "+this.model);
        System.out.println("Rok produkcji: "+this.rokProdukcji+"\nPojemność silnika:"+this.pojemnoscSilnika+"\nWłaściciel: "+this.wlasciciel);
        System.out.println("Maksymalna prędkość: "+this.maksPredkosc+"\nPrzebieg: "+this.przebieg);
        System.out.println("===============================");
    }

}
