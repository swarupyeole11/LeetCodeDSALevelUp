class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        
        //APPROACH 1
        
        //APPROACH 2 : FOLLOWING POINTER
        int n = nums.size();
        int j=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
                nums[j]=nums[i];
            }
        }
         
       return j+1; 
    }
        
        
     
//       if(nums.size()<=1)
//       {
//          return nums.size();
//       }
//      int n  = nums.size();
        
//      for(int i=0;i<n;i++)
//      {
          
//               if(i!=0 && nums[i]==nums[i-1] )  //first you sould always check i!=0 condition because if not then you will be                                                       //acessing out of bound element
//               {    
                   
//                    int x=nums[i];
//                    cout<<"x:"<<x<<" ";
                  
//                    for(int j=i;j<n-1;j++)
//                    {   
                       
//                       // cout<<"inside :"<<j<<" ";
//                        nums[j]=nums[j+1];
//                    }
//                    nums[n-1]=x;
//               }
                  
          
//      } 
//         int count=0;
        
//         for(int i=0;i<n;i++)
//           cout<<nums[i];
        
        
//         for(int i=0;i<n;i++)
//         {   
//            // cout<<nums[i];
//             if(i!=n-1&&nums[i]>=nums[i+1])
//             {
//                 return count+1; //1 2 3 4 5 6 
//             }
            
//             count++;
//         }
      
//         return count;
        
//         int count = 0;
// for(int i = 1; i < n; i++){
//     if(nums[i] == nums[i-1]) count++;
//     else nums[i-count] = nums[i];
// }
// return n-count;
        
    
};
