#include<cstring>
#include<iostream>
using namespace std;
int main()
{
	string producto[3];
	float precio[3],final[3];
	int cantidad[3];
	cout<<"Ingrese el primer producto: ";
	getline(cin,producto[0]);
	cout<<"Ingrese segundo producto: ";
	getline(cin,producto[1]);
	cout<<"Ingrese tercer producto: ";
	getline(cin,producto[2]);
	cout<<"Ingrese el precio del primer producto: ";
	cin>>precio[0];
	cout<<"Ingrese el precio del segundo  producto: ";
	cin>>precio[1];
	cout<<"Ingrese el precio del tercer  producto: ";
	cin>>precio[2];
	cout<<"Ingrese la cantidad del primer producto: ";
	cin>>cantidad[0];
	cout<<"Ingrese la cantidad del segundo producto: ";
	cin>>cantidad[1];
	cout<<"Ingrese la cantidad del tercer producto: ";
	cin>>cantidad[2];
	final[0]=precio[0]*cantidad[0];
	final[1]=precio[1]*cantidad[1];
	final[2]=precio[2]*cantidad[2];
        cout<<"producto"<<"\t"<<"precio"<<"\t"<<"cantidad"<<"\t"<<"final";
        cout<<producto[0]<<"\t"<<precio[0]<<"\t"<<cantidad[0]<<"\t"<<final[0];
        cout<<producto[1]<<"\t"<<precio[1]<<"\t"<<cantidad[1]<<"\t"<<final[1];
        cout<<producto[2]<<"\t"<<precio[2]<<"\t"<<cantidad[2]<<"\t"<<final[2];
	return 0;
}
