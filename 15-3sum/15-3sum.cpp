class Solution {
public:
     vector<vector<int>> threeSum(vector<int> &nums)
    {

        int target;
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {   
                if(i > 0 && nums[i]==nums[i-1])
                continue;
            target = 0;

                target += (-nums[i]);
                int x = i + 1;           // debug(x);
                int y = nums.size() - 1;  //debug(y);
                while (x < y)
                {
                    vector<int> answer;

                    if (nums[x] + nums[y] < target)
                        x++;

                    else if (nums[x] + nums[y] > target)
                        y--;

                    else
                    {
                        answer.push_back(nums[i]);
                        answer.push_back(nums[x]);
                        answer.push_back(nums[y]);
                        ans.push_back(answer);
                        while (x < y && nums[x] == nums[x+1]) x++;
                        while (x < y && nums[y] == nums[y-1]) y--;
                        //debug(answer);

                        x++;
                        y--;
                    }
                }

        }
        
        return ans;
    }

};