import java.util.Scanner;

public final class Solution {
  final int totalAplhabet = 26;

  void Lexicographically(int encodedValue) {

    if (encodedValue == 78) {
      System.out.println("zzz");
      return;
    }

    StringBuilder result = new StringBuilder();
    int firstCharNumber = 1;
    if (encodedValue > 52) {
      firstCharNumber = encodedValue % totalAplhabet > 0 ? encodedValue % totalAplhabet : 1;
      result.append((char) ('a' + firstCharNumber - 1));

      int secondCharNumber = encodedValue - (firstCharNumber + totalAplhabet);
      if (secondCharNumber > totalAplhabet) {
        secondCharNumber -= totalAplhabet;
      }
      result.append((char) ('a' + secondCharNumber - 1));

      int thirdCharNumber = encodedValue - (secondCharNumber + firstCharNumber);
      result.append((char) ('a' + thirdCharNumber - 1));
    } else {
      result.append((char) ('a' + firstCharNumber - 1));

      int secondCharNumber = 1;
      if (encodedValue - firstCharNumber >= totalAplhabet) {
        secondCharNumber = Math.abs((firstCharNumber + totalAplhabet) - encodedValue);
      }
      result.append((char) ('a' + Math.max(0, secondCharNumber - 1)));

      int thirdCharNumber = encodedValue - (secondCharNumber + firstCharNumber);
      result.append((char) ('a' + thirdCharNumber - 1));
    }

    System.out.println(result.toString());
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int i = 0;
    int limit = sc.nextInt();
    sc.nextLine();
    Solution sol = new Solution();
    while (i < limit) {
      int n = sc.nextInt();
      sol.Lexicographically(n);
      i++;
    }
  }
}
