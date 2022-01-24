package com.company;

import java.util.Arrays;
import java.util.Scanner;
import java.util.Random;

class Array {

    private double[] Array;

    public Array(int parA) {
        Array = new double[parA];
    }

    void generateData (boolean isRandom) {
        if (isRandom == true) {
            Random rand = new Random();
            for (int i = 0; i < Array.length; i++) {
                Array[i] = rand.nextInt(32);
                System.out.println(Array[i]);
            }
        }
        else {
            for (int i = 0; i < Array.length; i++) {
                Array[i] = i;
                System.out.println(Array[i]);
            }
        }

    }

    public double calculateSum() {
        double sum = 0;
        for (int i = 0; i < Array.length; i++) {
            sum = sum + Array[i];
        }
        return sum;
    }

    public double calculateAvg() {
        return (calculateSum()/Array.length);
    }

    public double calculateMedian() {
        if (Array.length % 2 == 0) {
            return ((Array[Array.length/2]+Array[(Array.length/2)-1])/2);
        }
        else {
            return ((Array[Array.length/2]));
        }
    }

    public void printArray() {
        System.out.println(Arrays.toString(Array));
    }

}
