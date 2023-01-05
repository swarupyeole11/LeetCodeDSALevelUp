class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //approch1 using set (nlogn)(1)
        //approach2 using map a (n)(n)
        int ptr=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(i!=nums.size()-1 && nums[i]!=nums[i+1])
            {
                ptr++;
                swap(nums[ptr],nums[i]);
            }
            if(i==nums.size()-1) //i.e the last element
            {
                ptr++;
                swap(nums[ptr],nums[i]);
            }

        }
        
        return ptr+1; //since atleast ek element toh non repeating hoga hi hoga

    }
};