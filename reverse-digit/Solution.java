class Solution
{
    public long reverse_digit(long n)
    {
        long res = 0;
        while(n>0){
            res = (res*10)+(n%10);
            n/=10;
        }
        return res;
    }
}
