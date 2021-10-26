package com.company;

public class Punkt {
    int x;
    int y;

    void wyswietlWspolrzedne() {
        System.out.println("x: " + x);
        System.out.println("y: " + y);
    }

    int pobierzX() {
        return x;
    }

    int pobierzY() {
        return y;
    }
}
