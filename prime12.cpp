#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

using ll = long long;

vector <bool> check(1000000, true);

void prime() {   
    for(int i = 2; i <= 1000000; i++)
        if(check[i])
            for(int j = 2*i; j <= 1000000; j+=i)
                check[j] = false;
}


int main() {
    prime();
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        for(int i = 2; i <= n; i++) {
            if(int(sqrt(i)) * int(sqrt(i)) == i && check[i/sqrt(i)])
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}