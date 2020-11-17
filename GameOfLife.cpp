#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int c50 = 0;
int neighbour(int t1[22][22], int i, int j)
{
    int ncount = 0;
    if (t1[i - 1][j - 1] == 1)
        ncount += 1;
    if (t1[i][j - 1] == 1)
        ncount += 1;
    if (t1[i + 1][j - 1] == 1)
        ncount += 1;
    if (t1[i - 1][j] == 1)
        ncount += 1;
    if (t1[i + 1][j] == 1)
        ncount += 1;
    if (t1[i - 1][j + 1] == 1)
        ncount += 1;
    if (t1[i][j + 1] == 1)
        ncount += 1;
    if (t1[i + 1][j + 1])
        ncount += 1;
    return ncount;
}

void cpy(int t1[22][22], int t2[22][22])
{
    for (int t = 1; t < 21; t++)
    {
        for (int u = 1; u < 21; u++)
        {
            t2[t][u] = t1[t][u];
        }
    }
}

void make(int t1[22][22], int neighbours[22][22])
{
    for (int o = 1; o < 21; o++)
    {
        for (int p = 1; p < 21; p++)
        {
            if (neighbours[o][p] == 3)
                t1[o][p] = 1;
            else if (neighbours[o][p] == 2)
                t1[o][p] = t1[o][p];
            else
                t1[o][p] = 0;
        }
    }
}

void show(int t1[22][22])
{
    for (int g = 0; g < 484; g++)
    {
        if (g % 22 == 0)
            cout << endl;
        cout << t1[g / 22][g % 22] << " ";
    }
    cout << endl;
}

void init(int t1[22][22])
{
    int neighbours[22][22];
    for (int x = 1; x < 21; x++)
    {
        for (int y = 1; y < 21; y++)
        {
            neighbours[x][y] = neighbour(t1, x, y);
        }
    }
    make(t1, neighbours);
    show(t1);
    Sleep(250);
    system("cls");
}

int main()
{
    srand(time(0));
    int thegame[22][22] = {};
    for (int i = 1; i < 21; i++)
    {
        for (int j = 1; j < 21; j++)
        {
            thegame[i][j] = rand() % 2 + 0;
        }
    }
    for (int i = 0; i < 50; i++)
        init(thegame);
}
