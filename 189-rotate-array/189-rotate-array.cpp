class Solution {
public:
    
 //The Soultion that gives TLE  O(n2) O(1)

       while(k--)
       {    
           int x = nums[n-1];
           for(int i=n-1;i>0;i--)
           {  
              // cout<<"hola Manny"<<" ";
              nums[i]=nums[i-1]; 
           }
           nums[0]=x;
       }   
    
    
    
// The O(n) O(n) solution  // Concept -> (i+k)%n   
    void rotate(vector<int>& nums, int k) {
        
        vector<int> arr = nums;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            nums[(i+k)%n]=arr[i];
        }
    }
};

// O(n) and O(1) solution




        
