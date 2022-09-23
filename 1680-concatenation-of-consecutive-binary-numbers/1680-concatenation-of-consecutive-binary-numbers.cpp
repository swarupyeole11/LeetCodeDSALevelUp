class Solution {
public:
    int concatenatedBinary(int n) {
        
        int mod = 1e9+7;
        long long ans=0;
     
        for(int i=1;i<=n;i++)
        {
            int size =0;
            int k=i;
            while(k!=0)
            {
                k=k/2;
                size++;
            }
            
            ans = ((ans<<size%mod) + (i%mod))%mod;
        }
        
        return ans;
    }
};