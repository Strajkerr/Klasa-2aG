#include <iostream>
using namespace std;
void isort(int *tab, int i)
{
    for(int j = 0; j < i-1; j++)
    {
        int temp, c;
        temp = tab[j+1];
        c = j;
        while(temp < tab[c] && c >= 0)
        {
            tab[c+1] = tab[c];
            c--;
        }
        tab[c+1] = temp;
    }
        for(int h = 0; h < i; h++) cout << tab[h] << " ";
}
int main()
{
    int tab[1000];
    int i = 0;
    while(cin >> tab[i]) i++;
    isort(tab, i);
    return 0;
}
