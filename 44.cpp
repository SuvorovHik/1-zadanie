#include <iostream>

using namespace std;
int main() {

    for (int i = 9; i >= 0; --i)
    {
        for (int j = 0; j < 10; ++j)
        {
            cout << i*10 + j+1 << ' ';
        }
        cout << endl;
    }

    return 0;
}
