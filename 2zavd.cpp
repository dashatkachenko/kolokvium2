#include <iostream>
#include <string>

using namespace std;

int main(){
    char c;
    string s; 
    string s1;

    cin >> c;
    cin >> s;
    cin >> s1;

    for(int i = 0; i < s.length(); ++i) {
        if(s[i] == c) {
            s.insert(i, s1);
            i += s1.length();
        }
    }

    cout << s;

    system("pause");
    return 0;
}