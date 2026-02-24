class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int totalsum=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
               if((j-i +1)%2==1 )
                {
                      int sum=0;
               for(int k=i;k<=j;k++)
               {
               sum+=arr[k];
               }
               totalsum+=sum;
            }
            }
        }
        return totalsum;
    }
};