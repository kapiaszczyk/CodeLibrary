## Part I
1.  Napisać program wyliczający pole trójkąta — program wczytuje wysokość h, podstawę a (są to dowolne liczby rzeczywiste), oblicza pole (P=(a*h)/2) i wyświetla wynik. Zakładamy, że długości a i h są wyrażone w centymetrach, wynik ma być wyrażony w metrach kw.. Program powinien na samym początku wyświetlić krótką informację o jego przeznaczeniu oraz zatrzymać swoje wykonanie po wyświetleniu wyniku — do czasu naciśnięcia klawisza Enter.
2.  Napisać program wyliczający pole koła oraz kwadratu na nim opisanego — program wczytuje promień r (to dowolna liczba rzeczywista), oblicza pole (P=π*r2), długość boku kwadratu opisanego na takim okręgu, oraz jego pole (P=a2, gdzie a to bok kwadratu) i wyświetla te wyniki. Program powinien na samym początku wyświetlić krótką informację o jego przeznaczeniu oraz zatrzymać swoje wykonanie po wyświetleniu wyniku — do czasu naciśnięcia klawisza Enter.
3.  Cena brutto to cena netto powiększona o pewien podatek, wyrażony procentowo. Jeżeli coś kosztuje netto 100zł, a kwota podatku to 23%, cena brutto wynosi 123zł. Napisać program, który wyznaczy cenę brutto na podstawie ceny netto oraz podatku wyrażonego procentowo — program wczytuje cenę netto, podatek wyrażony procentowo (są to dowolne liczby rzeczywiste) i wyświetla wynik. Program powinien na samym początku wyświetlić krótką informację o jego przeznaczeniu oraz zatrzymać swoje wykonanie po wyświetleniu wyniku — do czasu naciśnięcia klawisza Enter.
4.  Wynagrodzenie pewnego pracownika to liczba przepracowanych godzin przemnożona przez stawkę godzinową. Napisać program, który wyznaczy wynagrodzenie pracownika po wczytaniu liczby przepracowanych godzin oraz stawki (są to dowolne liczby rzeczywiste). Dodatkowo program ma wyznaczyć, ile pracownik zarobił na dniówkę, zakładając, że pracuje zawsze, równo 8 godzin. Program powinien na samym początku wyświetlić krótką informację o jego przeznaczeniu oraz zatrzymać swoje wykonanie po wyświetleniu wyników — do czasu naciśnięcia klawisza Enter.
5.  Szybkostrzelność teoretyczna karabinka automatycznego AK (Automat Kałasznikowa) wynosi 600strzałów/minutę. Magazynek karabinka mieści 30 naboi. Napisać program, który wczyta wyrażony w sekundach czas (dowolna liczba całkowita) trwania ognia ciągłego, prowadzonego z takiego karabinka. Ćwiczeniem programu jest wyznaczyć liczbę magazynków, które trzeba by wymienić, aby strzelać ogniem ciągłym przez wprowadzony czas. Program powinien na samym początku wyświetlić krótką informację o jego przeznaczeniu oraz zatrzymać swoje wykonanie po wyświetleniu wyniku— do czasu naciśnięcia klawisza Enter.
6.  Proszę napisać program wczytujący moc wyrażoną w koniach mechanicznych (ang. hpm — horsepower metric) i przeliczający wczytaną wartość na kilowaty (kW) oraz na jednostkę zwaną angielskim koniem parowym (ang. hp — horsepower).
7.  Proszę napisać program wczytujący temperaturę wyrażona w stopniach Celsjusza przeliczający wczytaną wartość na skalę Kelwina i Fahrenheita.
8.  Proszę napisać program wczytujący kwotę w złotówkach i przeliczający wczytaną wartość na jej odpowiednik w dolarach, euro, rupiach i frankach szwajcarskie. Kwota może być liczbą rzeczywistą, wynik powinien być wyświetlany z dokładnością do dwóch miejsc po przecinku. Przeliczniki walut są stałymi zapisanymi w programie, zmiana kursu wymaga rekompilacji programu.

