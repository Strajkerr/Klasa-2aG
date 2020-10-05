#include <iostream>
using namespace std;
int main()
{
    int wek[100][2], licznik = 0, poz[100], x = 0;
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> wek[i][j];
        }
        if(wek[i][0]==0||wek[i][1]==0)
        {
            licznik++;
            poz[x] = i;
            x++;
        }
    }
    for(int h = 0; h < licznik; h++)
    {
        cout << wek[poz[h]][0] << " " << wek[poz[h]][1] << endl;
    }
    cout << licznik;
}
