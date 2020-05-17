package Beginner;

import java.util.Scanner;
import java.lang.Math;

public class Java0004_FourOperations {

    public static void main(String[] args){

        System.out.print("Enter username : ");
        Scanner scan = new Scanner(System.in);
        String user = scan.nextLine();

        System.out.println("Hello Hello! Mr/Ms "+user+", welcome to the java service. :D");

        System.out.print("Enter 1st number : ");
        float number1 = Float.parseFloat(scan.nextLine());

        System.out.print("Enter 2nd number : ");
        float number2 = Float.parseFloat(scan.nextLine());

        System.out.println("Addition       : "+(number1+number2));
        System.out.println("Subtraction    : "+(Math.abs(number1-number2)));
        // used absolute to the minValue-maxValue for is positive
        System.out.println("Multiplication : "+(number1*number2));
        System.out.println("Division       : "+(number1/number2)+" or : "+(number2/number1));
        System.out.println("Mod/Remainder  : "+(number1%number2)+" or : "+(number2%number1));

        int number3 = Integer.parseInt(scan.nextLine());
        int number4 = Integer.parseInt(scan.nextLine());

        System.out.println("Number 3 : "+number3+" + Number 4 : "+number4+" = "+(number3+number4));
        System.out.println("Number 3 : "+number3+" - Number 4 : "+number4+" = "+(number3-number4));
        System.out.println("Number 3 : "+number3+" x Number 4 : "+number4+" = "+(number3*number4));
        System.out.println("Number 3 : "+number3+" / Number 4 : "+number4+" = "+(number3/number4));
    }
}
