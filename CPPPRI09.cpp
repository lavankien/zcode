#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll temp = n;
        ll dem = 0;
        for(int i = 2; i <= sqrt(temp); i++) {
            while(n % i == 0) {
                dem++;
                n /= i;
                
            }
            
            if(dem != 0) {
                cout << i << " ";
                cout << dem << " ";
                dem = 0;
            }
        }
        if(n != 1)
            cout << n << " " << 1;
        cout << endl;
    }
    return 0;
}