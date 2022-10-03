class Solution {
public:
    bool check(vector<int>& nums) {
        
        vector<int> arr = nums;
        int n =nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
               reverse(arr.begin(),arr.begin()+i+1);
               reverse(arr.begin()+i+1,arr.end());
               reverse(arr.begin(),arr.end());
                break;
            }
        }
        
       for (int i=0;i<n-1;i++)
       {
           if(arr[i]>arr[i+1])
               return false;
       }
        
        return true;
    }
};