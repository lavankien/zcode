#include <iostream>

using namespace std;

typedef long long ll;

ll LCD(const ll& a, const ll&b) {
    if(b == 0)
        return a;
    else
        return LCD(b, a%b);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        cout << a*b/LCD(a, b) << " " << LCD (a, b) << endl;
    }
    return 0;
}