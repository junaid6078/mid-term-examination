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
	float radius,height,liter,meter;
	cout<<"CONVERSION METER TO LITERS : "<<endl;
	cout<<"==========================";
	cout<<"\ninput radius of cylinder in meter = ";
	cin>>radius;
	cout<<"input height of cylinder in meter = ";
	cin>>height;
	meter=pi*pow(radius/2,2)*height;
	cout<<"\namount of liquid in meter = "<<meter;
	liter=pow(meter,3);
	cout<<"\namount of liquid in liters = "<<liter;
}
