class Solution
{
public:
    int longestMountain(vector<int> &arr)
    {  
        
        
         if(arr.size()<=2)
            return 0;
//        unordered_map<int,int> umap;
//         for(int i=0;i<arr.size();i++)
//         {
//             if(i!=0&&i!=arr.size()-1&&arr[i]>arr[i-1]&&arr[i]>arr[i+1])
//                 umap[arr[i]]=i;
//         }
        
        int countMax=0;
        
        for(int i=0;i<arr.size();i++)
        {   
            int count =0;
            if(i!=0&&i!=arr.size()-1&&arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            {
                
                int j=i;
                while(j!=0&&arr[j]>arr[j-1])
                {
                    j--;
                    count++;
                }
                
                while(i!=arr.size()-1&&arr[i]>arr[i+1])
                {
                    i++;
                    count++;
                }
            }
            
            countMax=max(countMax,count);
               
        }
         if(countMax==0)
             return 0;
       return countMax+1;     
        
        
        
//         if(arr.size()<=2)
//             return 0;
//        unordered_map<int,int> umap;
//         for(int i=0;i<arr.size();i++)
//         {
//             if(i!=0&&i!=arr.size()-1&&arr[i]>arr[i-1]&&arr[i]>arr[i+1])
//                 umap[arr[i]]=i;
//         }
        
//         int countMax=0;
        
//         for(int i=0;i<arr.size();i++)
//         {   
//             int count =0;
//             if(umap.find(arr[i])!=umap.end())
//             {
                
//                 int j=i;
//                 while(j!=0&&arr[j]>arr[j-1])
//                 {
//                     j--;
//                     count++;
//                 }
                
//                 while(i!=arr.size()-1&&arr[i]>arr[i+1])
//                 {
//                     i++;
//                     count++;
//                 }
//             }
            
//             countMax=max(countMax,count);
               
//         }
//          if(countMax==0)
//              return 0;
//        return countMax+1;    
        
        
        
    }
};
