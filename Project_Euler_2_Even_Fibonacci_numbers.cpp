#include <iostream>
using namespace std;

int main(){
    long long t;
    cin >> t;
    for(long long i=0;i<t;i++){
        long long n, prev=1, cur=2, sum=0, a=0;
        cin >> n;
        while(cur<n){
            if(cur%2==0){
                sum += cur;
            }
            a = cur;
            cur += prev;
            prev = a;
        }
        cout << sum << endl;
    }
}