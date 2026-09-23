//Leetcode Problem 204:
//Count Primes:
//Brute force approach
//This give TLE:
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    private:
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i = 2;i<n;i++){
            if(n%i==0) return true;
            
        }
        return false;
    }
public:
    int countPrimes(int n) {
        int cnt = 0;
        for(int i = 2;i<n;i++){
        if(isPrime(i)){
            cnt++;
        }    
        }
        return cnt;
        
    }
};

//Best Approach:
//By Using Sieve of Eratosthenes Algorithm:
class Solution {
public:
    int countPrimes(int n) {
        if(n<=2) return 0;
        int cnt = n-2;
        vector<char> s(n, 1);
        for(int i = 2 ; i*i < n ; i++ ){
            if(s[i]) {
                for(int j = i*i; j<n; j+=i){
                    if(s[j]){
                        s[j] = 0;
                        cnt--;
                    }
                }
            }
        }
        return cnt;
    }
};
int main() {
 return 0;
}