#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;

    while (true)
    {
        cin >> x;
        if (x == 2002)
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
        else
            cout << "Senha Invalida" << endl;
    }
    return 0;
}