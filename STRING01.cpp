#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string needToEl;
    getline(cin, s);
    cin >> needToEl;
    string word;
    for(auto item : s) {
        if(item != ' ')
            word += item;
        else {
            if(word != needToEl)
                cout << word << " ";
            word = "";
        }
    }    
    if(word != "" and word != needToEl)
        cout << word;
    return 0;
}