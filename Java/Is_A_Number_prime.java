package Getting_Started;

import java.util.Scanner;

public class Is_A_Number_prime {
public static void main(String[] args){
    Scanner scn = new Scanner(System.in);
    int t = scn.nextInt();
    for(int i=1;i<=t;i++){
        int n = scn.nextInt();
        int count = 0;
        for(int div = 2;div<= n/2; div++) {
            if (n % div == 0) {
                count++;
            }
        }
        if (count == 0) {
            System.out.println("Prime");
        }
            else{
                System.out.println(" Not Prime");
            }

        }
    }
}



