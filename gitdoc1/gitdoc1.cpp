#include <iostream>
using namespace std;

const int maxs = 100;


int main()
{
    double A[maxs];
    int n;
    double max;
    int i_max;
    int i;


    cout << "size ";

    cin >> n;
    cout << "elements ";

    for (i = 0; i < n; i++)
        cin >> A[i];


    max = A[0];
    i_max = 0;
    for (i = 1; i < n; i++)
        if (A[i] > max)
        {
            max = A[i];
            i_max = i;
        }

    cout << max;
    return 0;
}
