#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int arrayX[n];
    int arrayY[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arrayX[i];
    }

    int pos = 0;
    for (int i : arrayX)
    {
        if (i < 0)
        {
            arrayY[pos++] = i;
        }
    }

    for (int i : arrayX) {
        if (i >= 0)
        {
            arrayY[pos++] = i;
        }
    }

    for (int i : arrayY)
    {
        cout << i << ' ';
    }

	return 0;
}
