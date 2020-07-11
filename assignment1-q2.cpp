#include<iostream>
#include<math.h>
#include<cmath>
#define pi 3.142
using namespace std;
void convert(void);
int main(){
	convert();
	return 1;
}
void convert(void){
	float diameter,height,liter,meter;
	cout<<"CONVERSION METER TO LITERS : "<<endl;
	cout<<"==========================";
	cout<<"\ninput diameter of cylinder in meter = ";
	cin>>diameter;
	cout<<"input height of cylinder in meter = ";
	cin>>height;
	meter=pi*pow(diameter/2,2)*height;
	cout<<"\namount of liquid in meter(m^3) = "<<meter;
	liter=meter*1000;//1meter=1000liter
	cout<<"\namount of liquid in liters(l) = "<<liter;
}
