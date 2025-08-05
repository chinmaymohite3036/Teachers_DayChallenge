#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    string vowels = "aoyeuiAOYEUI";
    string result = "";

    for (char c : input) {
        if (vowels.find(c) == string::npos) {
            if (isupper(c)) {
                c = tolower(c);
            }
            result += '.';
            result += c;
        }
    }

    cout << result << endl;
    return 0;
}
