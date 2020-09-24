#include <iostream>
#include <math.h>

using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k, temp;
        cin >> n >> k;
        if(k > n)
            temp = n+1;
        ll res = 0;
        for(int i = 1; i <= n; i++)
            res += i%k;
        if(k == res)
            cout << 1 << "\n";
        else 
            cout << 0 << "\n"; 
    }
    return 0;
}