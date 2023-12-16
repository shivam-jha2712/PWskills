#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> a;
    set<char> s;

    for (int i = 0; i < n; i++)
    {
        string l;
        cin >> l;
        s.insert(l.begin(), l.end());
        a.push_back(l);
    }

    int idr = -1;
    int idc = -1;

    if (s.size() != n * a[0].size())
    {
        cout << "-1\n";
    }
    else
    {
        char ch;
        cin >> ch;

        for (int i = 0; i < n; i++)
        {
            try
            {
                int m = a[i].find(ch);
                if (m != string::npos)
                {
                    idr = i;
                    idc = m;
                }
            }
            catch (...)
            {
                // do nothing
            }
        }

        if (idr == -1)
        {
            cout << "-1\n";
        }
        else
        {
            for (int i = 0; i < idc; i++)
            {
                cout << a[idr][i];
            }
            cout << "\n";

            for (int i = 0; i < idr; i++)
            {
                cout << a[i][idc];
            }
        }
    }

    return 0;
}