Source: [link](http://programowanie.siminskionline.pl/java/proste-programy-mdash-zadania/)

## Part II

1.  **Rok przestępny**. Proszę napisać program wyliczającą liczbę całkowitą oznaczającą rok. Program ma sprawdzić, czy ten rok jest przestępny czy nie.
2.  **Biblioteczny egzekutor**. Proszę napisać program wyliczającą wartość kary za nieterminowe oddanie książki. Program pyta o liczbę dni opóźnienia (lbDni) oraz o kwotę kary za jednodniowe opóźnienie (zaDzien). Za opóźnienie do 15-u dni nalicza się karę w wysokości: zaDzien * lbDni  
    Za opóźnienie od 16 do 30 nalicza się karę w wysokości takiej jak za 15 dni plus 150% opłaty za każdy dzień ponad 15. Za opóźnienie ponad 30 dni nalicza się karę w wysokości takiej jak za 30 dni plus 250% opłaty za każdy dzień ponad 30.
3.  **Sumaryczny i średni dochód**. Napisać program pozwalający na wyznaczane sumarycznego i średniego dochodu, opierając się na dochodach uzyskanych w kolejnych 12-stu miesiącach roku podatkowego. Program wczytuje ze strumienia wejściowego dochody z kolejnych 12-stu miesięcy, następnie wyznacza dochód sumaryczny i średni, oraz wyprowadza wyznaczone informacje do strumienia wyjściowego programu.
4.  **Trening sprinterski**. Napisać program przyspieszający ocenę treningów sprintera. Sprinter wielokrotnie pokonuje jednakowy dystans, jego czasy (wyrażone w sekundach) są notowane prze trenera. Po treningu zanotowane czasy są wpisywane do komputera. Liczba wprowadzanych czasów jest bliżej nieznana. Po wprowadzeniu wszystkich czasów program wyznacza następujące parametry: czas minimalny, czas maksymalny, czas średni. Czas jest liczba rzeczywistą, większą od zera. Można złożyć, że wprowadzenie zerowego czasu oznacza koniec wprowadzanej serii czasów.
5.  **Statystyka ocen**. Zakładamy, że grupa studencka liczy 15 osób. Proszę napisać program, który wczyta ocenę zaliczeniową każdego studenta (razem 15 liczb, każda z przedziału 2..5, inne oceny mają być ignorowane). Po wprowadzeniu ocen, program ma wyświetlić ilu studentów uzyskało 2-ki, 3-ki, 4-ki a ilu 5-ki.
6.  **Meteorolog w domu i zagrodzie**. Każdego dnia tygodnia meteorolog notuje odczyt temperatury. Po zgromadzeniu odczytów z 7-u dni dokonuje on analizy temperatur. Wyznacza temperaturę średnią, najniższą wśród dodatnich oraz najwyższą wśród ujemnych a także numery dni w których te temperatury wystąpiły. Proszę napisać program, który pozwoli na wczytanie siedmiu odczytów temperatur (liczby rzeczywiste) i wyznaczy:
    
    -   temperaturę średnią,
    -   najniższą wśród dodatnich oraz numer dnia w którym to nastąpiło,
    -   najwyższą wśród ujemnych oraz numer dnia w którym to nastąpiło.
    
    Wartości te mają zostać wyprowadzone do strumienia wyjściowego programu. Można założyć, że temperatury nie będą większe niż 100 st. C i mniejsze niż -100 st. C. Dni numerujemy w taki sposób, że poniedziałek ma numer 1, wtorek nr 2 itd. Proszę tak napisać program, aby łatwo było zmieniać liczbę dni w kodzie programu.
Source: [link](http://programowanie.siminskionline.pl/java/proste_instrukcje/)
## Part III
1.  **„Tabliczka mnożenia”**. Napisać program wyświetlający tabliczkę mnożenia w postaci zamieszczonej poniżej. Pierwszy wiersz i pierwsza kolumna zawierają mnożną i mnożnik, elementy na przecięciu i-tej kolumny i j-go wiersza zawierają iloczyn i*j. Proszę spróbować poprawić czytelność tabeli poprzez wprowadzanie linii rozdzielającej pierwszy wiersz i pierwszą kolumnę, złożonej odpowiednio ze znaków ’-’ oraz '|’.
    
    Prosta tabela
    
     1  2  3  4  5  6  7  8  9 10 
     2  4  6  8 10 12 14 16 18 20 
     3  6  9 12 15 18 21 24 27 30 
     4  8 12 16 20 24 28 32 36 40 
     5 10 15 20 25 30 35 40 45 50 
     6 12 18 24 30 36 42 48 54 60 
     7 14 21 28 35 42 49 56 63 70 
     8 16 24 32 40 48 56 64 72 80 
     9 18 27 36 45 54 63 72 81 90 
    10 20 30 40 50 60 70 80 90 100
    
    Tabela z liniami
    
     1 |  2  3  4  5  6  7  8  9 10 
    --------------------------------
     2 |  4  6  8 10 12 14 16 18 20 
     3 |  6  9 12 15 18 21 24 27 30 
     4 |  8 12 16 20 24 28 32 36 40 
     5 | 10 15 20 25 30 35 40 45 50 
     6 | 12 18 24 30 36 42 48 54 60 
     7 | 14 21 28 35 42 49 56 63 70 
     8 | 16 24 32 40 48 56 64 72 80 
     9 | 18 27 36 45 54 63 72 81 90 
    10 | 20 30 40 50 60 70 80 90 100 
    
    **Wskazówka**: Proszę się zainteresować funkcją printf (C, C++, Java (System.out) ) która pozwala formatować wyprowadzane informacje w zakresie szerokości pola oraz wyrównania tekstu w jego obrębie.
    
2.  **Silnia**. Napisać program wyliczający wartość silni. Program pyta użytkownika o wartość liczby  _n_  dla której ma zostać wyliczona silnia  _n!_. Proszę napisać program w taki sposób, aby użytkownik nie mógł wpisać ujemnej wartości  _n_. Proszę opracować  **trzy**  wersje programu, wykorzystujące iteracje  `do-while`,  `while`  oraz  `for`.  **Uwaga**, proszę przeprowadzić eksperymenty i wyznaczyć wartość  _n_  przy którym program przestanie poprawnie wyliczać wartość silni. Proszę spróbować zmodyfikować program tak, aby sam wykrywał ostatnią wartość  _n_  dla której obliczenia są poprawne. Proszę zidentyfikować przyczynę błędu oraz zaproponować w jaki sposób powiększyć wartość  _n_  dla której obliczenia będą wykonywane poprawnie. Czy można uzyskać poprawne wyniki dla dowolnie dużego  _n_?
3.  **Fibonacci**. Napisać program wyliczający wartość  _n_-go wyrazu ciągu Fibonaciego. Program pyta użytkownika o numer wyrazu  _n_  dla którego ma zostać wyznaczona wartość. Proszę napisać program w taki sposób, aby użytkownik nie mógł wpisać ujemnej wartości  _n_. Proszę opracować  **trzy**  wersje programu, wykorzystujące iteracje  `do-while`,  `while`  oraz  `for`.  **Uwaga**, proszę przeprowadzić eksperymenty i wyznaczyć wartość  _n_  przy którym program przestanie poprawnie wyliczać wartość ciągu. Proszę spróbować zmodyfikować program tak, aby sam wykrywał ostatnią wartość  _n_  dla której obliczenia są poprawne. Proszę zidentyfikować przyczynę błędu oraz zaproponować w jaki sposób powiększyć wartość  _n_  dla której obliczenia będą wykonywane poprawnie. Czy można uzyskać poprawne wyniki dla dowolnie dużego  _n_? Jak jest graniczna wartość_n_  dla ciągu Fibonacciego, jaka dla silni, jeżeli są różnice to czym są spowodowane?
4.  **„Za mało za dużo”**. Napisać program pozwalający użytkownikowi na odgadnięcie liczby wylosowanej przez komputer. Program losuje nieznaną użytkownikowi liczbę (zakładamy np. przedział 1..100), użytkownik typuje liczbę, program odpowiada użytkownikowi czy to dobra liczba, czy też za mała, lub za duża. Gra trwa tak długo, aż użytkownik odgadnie wylosowaną liczbę. Proszę opracować  **dwie**  wersje programu, wykorzystujące iteracje  `do-while`  oraz  `while`.
5.  **Odwrotne „Za mało za dużo”**. Napisać program w wersji, w której komputer odgaduje liczbę wymyśloną przez użytkownika. Komputer typuje liczbę (zakładamy np. przedział 1..100) oraz pyta użytkownika czy to dobra liczba, czy też za mała, lub za duża. Gra trwa tak długo, aż użytkownik potwierdzi odgadnięcie liczby, lub komputer zorientuje się, że użytkownik oszukuje i podaje niewłaściwe odpowiedzi. Proszę opracować  **dwie**  wersje programu, wykorzystujące iteracje  `do-while`  oraz  `while`.
Source: [link](http://programowanie.siminskionline.pl/java/iteracje-cwiczenia/)

## Part IV
1.  **Podwyżka**. Proszę napisać program wczytujący ze strumienia wejściowego zarobki (liczby double) pracowników pewniej firmy. Zakładamy, że jest ich 10. Proszę „dać podwyżkę” świąteczną w wysokości 30% zarobku dla osób zarabiających do 1500zł, 20% osobom zarabiającym więcej niż 1500 a mniej niż 3000, oraz 10% osobom zarabiającym 3000zł i więcej. Proszę wypisać do strumienia wyjściowego zaktualizowane zarobki każdego pracownika, sumę zarobków wszystkich pracowników przed podwyżką, sumę zarobków po podwyżce oraz różnicę pomiędzy tymi wartościami.
2.  **Promocja**. W ramach przedświątecznych promocji pewien sklep elektroniczny obniża ceny swoich towarów. Promocja polega na tym, że towary o cenie wyższej niż cena średnia zmniejszane są o 10% a ceny towarów mniejsze od ceny średniej zwiększane są o 15%. Proszę napisać program, który zapyta użytkownika o liczbę towarów w promocji i wczyta ceny poszczególnych towarów. Następnie program ma wyświetlić tabelę cen towarów, w każdej linii ma zostać wyświetlona cena przed korektą, cena po korekcie, oraz na końcu linii znak + gdy cena została zwiększona, znak – gdy cena została zredukowana oraz znak * gdy cena nie została zmodyfikowana. Proszę zadbać o estetyczne sformatowanie tabeli. Pod zestawieniem cen ma być wyświetlona informacja określająca bilans promocji stanowiący różnicę pomiędzy sumą podwyżek cen a sumą obniżek cen.
3.  **Odwracacz**. Proszę napisać program tworzący tablicę 10 liczb całkowitych. Program ma:
    -   wypełnić tablicę losowymi liczbami, wyświetlić jej zawartość;
    -   odwrócić kolejność liczb w tablicy, wyświetlić jej zawartość.
4.  **Wyszukiwacz**. Proszę napisać program tworzący tablicę 10 liczb całkowitych. Program ma:
    
    -   wypełnić tablicę losowymi liczbami z przedziały 1..10,
    -   poprosić użytkownika o wprowadzenie dowolnej liczby całkowitej,
    -   sprawdzić, czy liczba wprowadzona przez użytkownika występuje wśród losowych liczb zapisanych w tablicy, jeżeli tak jest, program ma wyświetlić informację o numerze elementu tablicy, którego wartość jest zgodna z wartością poszukiwaną.
    
    **Uwaga**, poszukiwana wartość może wystąpić w tablicy więcej niż raz.
    
5.  **Maraton**. W maratonie startuje pewna liczba biegaczy. Każdy biegacz otrzymuje numer startowy, numery są kolejnymi liczbami całkowitymi: 1, 2, 3, … N, gdzie N to liczba zapisanych biegaczy. Przed rozpoczęciem biegu liczba biegaczy jest znana. Należy napisać program wspomagający rejestrowanie biegaczy na mecie maratonu. Zakładamy, że osoby dyżurujące na mecie maratonu podają operatorowi komputera numery kolejnych biegaczy przekraczających linię mety. Po upłynięcie pewnego czasu lista biegaczy jest zamykana, rejestracja się kończy. Program ma zarejestrować kolejność biegaczy, oraz wyświetlić:
    
    -   Listę wyników: lista numerów startowych biegaczy w kolejności wbiegania na metę. Pierwszy na liście jest numer startowy zawodnika pierwszego na mecie, drugi drugiego itd. Numery biegaczy, którzy nie zarejestrowali się na mecie są pomijane. Format: [kolejność na mecie]. [numer startowy].
        
        1. 345
        2. 12
        3. 412
        . . .
        
    -   Listę uczestników: lista numerów startowych uporządkowana rosnąco uzupełniona o kolejność na mecie. W przypadku zawodników, którzy nie zarejestrowali się na mecie, należy wyświetlić informację „Nie ukończył”. Format: [numer startowy]. [kolejność na mecie|”Nie ukończył”].
        
        1. Nie ukończył
        2. 345
        3. 1
        4. Nie ukończył
        5. 23
        . . .
        
    
    **Uwaga**, program mam pytać o liczbę zapisanych biegaczy, wprowadzanie kolejności na mecie musi mieć możliwość zakończenia w dowolnym momencie (przed zameldowaniem się na mecie wszystkich zawodników).
Source: [link](http://programowanie.siminskionline.pl/java/tablice/) 
## Part V
### Identyfikacja rodzaju znaku

1.  Proszę napisać funkcję:  `boolean isLower( char c ) { ... }`, rezultatem funkcji ma być wartość false, jeżeli znak c nie jest małą literą, lub wartość true, gdy znak c jest małą literą.
2.  Proszę napisać funkcję:  `boolean isUpper( char c ) { ... }`, rezultatem funkcji ma być wartość false, jeżeli znak c nie jest dużą literą, lub wartość true, gdy znak c jest dużą literą.
3.  Proszę napisać funkcję:  `boolean isDigit( char c ) { ... }`, rezultatem funkcji ma być wartość false, jeżeli znak c nie jest cyfrą dziesiętną, lub wartość true, gdy znak c jest cyfrą dziesiętną.
4.  Proszę napisać funkcję:  `boolean isHexDigit( char c ) { ... }`, rezultatem funkcji ma być wartość false, jeżeli znak c nie jest cyfrą szesnastkową, lub wartość true, gdy znak c jest cyfrą szesnastkową.
5.  Proszę napisać funkcję:  `boolean isWhiteChar( char c ) { ... }`, rezultatem funkcji ma być wartość false, jeżeli znak c nie jest tzw „białym znakiem”, lub wartość true, gdy znak c nim jest. Zakładamy, że białe znaki to  `' '`,  `'\n'`,  `'\r'`,  `'\t'`.
6.  Proszę napisać funkcję:  `boolean isAlphaNum( char c ) { ... }`, rezultatem funkcji ma być wartość false, jeżeli znak c nie jest literą ani cyfrą, lub wartość true, gdy znak c to litera (mała lub duża) lub cyfra dziesiętna.

Uwaga, klasa  `Scanner`  nie posiada jawnej funkcji odczytu pojedynczego znaku. Można to zrobić np. tak:

1

`char` `znak = wejscie.nextLine().charAt(` `0` `);`

### Wczytywanie liczby z zakresu

Proszę napisać funkcję:  `double czytajLiczbeZZakresu( String pytanie, String blad, double dol, double gora ) { ... }`. Funkcja odczytuje z klawiatury liczbę rzeczywistą, przy czym pozwala tylko na wprowadzenie liczby należącej do przedziału domkniętego określonego parametrami  _dol_  i  _gora_. Wczytana liczba jest rezultatem funkcji. Funkcja pyta użytkownika o wartość liczby zawartością łańcucha znaków  _pytanie_, odpytywanie użytkownika trwa tak długo, aż zostanie wprowadzona liczba z odpowiedniego zakresu. W przypadku wprowadzenia nieprawidłowej liczby, funkcja ma wyprowadzić komunikat określony łańcuchem znaków  _blad_, i przejść do ponownego wczytania liczby. Może zdarzyć się sytuacja, że  _gora_  <=  _dol_, proszę uwzględnić ten przypadek.

### Przeliczenia

1.  Proszę napisać funkcję:  `bool jestPrzestepny( int rok ) { … }`  sprawdzającą, czy liczba przekazana parametrem  _rok_  oznacza rok przestępny. Rezultatem funkcji ma być wartość  _true_  gdy rok jest przestępny,  _false_  w przeciwnym przypadku.
2.  Proszę napisać funkcję:  `double cenaBrutto( double cenaNetto, double podatek ) { … }`  wyliczającą cenę brutto na podstawie ceny neto oraz wyrażonej w procentach wielkości podatku VAT. Rezultatem wywołania:  `double cena = cenaBrutto( 100, 23 );`  ma być cena == 123.
3.  Proszę napisać funkcję:  `double cenaNetto( double cenaBrutto, double podatek ) { … }`, wyliczającą cenę netto na podstawie ceny brutto oraz wyrażonej w procentach wielkości podatku VAT. Rezultatem wywołania:  `double cena = cenaNetto( 123, 23 );`  ma być cena == 100.
4.  Proszę napisać funkcję:  `double wartoscPodatku( double cenaBrutto, double podatek ) { … }`  wyliczającą wartość podatku na podstawie ceny brutto oraz wyrażonej w procentach wielkości podatku VAT. Rezultatem wywołania:  `double podatek = cenaNetto( 123, 23 );`  ma być podatek == 23.
5.  Proszę napisać funkcję:  `double odsetkiStale( double kwota, double lbDni, double odsetkiZaDzien ) { … }`  wyliczającą wartość odsetek karnych za zwłokę w zapłaceniu podatku. Parametr  _kwota_  określa kwotę zaległego podatku,  _lbDni_  zawiera liczbę dni po terminie zapłaty,  _odsetkiZaDzien_  zawiera procent od kwoty zaległego podatku naliczany każdego dnia. Wyznaczenie odsetek polega na wyliczeniu kwoty odsetek za każdy dzień zwłoki i przemnożeniu przez liczbę dni. Odsetki za każdy dzień zwłoki są stałe, naliczane są od kwoty wejściowej (parametr kwota). Rezultatem wywołania  `double odsetki = odsetkiStale( 1000, 10, 3 );`  ma być odsteki == 300.
6.  Proszę napisać funkcję:  `double odsetkiProgresywne( double kwota, double lbDni, double odsetkiZaDzien ) { … }`  wyliczającą wartość odsetek karnych za zwłokę w zapłaceniu podatku. Parametr  _kwota_  określa kwotę zaległego podatku,  _lbDni_  zawiera liczbę dni po terminie zapłaty,  _odsetkiZaDzien_  zawiera procent od kwoty zaległego podatku naliczany każdego dnia. Wyznaczenie odsetek polega na wyliczeniu kwoty odsetek za każdy dzień zwłoki i przemnożeniu przez liczbę dni. Odsetki za każdy dzień zwłoki są  _zmienne_, naliczane są od kwoty wejściowej (parametr kwota) powiększonej o sumę odsetek z dni poprzednich. Rezultatem wywołania  `double odsetki = odsetkiStale( 1000, 4, 3 );`  ma być odsteki == 125,51 (po zaokrągleniu do grosza), a wywołania:  `double odsetki = odsetkiStale( 1000, 10, 3 );`  ma być odsteki == 343,92 (po zaokrągleniu do grosza).
Source: [link](http://programowanie.siminskionline.pl/java/funkcje/)
## Part VI
1.  Proszę napisać funkcje otrzymujące jako parametr tablicę liczb rzeczywistych:
    
    `double suma( double [] tab ) { ... }  
    double srednia( double [] tab ) { ... }  
    double minimum( double [] tab ) { ... }  
    double maksimum( double [] tab ) { ... }  
    double maksimumUjemnych( double [] tab ) { ... }  
    double minimumDodatnich( double [] tab ) { ... }  
    int ilePowyzejSredniej( double [] tab ) { ... }  
    int najbardziejOdchylonyOdSredniej( double [] tab ) { … }`
    
    Zadaniem funkcji jest wyznaczenie dla elementów tablicy przekazanej parametrem  _tab_  odpowiednio:
    
    -   wartości średniej,
    -   sumy,
    -   wartości minimalnej,
    -   wartości maksymalnej,
    -   wartości maksymalnej wśród ujemnych,
    -   wartości minimalnej wśród elementów dodatnich,
    -   liczby elementów o wartościach większych od średniej.
    -   indeksu elementu o wartości najbardziej różniącej się od średniej.
    
    Wyznaczone wartości mają być rezultatem każdej z funkcji.
    
2.  Proszę napisać funkcję:  `int podwyzkaWynagrodzeniaProc( double [] wynagrodzenia, int procentPodwyzki ) { … }`, która otrzymuje dwa parametry:
    
    1.  tablicę liczb rzeczywistych  _wynagrodzenia_, każdy element tej tablicy to wynagrodzenie pracownika pewnej firmy,
    2.  liczbę całkowitą  _procentPodwyzki_, która zawiera wartość procentową, o jaką należy podnieść każde wynagrodzenie w tablicy wynagrodzenia.
    
    Zadaniem funkcji jest podniesienie wartości każdego wynagrodzenia zapisanego w tablicy  _wynagrodzenia_  o wartość określoną procentowo przez parametr  _procentPodwyzki_  – jeżeli wynagrodzenie wynosi 2000 a procent podwyżki 10, to wynagrodzenie po podwyżce powinno wynosić 2200. Rezultatem funkcji ma być wartość najwyższego wynagrodzenia po podwyżce.
    
3.  Proszę napisać funkcję:  `double podwyzkaWynagrodzeniaSred( double [] wynagrodzenia ) { … }`  która otrzymuje jako parametr tablicę liczb rzeczywistych  _wynagrodzenia_, każdy element tej tablicy to wynagrodzenie pracownika pewnej firmy. Zadaniem funkcji jest podniesienie wartości każdego wynagrodzenia zapisanego w tablicy wynagrodzenia o 10% średniego wynagrodzenia – średnia obliczana jest ze wszystkich elementów tablicy wynagrodzenia, rozpatrywanych przed naliczeniem jakiejkolwiek podwyżki. Rezultatem funkcji ma być wartość najwyższego wynagrodzenia po podwyżce.
4.  Pewna firma chce obniżyć ceny swoich towarów. Cena każdego towaru ma być zmniejszona o pewną, określoną procentowo wartość ceny wyjściowej (np. przecena o 10% ceny wyjściowej). Następnie najdroższe towary są ponownie przeceniane o pewną, drugą wartość określoną procentowo. Najdroższe towary, to takie, których cena jest większa lub równa 80% maksymalnej ceny po pierwszej przecenie. Proszę napisać funkcję:  `int przecena( double [] ceny, int przecena1, int przecena2 ) { ... }`  która zrealizuje taką strategię przecen dla cen zapisanych w tablicy  _ceny_  przekazanej pierwszym parametrem funkcji. Funkcja otrzymuje następujące parametry:
    
    -   tablicę liczb rzeczywistych  _ceny_, każdy element tej tablicy to cena pewnego produktu,
    -   liczbę całkowitą  _przecena1_, która zawiera wartość procentową, o jaką należy obniżyć cenę każdego produktu (pierwsza przecena).
    -   liczbę całkowitą  _przecena2_, która zawiera wartość procentową, o jaką należy obniżyć najdroższych produktów (druga przecena).
    
    Rezultatem funkcji ma być liczba elementów tablicy, które zostały podwójnie przecenione. Uwaga — proszę kontrolować wartości parametrów.
    
5.  Proszę napisać funkcję:  `double [] premiaSwiateczna( double [] wynagrodzenia ) { ... }`, która otrzymuje jako parametr tablicę liczb rzeczywistych  _wynagrodzenia_, każdy element tej tablicy to wynagrodzenie pracownika pewnej firmy. Zadaniem funkcji jest wyznaczenie dla każdego pracownika kwoty premii świątecznej. Funkcja ma utworzyć dodatkową tablicę na wartości premii, tablica ta ma być rezultatem funkcji. Wartość premii wyznacza się na postawie i-tego wynagrodzenia, ma być wstawiona do i-tego elementu nowej tablicy. Premia wyznaczana jest względem wartości najwyższego wynagrodzenia występującego w tablicy  _wynagrodzenia_, i tak: pracownicy o wynagrodzeniu mniejszym lub równym 30% maksymalnego otrzymują premię w wysokości 20% swojego wynagrodzenia, pracownicy o wynagrodzeniu powyżej 30% a poniżej 60% otrzymują premię w wysokości 10% swojego wynagrodzenia, pracownicy o wynagrodzeniu 60% i więcej otrzymuję premię w wysokości 5% swojego wynagrodzenia.
6.  Proszę napisać program, który wyprowadza do strumienia wyjściowego zestaw liczb, stanowiących typowanie do losowania tzw. „dużego totka”. Zestaw zawiera sześć losowych, niepowtarzających się liczb wybranych z zakresu [1…49].
7.  Proszę napisać program, który wyprowadza do strumienia wyjściowego pewną liczbę zestaw typowań do losowania tzw. „dużego totka”. Zestaw zawiera sześć losowych, niepowtarzających się liczb wybranych z zakresu [1…49]. Program mam pytać użytkownika o liczbę zastawów do wygenerowania, program ma w kolejnych wierszach wyprowadzić proponowane zestawy. Przykładowo, gdy użytkownik zażyczy sobie 4-ech zestawów, program może wypisać:
    
    Zestaw 1: 32 8 38 4 8 14
    Zestaw 2: 24 23 19 49 25 11
    Zestaw 3: 3 21 8 49 28 2
    Zestaw 4: 20 6 45 11 44 38
Source: [link](http://programowanie.siminskionline.pl/java/funkcje-i-tablice-jednowymiarowe/)
## Part VII
1.  Proszę napisać funkcję  `int wypisz( char [] [] tab ) { ... }`, której zadaniem jest wypisanie do strumienia wyjściowego programu zawartości dwuwymiarowej tablicy przekazanej parametrem  `tab`. Format wyprowadzanych danych powinien odpowiadać zawartości tablicy – w kolejnych wyprowadzanych wierszach powinny pojawiać się znaki zapisane w kolejnych wierszach tablicy. Rezultatem funkcji powinna być liczba znaków w tablicy tab, nie będących spacją.
2.  Zakładamy, że rozpatrujemy dwuwymiarową, kwadratową tablicę znaków (liczba wierszy jest równa liczbie kolumn). Proszę napisać funkcje (otrzymujące taką kwadratową tablicę jako parametr):
    
    -   `void backSlash( char [][] tab ) { … }`  — funkcja wpisuje znaki ‘*’ na głównej przekątnej (diagonalnej) tablicy  `tab`, pozostałe elementy tablicy są wypełnione znakami spacji.
        
        ##### 5×5
        
        *
         * 
          *
           *
            *
        
    -   `void slash( char [][] tab ) { … }`  — funkcja wpisuje znaki ‘*’ na przekątnej niediagonalnej tablicy  `tab`, pozostałe elementy tablicy są wypełnione znakami spacji.
        
        ##### 5×5
        
            *
           * 
          *
         *
        *
        
    -   `void x( char [][] tab ) { … }`  — funkcja wpisuje znaki ‘*’ na obu przekątnych tablicy  `tab`, pozostałe elementy tablicy są wypełnione znakami spacji.
        
        ##### 5×5
        
        *   *
         * * 
          *
         * *
        *   *
        
    -   `void kwadrat( char [][] tab ) { … }`  — funkcja wpisuje znaki ‘*’ do wszystkich elementów pierwszego i ostatniego wiersza oraz pierwszej i ostatniej kolumny tablicy  `tab`, pozostałe elementy tablicy są wypełnione znakami spacji.
        
        ##### 5×5
        
        *****
        *   * 
        *   *
        *   *
        *****
        
    
    Do testowania funkcji proszę wykorzystać napisaną wcześniej funkcję  `wypisz`.
    
3.  Proszę napisać funkcję  `void literaA( char [][] znak ) { ... }`, której zadaniem jest zapisanie w tablicy znaków o nazwie  `znak`  wizerunku litery A zbudowanej ze znaków ‘*’. Funkcja powinna przeanalizować wymiary tablicy  `znak`  rozmieścić w niej znaki ‘*’ maksymalnie wykorzystując obszar tablicy. Do testowania funkcji proszę wykorzystać napisaną wcześniej funkcję  `wypisz`. Można założyć, że dla tablic o rozmiarze mniejszym niż 3×3 funkcja nie będzie działać. Przykładowe rozmieszczeni znaków w tablicach o różnych wymiarach:  
    
    ##### 4×4
    
     **   
    *  *  
    ****
    *  *
    
    ##### 4×7
    
     ***** 
    *     *
    *******
    *     *
    
    ##### 4×3
    
     * 
    * *
    ***
    * *
    * *
    
    ##### 3×3
    
     * 
    ***
    * *
    
    Proszę napisać analogiczne funkcje dla liter E, F, H, L, O, U. Można się pokusić o napisanie funkcji dla wszystkich dużych liter alfabetu angielskiego.
    
4.  Załóżmy, że w pewnych zawodach triathlonowych, dla każdego zawodnika osobno wyznacza się czas pływania, jazdy na rowerze i biegu. Uzyskane czasy są zapisywane w papierowej tabeli mającej tyle wierszy ilu jest zawodników oraz tyle kolumn ile konkurencji (czyli dla triathlonu 3). Proszę napisać funkcję  `double podsumowanieWynikow( double [][] wyniki ) { … }`. Funkcja otrzymuje dwuwymiarową tablicę zawierająca wyniki przepisane z tabeli papierowej, tablica ma tyle wierszy ilu jest zawodników oraz ma kolumn o jeden więcej niż liczba konkurencji (zatem dla triathlonu cztery kolumny). Dodatkowa kolumna zawiera nieistotne wartości początkowe, zadaniem funkcji jest wstawienie do każdego elementu dodatkowej kolumny sumy zawartości wcześniejszych kolumn — dotyczy to każdego wiersza. A więc w przypadku triathlonu, dla każdego zawodnika (wiersza) ostatnia kolumna będzie zawierała sumę czasów uzyskanych w każdej z trzech konkurencji. Przykład dla dwóch zawodników:
    
    10 23 15 48
    11 25 18 54
    . . . . . .
    
    Rezultatem funkcji ma być najlepszy (a więc najkrótszy) czas sumaryczny.
Source: [link](http://programowanie.siminskionline.pl/java/tablice-wielowymiarowe/)
## Part VIII
1.  Proszę zdefiniować klasy reprezentujące podstawowe figury geometryczne: kwadrat, prostokąt, koło. Każda z klas powinna przechowywać w prywatnych polach informacje potrzebne do obliczenia pola powierzchni i obwodu danej figury. Dla każdego pola prywatnego należy zdefiniować metodę ustawiającą i pobierającą wartość. Należy zadbać o to, aby nie było możliwe ustawienie ujemnej wartości parametrów figur (np. boku kwadratu czy promienia koła). Każda klasa powinna posiadać zdefiniowane metody obliczające pole powierzchni figury oraz jej obwód. Należy również zdefiniować dla każdej klasy konstruktor bezparametrowy oraz konstruktor ogólny. Proszę napisać program pozwalający na obliczanie pól i obwodów figur płaskich, realizowane z wykorzystaniem zdefiniowanych klas.
2.  Proszę zdefiniować klasę pozwalającą na przechowywanie informacji o osobie. Klasa ma umożliwiać przechowywanie: imienia, nazwiska, adresu e-mail oraz roku urodzenia. Domyślne wartości pół łańcuchowych to łańcuch pusty (“”), dla roku urodzenia to 0. Wszystkie informacje mają być przechowywane w polach prywatnych, dla każdego pola należy zdefiniować metody ustawiania/pobierania wartości. Metody ustawiania imienia i nazwiska powinny kontrolować i formatować zawartość pól. Jeżeli łańcuch znaków przekazany jako parametr metody ustawiającej imię będzie zawierał znak inny niż litera, taki łańcuch znaków jest odrzucany i przyjmuje się dla pola imię wartość “Nieznane”. Dla poprawnych imion pierwsza litera ma być ustawiana na dużą, pozostałe litery powinny być literami małymi. Podobnie powinno być w przypadku nazwisk, przy czym tutaj dozwolonym znakiem dla nazwisk dwuczłonowych jest znak ‘-’. W przypadku nazwisk dwuczłonowych pierwsza litera po znak ‘-’ powinna być literą dużą. Należy kontrolować poprawność adresu e-mail, proszę zaproponować metodę weryfikacji oferującą podstawowe czynności kontrolne (obezność znaku ‘@’ i znaków kropki). Zakładamy, że ustawiana data urodzenia nie powinna być mniejsza niż 1900 a większa niż rok aktualny.  
    Proszę dla każdej metody ustawiającej wartości pól przygotować zestaw testów oraz napisać program testujący poprawność działania metod zdefiniowanej klasy.
Source: [link](http://programowanie.siminskionline.pl/java/programowanie-obiektowe-wprowadzenie/)
## Part IX
1.  **Przeglądacz plików**. Proszę napisać program wyświetlający do strumienia wyjściowego zawartość pliku o nazwie podanej jako parametr programu. Jeżeli został on uruchomiony bez parametrów, program powinien zapytać o nazwę pliku do wyświetlenia. Wyświetlanie powinno odbywać się ze stronnicowaniem — po wyświetleniu 24 wierszy program powinien zatrzymywać się, wypisywać komunikat: Naciśnij Enter by kontynuować…. Po naciśnięciu Entera wyświetlanie powinno być kontynuowane.
2.  **Numerator linii**. Proszę napisać program kopiujący zawartość źródłowego pliku tekstowego do pliku docelowego, w pliku docelowym na początku każdej linii tekstu powinien być zapisany jej numer zakończony znakiem dwukropka. Program powinien zapytać o nazwy obu plików. Przykład:
    
    Plik źródłowy
    
    To jest 
    przykładowy
    plik tekstowy
    
    Plik docelowy
    
    1: To jest 
    2: przykładowy
    3: plik tekstowy
    
3.  **Raport magazynowy**. Plik tekstowy zawiera w każdej linii informację o towarach przechowywanych w magazynie sklepu internetowego. Są to kolejno: nazwa towaru, ilość (liczba całkowita), cena netto (liczba rzeczywista) oraz wartość podatku VAT wyrażona procentowo. Dane te są rozdzielane znakiem średnika lub przecinka. Przykład:
    
    Woda mineralna;20;1.6;23
    Woda źródlana,30,0.90,23
    Sok;10;2.50;23
    
    Proszę napisać program wyprowadzający do strumienia wyjściowego programu raport magazynowy, zbudowany na bazie pliku o powyższym formacie. Każda linia raportu ma zawierać informację o towarze, zawierającą nazwę towaru, ilość, cenę, wartość netto (ilość*cena), wartość brutto (z uwzględnieniem podatku wad ), przedstawioną w następującym formacie:
    
    Towar            Ilość   Cena     Wartość netto     Wartość brutto
    Woda mineralna   20      1.6      32                39.36
    Woda źródlana    30      0.9      27                33.21
    Sok              10      2.50     25                30.75
    
    Raport ma mieć wiersz nagłówkowy, proszę zaproponować szerokości kolumn zapewniające czytelność. Program ma zapytać użytkownika o nazwę pliku zawierającego dane źródłowe.
    
4.  **Rozdzielacz**. Plik tekstowy zawiera w każdej linii informację o osobach. Każda linia zawiera imię, nazwisko, płeć (pojedynczy znak, k lub K oznacza kobietę, m lub M oznacza mężczyznę) oraz adres email. Dane te są rozdzielane spacją lub znakiem średnika lub znakiem przecinka. Przykład:
    
    Ala Alowska k alaal@poczta.pl
    Ola Olowska K ola123@cos.tam.com
    Wojtek Wojtkowski m wojtek_woj@jakis.serwer.email.pl
    Marek Markowski;M;mareeeek@serwerek.pl
    
    Proszę napisać funkcję:
    
    void rozdzielacz( String nazwaPliku ) { ... }
    
    która otrzymuje nazwę pliku tekstowego w formacie opisanym powyżej. Zadaniem funkcji jest utworzenie dwóch plików tekstowych:  _kobiety.txt_  i  _mezczyzni.txt_  do których przepisana zostanie zawartość pliku o nazwie  _nazwaPliku_  z rozdziałem wg płci. Do pliku  _kobiety.txt_  trafią linie zawierające imiona, nazwiska i emaile kobiet, do pliku  _mezczyzni.txt_  trafią linie zawierające imiona, nazwiska i emaile mężczyzn. W obu plikach dane są rozdzielone spacjami. Zakładamy, że zawartość pliku wejściowego jest prawidłowa.
    
    Dla przykładowych danych powyżej, zawartość plików powinna być następująca:
    
    kobiety.txt
    
    Ala Alowska alaal@poczta.pl
    Ola Olowska ola123@cos.tam.com
    
    mezczyzni.txt
    
    Wojtek Wojtkowski wojtek_woj@jakis.serwer.email.pl
    Marek Markowski mareeeek@serwerek.pl
Source: [link](http://programowanie.siminskionline.pl/java/pliki-tekstowe/)
## Part X
1.  Proszę pobrać  [program demonstrujący](http://programowanie.siminskionline.pl/java/demo-pliki-binarne/)  wykorzystanie klasy  `RandomAccessFile`  do obsługi plików binarnych liczb typu  `int`  i  `double`.  **Do zrobienia**  obsługa opcji 8, 10 i 11.
2.  Można pobrać  [przykład ilustrujący wykorzystanie](http://programowanie.siminskionline.pl/java/demo-obsluga-plikow-roznych-typow/): tablicy obiektów, plików tekstowych (`BufferedReader`,  `BufferedWriter`), plików binarnych (`RandomAccessFile`), plików obiektów (`ObjectInputStrea`,  `ObjectOutputStream`), klas  `StringTokenizer`,  `StringBuilder`, funkcji  `String.split`. Proszę się zapoznać z kodem, poeksperymentować, omówione zagadnienia są stałym elementem zadań egzaminacyjnych JP UŚ, 1 semestr.
Source: [link](http://programowanie.siminskionline.pl/java/pliki-binarne-pliki-a-serializacja-obiektow/)

