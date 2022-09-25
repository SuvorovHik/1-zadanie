#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    double array[n][m];

    for (int i = 0; i < n; ++i)
	{
        for (int j = 0; j < m; ++j)
		{
            cin >> array[i][j];
        }
    }

    int maxX, maxY;
    for (int i = 0; i < n; ++i)
	{
        for (int j = 0; j < m; ++j)
		{
            double max = -999999999999999;

            if (array[i][j] > max)
            {
                max = array[i][j];
                maxX = i;
                maxY = j;
            }
        }
    }

    for (int i = 0; i < n; ++i)
	{
        swap(array[i][0], array[i][maxY]);
    }

    for (int j = 0; j < m; ++j)
	{
        swap(array[0][j], array[maxX][j]);
    }

    for (int i = 0; i < n; ++i)
	{
        for (int j = 0; j < m; ++j)
		{
            cout << array[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
