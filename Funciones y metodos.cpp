#include<iostream>
using namespace std;
void suma(int &num1, int &num2){
	int resultado = 0;
	num1+=1;
	num2+=1;
	resultado = num1+num2;
	cout<<resultado<<endl;
}
int suma(int num1,int num2, int num3){
	int resultado = 0;
	resultado = num1+num2+num3;
	return num1+num2+num3;
}
main(){
	int a = 10, b = 20;
	suma(a, b);
	cout<<suma(70, 15, 60)<<endl;
    cout<<"a: "<<a<<" b: "<<b<<endl;
	system("pause");
}