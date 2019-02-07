#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <math.h>
using namespace std;
#define PI 3.14159265
#define RADTODEG(R)((180.0 * R) / PI)//Converts Radians to Degrees



int main() {
double H=171.45;
double x;
double y;
double z;
double m;
double angleA=0.785398;
double angleB;
double B;
double angleC;
double C;
double n;
int i;
int inc;

cout<<"x= ";
cin>>x;
y=(x/sin(angleA));
z=y-x;
m=z*cos(angleA);

angleB= atan(m/(H+m));
B= RADTODEG (angleB);
angleC= atan(m/(H-m));
C= RADTODEG (angleC);

cout<<"Maximum stroke length= "<<H+z<<"\nwith an angle change of "<<B<<" degrees";
cout<<"\nMinimum stroke length= "<<H-z<<"\nwith an angle change of "<<C<<" degrees\n";

for (int i=1,inc=1; i<=10; inc++, i = inc )
{ 
n=x+10*i;
cout<<"x= "<<n<<"\n";
y=(n/sin(angleA));
z=y-n;
m=z*cos(angleA);

angleB= atan(m/(H+m));
B= RADTODEG (angleB);
angleC= atan(m/(H-m));
C= RADTODEG (angleC);

cout<<"Maximum stroke length= "<<H+z<<"\nwith an angle change of "<<B<<" degrees";
cout<<"\nMinimum stroke length= "<<H-z<<"\nwith an angle change of "<<C<<" degrees\n";

}

system("pause");

	return 0;
}
