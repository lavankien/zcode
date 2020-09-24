#include <iostream>
#include <vector>

using namespace std;

using ll = long long;

ll u(const ll& a, const ll& b) {
    if(b == 0)
        return a;
    else
        return u(b, a % b);
}

ll b(const ll& a, const ll& b) {
    return a*b/u(a, b);
}

ll res(vector <ll> a, ll n) {
    ll temp = 1;
    for(auto item: a) {
        temp = b(temp, item);
    }
    return temp;
}

int main() {
    vector <ll> a;
    int t;
    cin >> t;
    while(t--) {
        a.clear();
        int n;
        cin >> n;
        a.resize(n+1);
        a[0] = 1;
        for(int i = 1; i <= n; i++)
            a[i] = i;
        cout << res(a, n) << "\n";
    }
    return 0;
};