#include <iostream>

using namespace std;

int main()
{
 int i, j; //this sets up the script to accept new inputs through i and j
    cout << "Hello, what number do you want to multiply: ";
    cin >> i;
    cout << "And what do you want to multiply " << i << " by: ";
    cin >> j;
    cout << i << " multiplied by " << j << " is " << i*j << " \n";
    return 0;
}
