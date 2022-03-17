class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
       int n = nums.size(); 
       vector<int> indexArray(n,0);
       int ans =0;
        
        for(int i=0;i<n;i++)
        {
            indexArray[nums[i]]++;
            if(indexArray[nums[i]]>1)
            {
                ans = nums[i];
            }
        }
        
        return ans;
    }
};