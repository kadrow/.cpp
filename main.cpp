#include <iostream>

using namespace std;

int main()
{
    int diameter1, diameter2, height1, height2, cost1, cost2;
    cout << "Give me the diameter, height and cost of cheese 1 "<< endl;
    cin >> diameter1>> height1>> cost1;
    cout << "Give me the diameter, height and cost of cheese 2"<<endl;
    cin >> diameter2>> height2>> cost2;
    float price1=cost1/(((diameter1/2)^2)*3.14*height1);
    float price2=cost2/(((diameter2/2)^2)*3.14*height2);
    cout << "cheese 1 costs " << price1 << " euro/cm^3"<<endl;
    cout << "cheese 2 costs " << price2 << " euro/cm^3"<<endl;

    int cheese_weight, density_cheese, cheese_cost;
    cout<<"Input cost of cheese euro/kg"<<endl;
    cin>>cheese_cost;
    cout<<"density of cheese"<<endl;
    cin>>density_cheese;
    cout<<"cheese weight?"<<endl;
    cin>>cheese_weight;
    float price3=(cheese_weight*density_cheese)*cheese_cost;
    cout << "This particular cheese will cost you " << price3 <<" euro"<<endl;

    return 0;
}
