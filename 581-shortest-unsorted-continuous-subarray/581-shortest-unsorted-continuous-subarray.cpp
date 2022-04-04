class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        
      vector<int> arr=nums;
      sort(arr.begin(),arr.end());
      int n=arr.size();
      int x,y;
    
      for(int i=0;i<n;i++)
      {
          if(arr[i]!=nums[i])
          {
               x=i;
              break;
          }
      }
        
      for(int j=n-1;j>0;j--)
      {
          if(arr[j]!=nums[j])
          {
               y=j;
              break;
          }
      }
      
      if(x-y==n)
        return 0;
        
      return   y-x+1;
    }
    
  
};