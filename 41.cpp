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

    int result = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j < m; ++j)
        {
            int pos1 = j-1;
            int pos2 = j+1;
            while (array[i][j] > array[i][pos1] && pos1 >= 0)
            {
                pos1--;
            }

            while (array[i][j] < array[i][pos2] && pos2 < m)
            {
                pos2++;
            }

            if (pos1 == -1 && pos2 == m)
            {
                result++;
            }
        }
    }

    cout << result;

    return 0;
}
