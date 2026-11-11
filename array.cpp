#include <iostream>
using namespace std;

int main()
{
    int a[5] = {4, 8, 2, 9, 5};

    int largest = a[0];
    int smallest = a[0];

    for(int i = 1; i < 5; i++)
    {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;

    return 0;
}
