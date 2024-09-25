<<<<<<< HEAD
#include<iostream>
using namespace std;
void insercionDir(int n,int arr[]);
void insercionBin(int n,int arr[]);
int main(){
	int opc;
	int n;
=======
#include <iostream>

using namespace std;
void insercionDir(int arr[], int n);
void insercionBin(int arr[],int n);
int main(){
	int n,opc;
>>>>>>> ec7c1d894081f30a9bb201bd471f51f3f8b11f29
	cout<<"ingrese el tamanho del arreglo: "; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero: "; cin>>arr[i];
	}
<<<<<<< HEAD
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
	do{
		cout<<"\n";
		cout<<"1. Insercion Directa"<<endl;
		cout<<"2. Insercion Binaria"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Ingrese una opcion: "; cin>>opc;
		switch(opc){
			case 1:
				insercionDir(n,arr);
				break;
			case 2:
				insercionBin( n, arr);
				break;
			case 3:
				cout<<"SALIENDO......"<<endl;
				break;
			default:
				cout<<"opcion no valida, intente de nuevo"<<endl;
				break;
		}
		cout<<"\n";
		system("pause");
		system("cls");
	}while(opc!=3);
		cout<<"gracias por usar el programa";
	return 0;
}

void insercionDir(int n,int arr[]){
	for(int i=2;i<n;i++){
		int aux=arr[i];
		int k=i-1;
=======
	do{
		cout<<"1.- Insercion Directe"<<endl;
		cout<<"2.- Insercion Binaria"<<endl;
		cout<<"3.- SALIR DEL PROGRAMA"<<endl;
		cout<<"Seleccione una opcion: "; cin>>opc;
		switch(opc){
			case 1:
				insercionDir( arr, n);
				break;
			case 2:
				insercionBin(arr, n);
				break;
			default:
				break;
		}
	}while(opc!=3);
	return 0;
}

void insercionDir(int arr[], int n){
	int k;
	for(int i=2;i<n;i++){
		int aux=arr[i];
		k=i-1;
>>>>>>> ec7c1d894081f30a9bb201bd471f51f3f8b11f29
		while(k>0 && aux<arr[k]){
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=aux;
	}
<<<<<<< HEAD
	cout<<"arreglo ordenado: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void insercionBin(int n,int arr[]){
	for(int i=2;i<n;i++){
		int aux=arr[i];
		int izq=1;
		int der=i-1;
		while(izq<=der){
			int m;
			m=((izq+der)/2);
			if(aux<arr[m]){
				der=m-1;
			} else{
=======
	cout<<"el arreglo ordenado es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
////////////////////////////////////////////////////////////////////////////////////
void insercionBin(int arr[],int n){
	int aux,izq,der;
	for(int i=2;i<n;i++){
		aux=arr[i];
		izq=1;
		der=i-1;
		while(izq<=der){
			int m;
			int entero;
			m=entero((izq+der)/2);
			if(aux<arr){
				der=m-1;
			}else if{
>>>>>>> ec7c1d894081f30a9bb201bd471f51f3f8b11f29
				izq=m+1;
			}
		}
		int j=i-1;
		while(j>=izq){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[izq]=aux;
	}
<<<<<<< HEAD
	cout<<"arreglo ordenado: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

=======
}
>>>>>>> ec7c1d894081f30a9bb201bd471f51f3f8b11f29
