#include <iostream>
using namespace std;

int main()
{
    int s,n;
    cin >> s >> n;
    int i = 0;
    while(s >= 2 and n >= 1 or s >= 1 and n >= 2)
    {
        if(s > n)
        {
            s -= 2;
            n--;
        }
        else{
            s --;
            n -= 2;
        }
        i++;
    }
    cout << i;
}