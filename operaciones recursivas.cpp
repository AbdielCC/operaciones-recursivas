#include<iostream>
using namespace std;
//prototype
//operaciones
int exp(int num1,int num2);
int sum(int num);
int factorial(int num);
int permutaciones(int n,int r);
int combinaciones(int n,int r);
//menu options
void pr();
void pr2();
void pr3();
void pr4();
void pr5();
void men(int &menu);
void dir(int menu);
//principal funtion
int main(){
	int menu,preg=1;
	while(preg!=0){
		men(menu);
		dir(menu);
		cout<<"desea hacer otra operacion 0/no"<<endl;
		cin>>preg;	
	}
	return 0;
}
//definition
//menu
void men(int &menu){
	cout<<"\t 1.exponencial"<<endl;
	cout<<"\t 2.sumatoria"<<endl;
	cout<<"\t 3.factorial"<<endl;
	cout<<"\t 4.permutaciones"<<endl;
	cout<<"\t 5.combinaciones"<<endl;
	cin>>menu;
}
void dir(int menu){
	switch(menu){
		case 1:
			pr();
		break;
		case 2:
			pr2();
		break;
		case 3:
			pr3();
		break;
		case 4:
			pr4();
		break;
		case 5:
			pr5();
		break;
	}
	
}
//exponencial
void pr(){
	int numero1,numero2,e,preg=1;
	while(preg!=0){
		cout<<"dame dos numeros"<<endl;
		cin>>numero1>>numero2;
		e=exp(numero1,numero2);
		cout<<"la operacion es "<<e<<endl;	
		cout<<"desea continuar 0/no"<<endl;
		cin>>preg;
	}	
}
int exp(int num1,int num2){
	if((num2==1)){
		return num1;
	}else{
		return num1*exp(num1,num2-1);
	}
}
//sumatoria
void pr2(){
	int numero,s,preg=1;
	while(preg!=0){
		cout<<"dame un numero "<<endl;
		cin>>numero;
		s=sum(numero);
		cout<<"la operacion es "<<s<<endl;
		cout<<"desea continuar 0/no"<<endl;
		cin>>preg;
	}	
}
int sum(int num){
	if(num<=1){
		return 1;
	}else{
		return num+sum(num-1);
	}
}
//factorial
void pr3(){
	int numero,f,preg=1;
	while(preg!=0){
		cout<<"dame un numero"<<endl;
		cin>>numero;
		f=factorial(numero);
		cout<<"la operacion es "<<f<<endl;
		cout<<"desea continuar 0/no"<<endl;
		cin>>preg;
	}
}
int factorial(int num){
	if(num<=1){
		return 1;
	}else{
		return num*factorial(num-1);
	}
}
//permutaciones
void pr4(){
	int n,r,res,preg=1;
	while(preg!=0){
		cout<<"operacion nPr"<<endl;
		cout<<"dame el numero n"<<endl;
		cin>>n;
		cout<<"dame el numero r"<<endl;
		cin>>r;
		if(n>r){
			res=permutaciones(n,r);
			cout<<"la operacion es "<<res<<endl;
			cout<<"desea continuar 0/no"<<endl;
			cin>>preg;	
		}	
	}
}
int permutaciones(int n,int r){
	int res;
	res=(factorial(n))/(factorial(n-r));
	return res;
}
//combinaciones
void pr5(){
	int n,r,res,preg=1;
	while(preg!=0){
		cout<<"operacion nCr"<<endl;
		cout<<"dame el numero n"<<endl;
		cin>>n;
		cout<<"dame el numero de r"<<endl;
		cin>>r;
		if (n>r){
			res=combinaciones(n,r);
			cout<<"la operacion es "<<res<<endl;
			cout<<"desea continuar 0/no"<<endl;
			cin>>preg;
		}
	}
}
int combinaciones(int n,int r){
	int res;
	res=(factorial(n))/((factorial(n-r))*(factorial(r)));
	return res;
}