#include <iostream>
#include <math.h>

using namespace std; //add

using ll = long long;

int main() {
    int t;
    cin >> t;
    ll n;
    while(t--) {
        cin >> n;
        if(n == 1) {
            cout << "1\n";
            continue;
        }
        ll temp = n;
        for(int i = 2; i <= sqrt(temp); i++) {
            while(n % i ==0 && n!=1) {
                if(n/i == 1) {
                    cout << i << "\n";
                }
                n /= i;
            }
            if(n == 1)
                break;
        }
        if(n!=1)
            cout << n << endl;
    }
    return 0;
}
