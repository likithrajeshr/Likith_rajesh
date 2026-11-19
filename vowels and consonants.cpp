#include <iostream>
#include <string>
#include <cc type>
using namespace std;
int main() {
    string s;
    int vowels = 0, consonants = 0;
    cout << "Enter a sentence: ";
    getline(cin, s);
    for (char c : s) {
        ch = tolower(c);
        if(ch>='a' && ch<='z')
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    return 0;
}
