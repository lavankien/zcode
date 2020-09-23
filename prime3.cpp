#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

using ll = long long;

const ll def = 100000;

vector <bool> check(100000, true);

void prime() {   
    for(int i = 2; i <= def; i++)
        if(check[i]) 
            for(int j = i*2; j <= def; j+=i)
                check[j] = false;
}

int main() {
    prime();
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        for(int i = 2; i <= n; i++)
            if(check[i])
                cout << i << " ";
        cout << "\n";
    }
    return 0;
}