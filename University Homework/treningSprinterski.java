// Napisać program przyspieszający ocenę treningów sprintera. Sprinter wielokrotnie pokonuje jednakowy dystans, jego czasy (wyrażone w sekundach) są notowane prze trenera. 
// Po treningu zanotowane czasy są wpisywane do komputera. Liczba wprowadzanych czasów jest bliżej nieznana. 
// Po wprowadzeniu wszystkich czasów program wyznacza następujące parametry: czas minimalny, czas maksymalny, czas średni. 
// Czas jest liczba rzeczywistą, większą od zera. Można złożyć, że wprowadzenie zerowego czasu oznacza koniec wprowadzanej serii czasów.

import java.util.*;

public class treningSprinterski {

    double time, sum = 0, minTime = Double.MAX_VALUE, maxTime = 0, avgTime = 0;
    Scanner scanner = new Scanner(System.in);
    int counter = 0;

    boolean isEnd = false;

    while(!isEnd) {
        System.out.println("Set time: ");
        System.out.print(">> ");
        time = scanner.nextDouble();
        if (time == 0) break;
        counter++;
        sum += time;
        if (time > maxTime) maxTime = time;
        if (time < minTime) minTime = time;
    }

    avgTime = sum / counter;

    System.out.println("Average: " + avgTime);
    System.out.println("Min: " + minTime);
    System.out.println("Max: " + maxTime);
}
