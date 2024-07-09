#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int odd_count = 0, odd_index, even_count = 0, even_index;

    for (int i = 1; i <= n; ++i)
    {
        int num;
        cin >> num;
        if (num % 2 == 0)
        {
            even_count++;
            even_index = i;
        }
        else
        {
            odd_count++;
            odd_index = i;
        }
    }

    if (even_count == 1)
    {
        cout << even_index << endl;
    }
    else
    {
        cout << odd_index << endl;
    }

    return 0;
}
