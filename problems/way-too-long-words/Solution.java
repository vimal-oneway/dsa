import java.util.Scanner;

public final class Solution {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int numberOfStrings = sc.nextInt();
    sc.nextLine();
    for (int i = 0; i < numberOfStrings; i++) {
      String word = sc.nextLine();
      if (word.length() > 10)
        System.out.println(word.charAt(0) + "" + (word.length() - 2) + "" + word.charAt(word.length() - 1));
      else
        System.out.println(word);
    }
  }
}
