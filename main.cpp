#include <iostream>

using namespace std;

int main()
{
double room_width, room_depth, room_height;
cout<<"Please enter room width "<< endl;
cin>>room_width;

cout<<"Please enter room depth "<< endl;
cin>>room_depth;

cout<<"Please enter room height "<< endl;
cin>>room_height;

double room_volume=room_width*room_height*room_depth;

double cube_side, cylinder_radius, cylinder_height, sphere_radius, pyramid_edge, pyramid_height;
cout<<"Please enter cube side length "<<endl;
cin>>cube_side;
double cubeV=(cube_side*cube_side*cube_side);

cout<<"Please enter cylinder radius "<<endl;
cin>>cylinder_radius;

cout<<"Please enter cylinder height "<<endl;
cin>>cylinder_height;
double cylinderV=3.14*(cylinder_radius*cylinder_radius)*cylinder_height;

cout<<"Please enter sphere radius "<<endl;
cin>>sphere_radius;
double sphereV=3.14*(4/3)*(sphere_radius*sphere_radius*sphere_radius);

cout<<"Please enter pyramid base length "<<endl;
cin>>pyramid_edge;

cout<<"Please enter pyramid perp. height "<<endl;
cin>>pyramid_height;
double pyramidV=(pyramid_edge*pyramid_edge)*(pyramid_height/3);

double new_roomV=room_volume-(pyramidV+sphereV+cylinderV+cubeV);
cout<<"The volume you have remaining in your room is " <<new_roomV<<" metres^3"<<endl;
return 0;
}
