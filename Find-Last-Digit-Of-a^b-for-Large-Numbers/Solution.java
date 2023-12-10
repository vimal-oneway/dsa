import java.util.Scanner;
public class Solution {
    public static void main(String arg[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER THE FIRST NUMBER");
        String numText1 = sc.nextLine();
        System.out.println("ENTER THE SECOND NUMBER");  
        String numText2 = sc.nextLine();
        double num1 = Double.parseDouble(numText1);
        double num2 = Double.parseDouble(numText2);
        double powerValue =  Math.pow(num1, num2);
        System.out.println((int)(powerValue%10));
    }
}
