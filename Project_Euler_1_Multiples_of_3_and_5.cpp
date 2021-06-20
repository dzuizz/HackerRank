#include <iostream>
using namespace std;

long long findsum(long long n, int b){
    long long a = (n-n%b)/b;
    return (a+1)*a/2*b;
}

int main(){
    int k, n;
    cin >> k;
    for(int t=0;t<k;t++){
        long long sum=0;
        cin >> n;
        sum = findsum(n-1, 5)+findsum(n-1, 3)-findsum(n-1, 15);
        cout << sum << endl;
    }
}