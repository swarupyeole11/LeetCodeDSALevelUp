class Solution {
public:
    

    int countPrimes(int n) {
        
        if(n==0)
            return 0;
        
        vector<bool> isPrime(n,true);
        isPrime[0]=false;
        isPrime[1]=false;
        int count=0;
        
       for(int i=2;i*i<=n-1;i++)
       {
               for(int j=i*2;j<=n-1;j+=i)
               {
                   isPrime[j]=false;
               }
       }
        
        for(auto it : isPrime)
        {
               if(it)
                   count++;
        }
        
        return count;
    }
};