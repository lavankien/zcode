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
        int dem=0;
        ll temp = n;
        for(int i = 2; i <= sqrt(temp); i++) {
            while(n % i == 0) {
                dem++;
                if(dem == k)
                    cout << i << "\n";
                n /= i;
            }
        }
        if(n != 1 and k == dem+1) {
            cout << n << "\n";
            continue;
        }
        if(dem < k)
            cout << "-1" << "\n";
        // dem = 0;
    }
    return 0;
}