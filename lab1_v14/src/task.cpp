# include <string>
# include "./task.h"

using namespace std; //знаю, что так делать не стоит, но я точно где-нибудь потеряю std::

string replaces(string s, char o, char n, int k) {
    string r = s;
    if (s.length() < k || k <= 0) {
        return r;
    }
    int c = 0;
    for (size_t i = 0; i < s.length(); ++i) {
        if (s[i] == o) {
            ++c;
            if (c == k) {
                r[i] = n;
            }
        }
    }
    return r;
}