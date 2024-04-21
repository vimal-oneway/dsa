
class Solution
{ 
    public static void sort012(int a[], int n)
    {
        int low=0, mid=0, high=n-1;
        
        while(mid<=high)
        {
            if(a[mid] == 0)
            {
                a[low] = a[low] + a[mid] - (a[mid]=a[low]);
                low++;
                mid++;
            }
            else if(a[mid]==1)
            {
                 mid++;
            }
            else {
                a[mid] = a[mid] + a[high] - (a[high]=a[mid]);
                high--;
            }
        }
    }

