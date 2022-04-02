class Solution {
public:
    
    bool isPalindrome(string  &s,int start ,int end)
    {
        int n=s.size();
        cout<<"end "<<end<<" ";
        while(start<end)
        {
            if(s[start++]!=s[end--])
                return false;
        }
        return true;
    }
    bool validPalindrome(string s) {
        
       bool val = isPalindrome(s,0,s.size()-1);
       if(val==true)
           return true;
        
        int i=0;
        int j=s.size()-1;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                val = isPalindrome(s,i+1,j)||isPalindrome(s,i,j-1);
                break;
            }   
            i++;
            j--;
        }
      
       return val;
    }
};