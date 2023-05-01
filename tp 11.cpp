#include<bits/stdc++.h>
using namespace std;
string Japonizar(string palabra);
int main(){
	string palabra;
	cout<<"Ingrese tu nombre:"<<endl;
	cin>>palabra;
	string j=Japonizar(palabra);
	cout<<"Konnichi wa, "<<j<<"-san";
	return 0;
}
string Japonizar(string palabra){
	int i;
	string japon;
	char U='u';
	while(i<=palabra.size()-1){
		japon+=palabra[i];
		if(palabra[i]!='a' && palabra[i]!='A' && palabra[i]!='e' && palabra[i]!='E' && palabra[i]!='i' && palabra[i]!='I' && palabra[i]!='o' && palabra[i]!='O' && palabra[i]!='u' && palabra[i]!='U' && palabra[i]!='n' && palabra[i]!='N'){
		palabra[i]='u';	 
		japon+=palabra[i];
		}
		i++;
	}
	return japon;
}