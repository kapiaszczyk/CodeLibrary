package com.company;

// 1.1 Hello world
/*
public class Main {

    public static void main(String[] args) {

        System.out.println("You smell like an old sock");

    }
}
*/

// 2.1 Create couple of variables
/*
public class Main {
    public static void main(String[] args) {
        int pierwszaLiczba;
        double drugaLiczba;

        pierwszaLiczba = 10;
        drugaLiczba = 22.5;

        System.out.println(pierwszaLiczba);
        System.out.println(drugaLiczba);
    }
}
*/

// 2.2
/*
public class Main {
    public static void main(String[] args) {
        int liczba = 10;
        double liczba2 = 2.25;

        System.out.println(liczba);
        System.out.println(liczba2);

    }

}
*/

// 2.3
/*
public class Main {
    public static void main(String[] args) {
        int jeden = 10, dwa = 20;
        System.out.println(jeden + dwa);
    }
}
*/

// 2.4 Arrays
/*
public class Main {
    public static void main(String[] args) {
        int array[] = new int[10]; // new array that will hold int type values
        array[0] = 1;
        System.out.println(array[0]);

    }
}
*/

// 2.7, 2.8 Arithmetic operations on variables
/*
public class Main {
    public static void main(String[] args) {

        int a = 5;
        int b = 3;
        int c = a - b;
        System.out.println(c);
        c = a + b;
        System.out.println(c);
        c = a % b;
        System.out.println(c);
        c = a * b;
        System.out.println(c);

    }
}
*/

// 2.9, 2.10
/*
public class Main {
    public static void  main(String[] args) {
        int x = 10;
        x++;
        System.out.println(x);
        x--;
        System.out.println(x);
    }
}
*/

// 2.14 Conditional operator - operator warunkowy
/*
public class Main {
    public static void main(String[] args) {
        int x = 1, y;
        y = (x == 1) ? 1 : 0;
        int a = 1, b;
        b = (x == 2) ? 1 : 0;
        System.out.println(y);
        System.out.println(b);
    }
}
*/

// 2.15 If else
/*
public class Main {
    public static void  main(String[] args) {

        int x = 1, y;
        y = (x == 1) ? 1 : 0;

        if (y == 1) {
            System.out.println("Y equals to 1");
        }

        else {
            System.out.println("Y equals to 0");
        }
    }
}
*/

// 2.16 Square roots - if else
/*
public class Main {
    public static void main(String[] args) {
        int A = 1, B = 4, C = 3;
        double delta, X, Y;

        delta = B*B - 4 * A * C;
        System.out.println(delta);

        if (delta > 0) {
            X = (Math.sqrt(delta) - B) / 2;
            Y = (Math.sqrt(delta) + B) / 2;
            System.out.println("X1 = " + X);
            System.out.println("X2 = " + Y);
        }
        else if (delta == 0) {
            X = B * (-1) / 2 * A;
            System.out.println("X = " + X);
        }
        else {
            System.out.println("Delta is negative");
        }
    }
}
*/

// 2.18 Switch
/*
public class Main {
    public static void main(String[] args) {
        int a = 5;
        switch (a) {
            case 1 :
                System.out.println("a equals 1");
                break;
            case 2 :
                System.out.println("a equals 2");
                break;
            case 5 :
                System.out.println("a equals 5");
                break;
            default :
                System.out.println("a is set to default");
                break;
        }
    }
}
*/

// 2.20 For loop
/*
public class Main {
    public static void main(String[] args) {
        int a = 2;
        System.out.println("Value of a in the beginning: " + a);
        for (int i = 1; i < 26; i++) {
            a = a * 2;
            System.out.println("Value of a in iteration number " + i + " : " + a);
        }
    }
}
*/

// 2.21 - 2.24 Different "versions" of the for loop
        /*
        for (int i = 0; i < 5; i++)
        for (int i = 0; i < 5) { i++; }
        for (int i = 0; i++ < 5)
        int i = 0; for (; i < 5;) {i++;}
        int i = 0; for (;;) {if (i++ < 5) break;}
        */

