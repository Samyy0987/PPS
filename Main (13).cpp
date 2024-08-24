#include<iostream>
using namespace std;
int main()
{
	int a=2 ,b=4;
	//AND operator 
cout<< "a&b is "<< (a&b) <<endl;
//OR operator 
cout<< "a|b is "<< (a|b) <<endl;
//XOR operator 
cout<< "a^b is "<< (a^b) <<endl;
//Left shift operator 
cout<< "a<<1 is "<< (a<<1) <<endl;
//Right shift operator 
cout<< "a>>b is "<< (a>>1) <<endl;
//One's complement operator 
cout<< "~(a) is "<< ~(a)<<endl;
return 0;
}