class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         
        
        sort(strs.begin(),strs.end());
        
        string startString = strs[0];
        string endString = strs[strs.size()-1];
        
        string solutionString = "";
        
        for(int i=0;i<startString.size();i++)
        {
             if(startString[i]==endString[i])
                 solutionString+=startString[i];
            else
            {
                return solutionString;
            }
        }
        
        return solutionString;
    }
};