class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> uset;
        int countMax=0;
        for(int i=0;i<nums.size();i++)
            uset.insert(nums[i]);
        
        for(int i=0;i<nums.size();i++)
        {
            
            if(uset.find(nums[i]-1)==uset.end())
            {   
                int count=0;
                
                while(uset.find(nums[i])!=uset.end())
                {   
                    nums[i]++;
                    count++;
                }
                
                countMax = max(countMax,count);
            }
                
        }
        
        return countMax;
    }
};