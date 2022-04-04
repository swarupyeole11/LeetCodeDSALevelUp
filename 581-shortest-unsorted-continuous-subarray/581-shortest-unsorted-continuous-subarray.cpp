class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        
      vector<int> arr=nums;
      sort(arr.begin(),arr.end());
      int n=arr.size();
      int x=n,y=-1;
      int flag=0;
    
      for(int i=0;i<n;i++)
      {
          if(arr[i]!=nums[i])
          {    
               flag=1;
               x=min(i,x);
               y=max(i,y);
          }
      }
        
      cout<<"x: "<<x<<" "<<"y: "<<y;
      if(flag==0)
        return 0;
        
      return y-x+1;
    }
    
  
};