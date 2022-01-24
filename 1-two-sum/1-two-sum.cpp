#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout<< #x << " " << x << endl;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {   

         vector<int> ans;
        
         long long targetVal;
        
         unordered_map<int,int> m;
        
        for(int i=0;i<nums.size();i++)
        {  
           targetVal = target - nums[i];
           debug(targetVal);
           
            if(m.find(targetVal)!= m.end())
            {   
                ans.push_back(m[targetVal]);
                ans.push_back(i);
                return ans;
            }
            else
            {   
                // debug(i);
                // debug(nums[i]);
                m.insert({nums[i],i});
                //m[nums[i]]=i;

            }
            
        }
        
        return ans;
    }
};


