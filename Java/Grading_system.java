package Getting_Started;

import java.util.Scanner;

public class Grading_system {
    public static void main(String[] args ){
        Scanner scn = new Scanner(System.in);
        int i = scn.nextInt();
        if(i>90){
            System.out.println("excellent");
        }
        else if(i<=90 && i>80){
            System.out.println("good");
        }
        else if(i<=80 && i>70){
            System.out.println("fair");
        }
        else if(i<=70 && i>60){
            System.out.println("meets expectations");
        }
        else {
            System.out.println("below par");
        }
    }
}
