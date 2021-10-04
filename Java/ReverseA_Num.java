package Getting_Started;

import java.util.Scanner;

public class ReverseA_Num {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        while (n>0){
            int rem = n % 10;
            n = n/10;
            System.out.println(rem);
        }
    }
}
