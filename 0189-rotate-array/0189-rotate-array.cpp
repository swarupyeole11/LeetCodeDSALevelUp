class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
     /*
        //approach 1 using extra space and modulo 
        int n = nums.size();
        vector<int> newarr(n,0);
        for(int i=0;i<nums.size();i++)
        {
            newarr[(i+k)%n]=nums[i];
        }
        nums.clear();
        nums = newarr;
      */
      
        
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k%nums.size());
        reverse(nums.begin()+k%nums.size(),nums.begin()+nums.size());
      
      
        
      
    }
};