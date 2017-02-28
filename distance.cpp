/*distance.cpp
Feb 28, 2017
Jayson Mallari
*/
#include <iostream>
#include <cmath>
using namespace std;
double distance(int x1,int y1,int x2,int y2){
	double dis;
	dis = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
	return dis;
}
int main()
{
	int x1,x2,y1,y2;
	cout<<"Enter the first point x1 and y1"<<endl;
	cin>>x1;
	cin>>y1;

	cout<<"Enter the second point x2 and y2"<<endl;
	cin>>x2;
	cin>>y2;

	cout<<"The total distance from point 1 to point 2 is :  "<<distance(x1,y1,x2,y2)<<endl;
return 0;
}
