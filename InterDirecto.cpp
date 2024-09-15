#include<iostream>
using namespace std;
void interDirDer(int x[],int n);
void interDirIzq(int x[],int n);
int main(){
	int opc;
	int x[100],n;
	cout<<"ingrese tamanho de arreglo: "; cin>>n;
	for(int i=0;i<n;i++){
		cout<<"ingrese los numeros del arreglo: "; cin>>x[i];
	}
	
	do{
		cout<<"1. inter Direccion Derecha"<<endl;
		cout<<"2. inter Direccion izquierda"<<endl;
		cout<<"3. inter Direccion Central"<<endl;
		cout<<"4. inter Direccion Bidireccional"<<endl;
		cout<<"5. SALIR"<<endl;
		cout<<"ELIJA UNA OPCCION: "; cin>>opc;
		switch(opc){
			case 1:
				interDirDer( x, n);
				break;
			case 2:
				interDirIzq( x, n);
				break;
			case 3:

				break;
			case 4:

				break;
			case 5:
				cout<<"SALIENDO...."<<endl;
				break;
			default:
				cout<<"Opcion invalida, elija nuevamente"<<endl;
				break;
		}
		system("pause");
		system("cls");
	}while(opc!=5);{
		cout<<"GRACIAS POR USAR EL PROGRAMA"<<endl;
	}
	return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void interDirDer(int x[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(x[j]>x[j+1]){
			int aux=x[j];
			x[j]=x[j+1];
			x[j+1]=aux;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
void interDirIzq(int x[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=n-1;j>i;j--){
			if(x[j]>x[j-1]){
				int aux=x[j-1];
				x[j-1]=x[j];
				x[j]=aux;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}
