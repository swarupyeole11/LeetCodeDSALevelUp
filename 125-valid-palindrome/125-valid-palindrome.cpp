class Solution {
public:
    bool isPalindrome(string s) {
        
        string str;
        bool ans  = true;
        for(auto x : s)
        {
            if((x>='a'&& x<='z'))
                str.push_back(x);
            else if((x>='A'&& x<='Z'))
                 str.push_back(x+32); 
            else if(x>='0' && x<='9')
                 str.push_back(x);
        }
        
        int n =str.size();
        cout<<n<<" ";
        
        for(int i=0;i<n/2;i++)
        {
            if(str[i]!=str[n-1-i])
                return false;
        }
        
        return ans;
    }
};