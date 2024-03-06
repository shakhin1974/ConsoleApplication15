#include <iostream>

using namespace std;

int main()
{
    int data[] = { 12, 24, 33, 2, 6, 88, 8 };
    int j = 0;
    int tmp = 0;
    for (int i = 0; i < 7; i++) {
        j = i;
        for (int k = i; k < 7; k++) {
            if (data[j] > data[k]) {
                j = k;
            }
        }
        tmp = data[i];
        data[i] = data[j];
        data[j] = tmp;
    }
    for (int i : data)
    {
        cout << i << endl;
    }
    return 0;
}