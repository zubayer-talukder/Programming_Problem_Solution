#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, y;
    while (true)
    {
        cin >> x >> y;
        if (x == y)
            break;
        else if (x > y)
        {
            cout << "Decrescente" << endl;
        }
        else
            cout << "Crescente" << endl;
    }
    return 0;
}