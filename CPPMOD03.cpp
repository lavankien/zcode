#include <iostream>
#include <math.h>

using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        if(k > n)
            k = n+1;
        ll res = 0;
        for(int i = 1; i <= n; i++)
            res += i%k;
        cout << res << "\n"; 
    }
    return 0;
}