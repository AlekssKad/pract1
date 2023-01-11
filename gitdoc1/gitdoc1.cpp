#include <iostream>
using namespace std;

const int maxs = 30;
int main()
{
    double max;
    double mas[8] = { 1,4,6,2,33,67,21,12 };
    int i_max, i;
    max = mas[0];
    i_max = 0;
    for (i = 1; i < 8; i++)
        if (mas[i] > max)
        {
            max = mas[i];
            i_max = i;
        }
    cout << max;
};
