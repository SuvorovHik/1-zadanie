#include <iostream>

using namespace std;
int main()
{
	int n;
    cin >> n;

    int array[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    bool fl = true;
    for (int i = 1; i < n-1; ++i)
    {
        if (array[i] * array[i+1] > 0)
        {
            fl = false;
            break;
        }

    }

    if (fl)
    {
        for (int i : array)
        {
            cout << i << ' ';
        }
    }
    else
    {
        for (int i : array)
        {
            if (i < 0)
            {
                cout << i << ' ';
            }
        }
    }

	return 0;
}
