class Solution {
public:
    
    int fibo(int n)
    {
          if(n<2)
            return n;
        int x = fib(n-1)+fib(n-2);
        return x;
    }
    int fib(int n) {
        return fibo(n);
    }
};