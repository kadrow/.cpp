#include <iostream>

using namespace std;

int main()
{
    int i, j, k, l, m, n;
    cout << "Welcome to the cheese math shop where we do cheese maths!!";
    cout << "How tall is your first wheel of cheese in cm? \n";
    cin >> i;
    cout << "Wow, you know what they say about people with tall wheels of cheese! \n";
    cout << "Now what's the diameter of this bad boy? \n";
    cin >> j;
    cout << "Some people are blessed... \n";
    cout << "How much does it cost in euro?  \n";
    cin >> k;
    cout << "How tall is your second wheel of cheese in cm?  \n";
    cin >> l;
    cout << "And what diameter? ";
    cin >> m;
    cout << "Huh... \n";
    cout << "How much does it cost in euro? ";
    cin >> n;
    cout << "So, the first wheel costs " << ((22/7) * (j/2)^2 * i) / k <<" euro per cm^3 \n";
    cout << "The second wheel costs " << ((22/7) * (m/2)^2 * l) / n <<" euro per cm^3 \n";
    return 0;
}
