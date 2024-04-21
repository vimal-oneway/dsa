import java.util.Scanner;
class Solution{
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("ENTER THE NUMBER ");
        int n  = sc.nextInt();
        int res = evenlyDivides(n);
        System.out.println("OUTPUT NUMBER: "+res);
    }

    static int evenlyDivides(int N)
    {
         int count=0;
         int n=N;
         while(N>0){
            int digit= N%10;
            if(digit !=0 && n%digit==0)
                count++;
            N/=10;
         }
         return count;
    }
}
