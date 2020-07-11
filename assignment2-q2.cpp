#include<bits/stdc++.h>
using namespace std;
int main(){
cout<<"CONVERT DECIMAL TO HEXADECIMAL"<<endl<<"==========================="<<endl;
	
int i,rem;
string hexa;
long totalDecimal;
cout<<"input decimal number = ";
cin>>totalDecimal;

for(i=0;totalDecimal!=0;i++)
{
    rem=totalDecimal%16;

    if(rem>10)
    {
        hexa+=rem+55;
    }
    else
    {
        hexa+=rem+48;
    }
    totalDecimal=totalDecimal/16;
}

	reverse(hexa.begin(),hexa.end());
	cout<<"hexadecimal = "<<hexa;
return 0;
}
