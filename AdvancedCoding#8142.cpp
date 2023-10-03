#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int input_number;
    cin >> input_number;

    for (int i = 1; i <= 6; i++)
    {
        cout << "Current Number is : " << i << " and the cube is " << pow(i, 3) << endl;
    }
    return 0;
}