package com.company;
import java.util.Scanner;

public class Triangle {

    int a, b, c;

    static boolean isTriangle(int a, int b, int c) {
        if (a + b <= c || a + c <= b || b + c <= a) {
            return false;
        }
        else return true;
    }

}
