//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int a[], int n)
    {
        
        int arr[n+1];
        arr[0] = -9999999;
        for(int i=1; i<=n; i++)
        {
            arr[i]=a[i-1];
            // cout<<arr[i]<<" ";
        }
        
        
        int flag=0;
        for(int i=1; i<=n; i++)
        {
            if(2*i<=n && arr[i]<arr[2*i] )
            {
                
                flag=1;
            }
            
            if(2*i+1<=n && arr[i]<arr[2*i+1])
            {
                flag=1;
            }
            
        }
        
        return flag==0?true:false;
        
    }
    
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends