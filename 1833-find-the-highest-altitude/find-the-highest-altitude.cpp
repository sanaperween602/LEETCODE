class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int maximum=0;
        int curr=0;
        for(int i=0;i<n;i++)
        {
          curr +=gain[i];
          maximum=max(maximum,curr);
        }
       return maximum;
     
    }
};