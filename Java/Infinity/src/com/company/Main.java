package com.company;

public class Main {

    public static void main(String[] args) {

	System.out.println("10 / 0.0 = " + infinityPlus());
    System.out.println("10 / -0.0 = " + infinityMinus());
    System.out.println("10.0 / 0 = " + infinityPlusAgain());
    System.out.println("10.0 / -0 = " + infinityPlusAgainAgain());

    System.out.println();

    System.out.println((10.0 / 2));
    System.out.println((10 / 2.0));
    System.out.println((10 / 2));

    System.out.println();

    yPost();

    System.out.println();

    yPre();

    int JEDYNKA = 1;

    System.out.println();

    System.out.println(~1);
    System.out.println(~0);
    System.out.println(0 & 1);
    System.out.println(0 | 1);
    System.out.println(0 ^ 1);
    System.out.println();
    System.out.println(1 << 2);
    System.out.println(1 >> 2);
    System.out.println(1 >>> 0);

    System.out.println();

    Animal myAnimal = new Animal();  // Create a Animal object
    Animal myPig = new Pig();  // Create a Pig object
    Animal myDog = new Dog();  // Create a Dog object
    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();



        VariableClass tryMe = new VariableClass();

    System.out.println("Look down");

        System.out.print(" " + 7 + 2 + " ");
        System.out.print("foo"+ 42 + 5 + " ");
        System.out.println(42 + 44 + "foo");




        System.out.println("Look down");
        System.out.println("LOOK");




        System.out.println(10.1 % 3.1);




        int x = 1;
        int y = 2;
        int z1 = x+++ ++y;
        int z2 = ++x+y++;

        System.out.println(z1);
        System.out.println(0.0/0 == 0.0/0);

}

    static double infinityPlus() {
    return (10 / 0.0);
    }

    static double infinityMinus() {
        return (10 / -0.0);
    }

    static double infinityPlusAgain() {
        return (10.0 / 0);
    }

    static double infinityPlusAgainAgain() {
        return (10.0 / -0);
    }

    static void yPost() {
        int x = 1;
        int y = x++;
        System.out.println("y = x++");
        System.out.println("y = " + y);
        System.out.println("x = " + x);
    }

    static void yPre() {
        int x = 1;
        int y = ++x;
        System.out.println("y = ++x");
        System.out.println("y = " + y);
        System.out.println("x = " + x);

    }

}
