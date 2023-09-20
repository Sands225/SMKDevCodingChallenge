#include <iostream>
using namespace std;
int main()
{
    string s;
    while (cin >> s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
            if (s[i] == '_') // mengecek apakah ada char '_' pada string
            {
                s.erase(i, 1);        // menghapus "_" pada string
                s[i] = toupper(s[i]); // membuat huruf kapital setelah "_"
            }
        }
        cout << s << endl;
    }
    return 0;
}