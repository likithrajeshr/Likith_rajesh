#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;

    cout << "Enter a word: ";
    cin >> s;

    // Find length
    cout << "Length: " << s.length() << endl;

    // Convert the string to uppercase
    for (char &c : s)
    {
        c = toupper(c);
    }

    // Display uppercase string
    cout << "Upper: " << s << endl;

    // Palindrome check using uppercase string
    bool pal = true;

    for (size_t i = 0, j = s.size() - 1; i < j; ++i, --j)
    {
        if (s[i] != s[j])
        {
            pal = false;
            break;
        }
    }

    // Display palindrome result
    cout << s << (pal ? " IS" : " is NOT") << " a palindrome\n";

    // Find a substring
    size_t pos = s.find("AN");
    
    if (pos != string::npos)
        cout << "'AN' found at index " << pos << endl;
    else
        cout << "'AN' not found" << endl;

    return 0;
}
