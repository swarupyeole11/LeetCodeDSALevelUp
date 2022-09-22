class Solution {
public:
    string reverseWords(string s) {
         
        stringstream str(s);
        string ans;
        
        string word;
        
        while(str>>word)
        {
            reverse(word.begin(),word.end());
            ans.append(word);
            ans.append(" ");
        }
        
        ans.pop_back();
        
        return ans;
    }
};