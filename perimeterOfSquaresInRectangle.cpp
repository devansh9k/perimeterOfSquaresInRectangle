typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n)
    { 
    if (n <= 0) 
       return 0; 
  
    unsigned long int fibo[n+1]; 
    fibo[0] = 1, fibo[1] = 1; 
  
    unsigned long int sum = fibo[0] + fibo[1]; 
  

    for (int i=2; i<=n; i++) 
    { 
        fibo[i] = fibo[i-1]+fibo[i-2]; 
        sum += fibo[i]; 
    } 
  
    return sum*4; 
   } 
};