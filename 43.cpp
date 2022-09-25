#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int array[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> array[i][j];
        }
    }

    int max = INT32_MIN;
    int maxX, maxY;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                maxX = i;
                maxY = j;
            }
        }
    }

    cout << "[" << maxX << "; " << maxY << "]" << endl;

    return 0;
}
