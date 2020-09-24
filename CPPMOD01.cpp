#include <iostream>
#include <math.h>

using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, y, p;
        ll res = 1;
        cin >> x >> y >> p;
        while(y--) {
            res = ((x % p) * res % p)%p;
        }
        cout << res << "\n";
    }
    return 0;
}