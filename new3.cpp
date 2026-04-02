#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool canWin(const string &s)
{
    vector<char> v;
    for (char c : s)
        v.push_back(c);

    bool changed;
    do
    {
        changed = false;
        for (int i = 0; i + 1 < v.size(); i++)
        {
            if (v[i] == v[i + 1])
            {
                v.erase(v.begin() + i, v.begin() + i + 2);
                changed = true;
                break;
            }
        }
    } while (changed);

    return v.empty();
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        cout << (canWin(s) ? "YES" : "NO") << "\n";
    }
    return 0;
}