#include <iostream>
#include <string>
using namespace std;

bool isDivisibleBy8(const string &num)
{
    int len = num.size();
    if (len == 0)
        return false;

    // Check all 1-digit numbers
    for (int i = 0; i < len; ++i)
    {
        if ((num[i] - '0') % 8 == 0)
        {
            cout << "YES\n"
                 << num[i];
            return true;
        }
    }

    // Check all 2-digit numbers
    for (int i = 0; i < len; ++i)
    {
        for (int j = i + 1; j < len; ++j)
        {
            int val = (num[i] - '0') * 10 + (num[j] - '0');
            if (val % 8 == 0)
            {
                cout << "YES\n"
                     << num[i] << num[j];
                return true;
            }
        }
    }

    // Check all 3-digit numbers
    for (int i = 0; i < len; ++i)
    {
        for (int j = i + 1; j < len; ++j)
        {
            for (int k = j + 1; k < len; ++k)
            {
                int val = (num[i] - '0') * 100 + (num[j] - '0') * 10 + (num[k] - '0');
                if (val % 8 == 0)
                {
                    cout << "YES\n"
                         << num[i] << num[j] << num[k];
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    string n;
    cin >> n;
    if (!isDivisibleBy8(n))
    {
        cout << "NO";
    }
    return 0;
}
