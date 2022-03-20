class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int count =0;
        int n = arr.size();
        
        if(n<=2)
            return false;
        
        int mountainPointIndex=-1;
        int mountainPointCount=0;
        
        for(int i=0;i<n;i++)
        {
             if(i!=0&&i!=n-1&&arr[i]>arr[i-1]&&arr[i]>arr[i+1]) 
             {
                 mountainPointIndex=i;
                 mountainPointCount++;
                 cout<<"hello";
             }
        }
        
        if(mountainPointCount!=1)
            return false;
        
        for(int i=0;i<mountainPointIndex;i++)
        {
            if(arr[i]>=arr[i+1])
                return false;
        }
        
        for(int i=mountainPointIndex;i<n;i++)
        {
            if(i!=n-1&&arr[i]<=arr[i+1])
                return false;
        }
        
       
      
        return true;
    }
};