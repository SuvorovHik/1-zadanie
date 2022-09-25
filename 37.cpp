#include <iostream>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    int array[n][m];
    int arrayHelp[n][m];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> array[i][j];
            arrayHelp[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        int max = INT32_MIN;
        int maxX;
        int maxY;
        int min = INT32_MAX;
        int minX;
        int minY;
        for (int j = 0; j < m; ++j)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                maxX = i;
                maxY = j;
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
                minX = i;
                minY = j;
            }
        }
        arrayHelp[maxX][maxY] = 1;
        arrayHelp[minX][minY] = 2;
    }

    for (int j = 0; j < m; ++j)
    {
        int max = INT32_MIN;
        int maxX;
        int maxY;
        int min = INT32_MAX;
        int minX;
        int minY;
        for (int i = 0; i < n; ++i)
        {
            if (array[i][j] > max) {
                max = array[i][j];
                maxX = i;
                maxY = j;
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
                minX = i;
                minY = j;
            }
        }
        if (arrayHelp[maxX][maxY] == 2)
        {
            cout << "[" << maxX << "; " << maxY << "]" << endl;
        }
        if (arrayHelp[minX][minY] == 1)
        {
            cout << "[" << minX << "; " << minY << "]" << endl;
        }
    }
    return 0;
}
