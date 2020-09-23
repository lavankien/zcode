#include <iostream>
#include <math.h>

using namespace std;

using ll = long long;

bool check(ll n) {
    if(n <= 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    ll a, b;
    cin >> a >> b;
    for(int i = min(a, b)+1; i < max(a, b); i++)
        if(check(i))
            cout << i << " ";
    return 0;
}