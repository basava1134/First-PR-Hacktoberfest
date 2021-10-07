import java.util.Scanner;

public class AverageOfAnArray {
    public static int averageInt (double[] arr) {
        int ave = 0;
        for (int counter = 0; counter < arr.length; counter++)
            ave += arr[counter];
            return ave / arr.length;
    }

    public static int averageDouble (double[] arr) {
        int ave = 0;
        for (int counter = 0; counter < arr.length; counter++)
            ave += arr[counter];
        return ave / arr.length;
    }

    public static void main(String[] args) {
        Scanner userInput = new Scanner(System.in);

        double[] arr = new double[10];

        System.out.println("Enter 10 numbers: ");
        for (int counter = 0; counter < arr.length; counter++) {
            arr[counter] = userInput.nextDouble();
        }

        int averageInt = (int) averageInt(arr);
        System.out.println("The average integer value is: " + averageInt);

        int averageDouble = (int) averageDouble(arr);
        System.out.println("The average integer value is: " + averageDouble);
    }
}
