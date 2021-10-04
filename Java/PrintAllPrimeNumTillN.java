package Getting_Started;

import java.util.Scanner;

public class PrintAllPrimeNumTillN {
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int low = scn.nextInt();
        int high = scn.nextInt();
        for(int i = low;i<=high;i++){
            int count = 0;
            for(int div = 2; div*div<=i;div++) {
                if (i % div == 0) {
                    count++;
                    break;
                }
            }
                if(count==0) {
                    System.out.println(i);
                }



        }
    }
}
