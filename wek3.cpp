#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    double wek[100][2], poz[100];
    for(int i = 0; i < 100; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cin >> wek[i][j];
        }
            poz[i] = sqrt(pow(wek[i][0], 2)+(pow(wek[i][1], 2)));
    }
        sort(poz, poz + 100);
    for(int h = 0; h < 100; h++)
    {
        printf("%.2f", abs(poz[h]));
        cout << endl;
    }
}
