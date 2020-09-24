#include <iostream>
#include <math.h>

using namespace std;

using ll = long long;

const ll cst = 1000000000+7;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a[1001];
        a[1] = a[2] = 1;
        a[0] = 0;
        ll n;
        cin >> n;
        for(int i = 3; i <= n; i++)
            a[i] = (a[i-1]%cst + a[i-2]%cst)%cst;
        cout << a[n] << endl;
    }
    return 0;
}