#include <iostream.h>
using namespace std;

main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i * 20;
    }

    cout << "last element of the array is " << arr[9] << endl;
}