package tab2db3_01;

import java.util.Random;

public class Tab2dB3_01 
{
    static void wypelnij(char t[][], char z)
    {            
        for(int w = 0; w < t.length; ++w)
            for(int k = 0; k < t[w].length; ++k)
                t[w][k] = z;
    }
    static void pokaz(char t[][])
    {
        for(int w = 0; w < t.length; ++w)
        {    
            for(int k = 0; k < t[w].length; ++k)
                System.out.print(t[w][k]);
            System.out.println();
        }    
    }
    
    static void literaA(char t[][])
    {
        for(int k = 1; k < t[0].length - 1; ++k)
        {    
            t[0][k] = '*';
            t[t.length /2][k] = '*';
        } 
        for(int w = 1; w < t.length; ++w)
        {    
            t[w][0] = '*';
            t[w][1] = '*';
            t[w][t[w].length-1] = '*';
        } 
        
    }    
    public static void main(String[] args) 
    {
        char tab[][] = new char[8][13];
        wypelnij(tab, ' ');
        literaA(tab);
        pokaz(tab);
        
//        int tab[][] = new int[5][5];
//        Random gen = new Random();
//        for(int w = 0; w < 5; ++w)
//            for(int k = 0; k < 8; ++k)
//                tab[w][k] = gen.nextInt(10) + 1;

//        for(int w = 0; w < tab.length; ++w)
//            for(int k = 0; k < tab[w].length; ++k)
//                tab[w][k] = 0;

//        for(int w = 0; w < tab.length; ++w)
//            for(int k = 0; k < tab[w].length; ++k)
//            {
//                if(w == k)
//                  tab[w][k] = 0;
//                if(k > w)
//                  tab[w][k] = 1;
//                if(k < w)
//                  tab[w][k] = -1;                    
//            }

//        for(int w = 0; w < tab.length; ++w)
//            tab[w][w] = 8;
        
//        for(int w = 0; w < tab.length; ++w)
//            tab[w][tab.length - 1 - w] = 5;        
//        
//        for(int w = 0; w < tab.length; ++w)
//        {
//            for(int k = 0; k < tab[w].length; ++k)
//                System.out.printf("%-3d ", tab[w][k]);
//            System.out.println();
//        }
    }
}
