#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

using ll = long long;

const ll def = 10000000000;

vector <bool> check(ll(sqrt(def)), true);

void prime() {   
    for(int i = 2; i <= sqrt(def); i++)
        if(check[i])
            for(int j = 2; j <= sqrt(def); j+=i)
                check[j] = false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll temp = n;
        for(int i = 2; i <= sqrt(temp); i++)
            while(n % i == 0 && n != 1 && check[i]) {
                cout << i << " ";
                n /= i;
            }
        if(n != 1)
            cout << n;
        cout << "\n";
    }
    return 0;
}