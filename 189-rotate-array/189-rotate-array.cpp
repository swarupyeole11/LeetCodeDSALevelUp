class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> arr = nums;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            nums[(i+k)%n]=arr[i];
        }
    }
};