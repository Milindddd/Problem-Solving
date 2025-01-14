#include <iostream>
#include <vector>
#include <set>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        vector<int> available(n);
        vector<int> wanted(n);
        for (int &x : available)
            cin >> x;
        for (int &x : wanted)
            cin >> x;

        bool used = false;
        for (int i = 0; i < n; i++)
        {
            if (available[i] < wanted[i])
            {
                if (used == false)
                {
                    used = true;
                    while (available[i] < wanted[i])
                    {
                        available[i]++;
                        for (int j = 0; j < n; j++)
                        {
                            if (i != j)
                            {
                                available[j]--;
                            }
                        }
                    }
                }
                else
                {
                    cout << "NO" << endl;
                    break;
                }
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}

int main()
{
    solve();
    return 0;
}
