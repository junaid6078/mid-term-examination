#include <bits/stdc++.h> 

using namespace std;
float mmbtu(float x){
	
	float gcv=990;// can also take input
	float mbtu=((x*gcv)/281.7385);
	return mbtu;
}
float AmountCalculation(float lhmc, float rhmc, float mmbtu1,float mmbtu2)
{
	float amountr=0,amountl=0;
	if(lhmc==0)//0-0.99
	{
		if(rhmc<=0.5){
			amountr=mmbtu2*121;
		}
		else if(rhmc>0.5 && rhmc<1){
			amountr=mmbtu2*300;
		}
	}
	else if(lhmc==1)//1.00-1.99 (l_slab1)
	{
		amountl=mmbtu1*300;
		amountr=mmbtu2*553;
		
	}
	else if(lhmc==2)//2.00-2.99 (l_slab2)
	{	
		amountl=mmbtu1*553;
		amountr=mmbtu2*738;
	}
	else if(lhmc==3){
		amountl=mmbtu1*738;
		amountr=mmbtu2*1107;
	}
	else if(lhmc==4){
		amountl=mmbtu1*1107;
		amountr=mmbtu2*1460;
	}
	else if(lhmc>4){
		amountl=mmbtu1*1460;
		amountr=mmbtu2*1460;
	}
	float Amount=amountl+amountr;
	return Amount;
}
float getGST(float amount){
	return amount*0.17;	
}
main()
{
	int previous,current;
	cout<<"enter current reading = ";
	cin>>current;
	cout<<"enter previous reading = ";
	cin>>previous;
	if(current>previous){
	
	float units=0, hmc;
	units=current-previous;
	cout<<"monthli consumed units = "<<units;
//	cout<<"Enter units : ";
//	cin>>units;
	hmc=units/100;
	cout<<"\nUnits (HM^3): "<<hmc<<endl;
	
	int rent=20, lhmc=int(hmc);
	float rhmc=0, mmbtu1=0, mmbtu2=0, amount=0, totalAmount=0, gst=0;
	rhmc=hmc-lhmc;

	mmbtu1=mmbtu(float(lhmc));
	mmbtu2=mmbtu(rhmc);	
	
	amount=AmountCalculation(float(lhmc), rhmc, mmbtu1, mmbtu2);
	gst=getGST(amount);
	totalAmount=amount+rent+gst;
	
	cout<<"Gas Charges: "<<amount<<endl;
	cout<<"Rent: "<<rent<<endl;
	cout<<"GST (17%): "<<gst<<endl;
	cout<<"Total amount: "<<totalAmount;
	}
	else{
		cout<<"your current reading is less than previous";
	}
}
