class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        
        
        int n=tops.size();
        vector<int> topCountArr(7,0);
        vector<int> bottomCountArr(7,0);
        vector<int> sameCountArr(7,0);
       
        
        for(int i=0;i<n;i++)
        {
            topCountArr[tops[i]]++;
            bottomCountArr[bottoms[i]]++;
            if(tops[i]==bottoms[i])
                sameCountArr[tops[i]]++;
        }
        
        for(int i=0;i<7;i++)
        {
            if(topCountArr[i]+bottomCountArr[i]-sameCountArr[i]==n)
            {
                return n-max(topCountArr[i],bottomCountArr[i]);
            }
        }
        
        return -1;
    }
    
};