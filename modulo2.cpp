#include <iostream>
#include <math.h>

using namespace std;

using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, m;
        bool found = false;
        cin >> a >> m;
        for(int i = 0; i < m; i++) {
            if(i*a%m == 1){
                cout << i << "\n";
                found = true;
                break;
            }
        }
        if(!found)
            cout << "-1" << "\n";
    }
    return 0;
}