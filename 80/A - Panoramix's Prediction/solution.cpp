#include <bits/stdc++.h>
using namespace std;
bool isprime(long long n) {
    // 0 and 1 are not prime numbers
    if (n <= 1) return false;
    
    // 2 is the only even prime number
    if (n == 2) return true;
    
    // Exclude all other even numbers
    if (n % 2 == 0) return false;
    
    // Check odd factors up to the square root of n
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; // Found a factor, not prime
        }
    }
    
    return true; // No factors found, it is prime
}
int main() {
   int n,m;
   cin>>n>>m;
      int i=n+1;
   while(i>0){
       if(isprime(i)){
           if(i==m)
           cout<<"YES";
           else cout<<"NO";
           break;
       }
     
       i++;
   }
 
}