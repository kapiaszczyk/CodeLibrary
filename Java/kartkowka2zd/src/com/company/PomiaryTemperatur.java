package com.company;

public class PomiaryTemperatur(int iloscPomiarow) {

    public PomiaryTemperatur(int ileDni) {
        PomiaryTemperatur[] tablica = new PomiaryTemperatur[ileDni];

    }

    double temperatura;
    int ileDni;


    void dodajPomiar(int numer, double temperatura) {
        tablica[numer] = new PomiaryTemperatur();
        temperatura = temperatura;
    }

    double minimum() {
        double minimum = Double.MAX_VALUE;
        for (int i = 0; i < ileDni; i++) {
            if (tablica[i].temperatura < minimum)  minimum = tablica[i].temperatura;
        }
        return minimum;
    }

    double maximum() {
        double maximum = Double.MAX_VALUE;
        for (int i = 0; i < ileDni; i++) {
            if (tablica[i].temperatura > maximum)  maximum = tablica[i].temperatura;
        }
        return maximum;
    }

}
