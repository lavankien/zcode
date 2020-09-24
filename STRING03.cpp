#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    string needToEl;
    getline(cin, s);
    for(auto &item: s)
        item = tolower(item);
    string word, res;
    for(auto item : s) {
        if(item != ' ')
            word += item;
        else {
            word[0] = toupper(word[0]);
            res += word + " ";
            word = "";
        }
    }    
    for(auto &item: word)
        item = toupper(item);
    res += " " + word;
    for(int i = res.size()-1; i >= 0; i--)
        if(res[i] == ' '){
            res[i-1] = ',';
            break;
        }
    cout << res;
    return 0;
}