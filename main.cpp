#include <iostream>

using namespace std;

int main()
{
    cout << "What age are you?" << endl;
    int age;
    cin>>age;
    if (age>100)
        cout<< "Surely you must be joking, I have never met a " <<age<< " year old person"<<endl;
    if (age<12)
        cout<<"Well aren't you a whizz kid, coding at "<<age<<endl;
    if (age>=12 && age <=100)
        cout<<"I'm not surprised, to be honest"<<endl;
    return 0;
}