// 2.25 Continue - display numbers that cannot be divided by 2
/*
public class Main {
    public static void main(String[] args) {
        for (int i = 1; i <= 20; i++) {
            if (i % 2 == 0) {
                continue; // if condition is true, begin another iteration of the loop
            }
            System.out.println(i);
        }
    }
}
*/



// 2.26 - Display numbers that cannot be divided by 2 shorter version
/*
public class Main {
    public static void main(String[] args) {
        for (int i = 1; i <= 20; i++) {
            if (i % 2 != 0) {
                System.out.println(i);}
        }
    }
}
*/

// 2.27 While loop
/*
public class Main {
    public static void main(String[] args) {
        int i = 0;
        while (i < 10) {
            System.out.println(i);
            i++;
        }
    }
}
*/

// 2.28 While loop
/*
public class Main {
    public static void main(String[] args) {
        int i = 0;
        while (i++ < 10) {
            System.out.println(i);
        }
    }
}
*/

// 2.29 - Display numbers that cannot be divided by 2 shorter version - while loop
/*
public class Main {
    public static void main(String[] args) {
        int i = 0;
        while (i++ < 20) {
            if (i % 2 != 0) {
                System.out.println(i);}
        }
    }
}
*/

// 2.30 Show string 10 times - with do while loop
/*
public class Main {
    public static void main(String[] args) {
        int i = 1;
        do {
                System.out.println("string number " + i);
        }
        while (i++ < 10); // keep in mind that the condition is checked after the do {...} is executed at least once
    }
}
*/

// 3.1 Creating an array
/*
public class Main {
    public static void main(String[] args) {
    int tablica[] = new int[10];
    tablica[3] = 29;
    System.out.println(tablica[3]);
    }
}
*/

// 3.2 Creating an array
/*
public class Main {
    public static void main(String[] args) {
        int tablica[];
        // ...
        tablica = new int[10];
        tablica[3] = 29;
        System.out.println(tablica[3]);
    }
}
*/

// 3.3 Array again
/*
public class Main {
    public static void main(String[] args) {
        int tablica[] = {1, 8, 25, 36};
        for (int i = 0; i < 4; i++) {
        System.out.println(tablica[i]);
        }
    }
}
*/

// 3.11 New for loop
/*
public class Main {
    public static void main(String[] args) {

        int array[] = {2, 5, 3, 4, 15, 6, 65, 3, 9, 10};

        for (int val : array) {
            System.out.println(val);
        }
    }
}
*/

// 3.12 Array length
/*
public class Main {
    public static void main(String[] args) {
        int array[] = {1, 8, 25, 36};
        int size = array.length;
        System.out.println(size);
    }
}
*/

// 3.13 Array length
/*
public class Main {
    public static void main(String[] args) {

        int array[] = {2, 5, 3, 4, 15, 6, 65, 3, 9, 10};

        for (int i = 0; i < array.length ; i++) {
            System.out.println(array[i]);
        }
    }
}
*/

// 4.1 Creating a class
/*

public class Main {
    public static void main(String[] args) {

        class Point {
            int x;
            int y;
        }

        // Point point1; reference to the object, but it's not created yet unlike in c++
        Point point1 = new Point();


    }
}
*/

// 4.1 Creating a method
/*
public class Main {
    public static void main(String[] args) {

        // variableName.methodName(parameters);

        class Point {
            int x;
            int y;

            int takeX() {
                return x;
            }

            int takeY() {
                return y;
            }
        }

        Point point1 = new Point();

    }
}
*/


// 4.3 Methods + variables

public class Main {
    public static void main(String[] args) {

        // variableName.methodName(parameters);

        class Point {
            int x;
            int y;

            void setCoordinates(int crdX, int crdY) {
                x = crdX;
                y = crdY;
            }

            Point retrieveCoordinates() {
                Point point = new Point();
                point.x = x;
                point.y = y;

                return point;
            }
        }

        Point point1 = new Point();

    }
}



// page 71

/* copy-paste

public class Main {
    public static void main(String[] args) {

    }
}

*/


