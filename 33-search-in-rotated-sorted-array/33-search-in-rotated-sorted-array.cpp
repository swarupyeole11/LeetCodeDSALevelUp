class Solution {
public:
     int BinarySearch(int l,int h,vector<int> &arr, int key)
    {
        if(l<=h)
        {
            int mid = h+(l-h)/2;
             if(key ==arr[mid])
                 return mid;
             else if (key<arr[mid])
                 return BinarySearch(l,mid-1,arr,key);
             else
                 return BinarySearch(mid+1,h,arr,key);
                 
        }
        
        return -1;
    }
    int search(vector<int>& nums, int target) {
        
        int n = nums.size();
        int i=0;
        for(i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])
                break;
        }
         
        int x = BinarySearch(0,i,nums,target);
        int y = BinarySearch(i+1,n-1,nums,target);
        
        int ans = -1;
        ans = max(x,y);
  
       
        return ans;
    }
};