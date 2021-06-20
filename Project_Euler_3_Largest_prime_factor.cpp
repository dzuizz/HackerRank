#include <iostream>
#include <cmath>
using namespace std;

long long findfactor(long long n, long long ans){
    bool c=false;
    for(long long i=2;i<=sqrt(n)+1;i++){
        if(n%i==0 && n > i){
            ans = max(ans, findfactor(n/i, ans));
            c = true;
        }
    }
    if(c){
        return ans;
    }else{
        return n;
    }
}

int main(){
    long long t;
    cin >> t;
    for(long long c=0;c<t;c++){
        long long n;
        cin >> n;
        cout << findfactor(n, 0) << endl;
    }
}