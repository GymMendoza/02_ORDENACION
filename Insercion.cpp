#include <iostream>

using namespace std;
void insercionDir(int arr[], int n);
void insercionBin(int arr[],int n);
int main(){
	int n,opc;
	cout<<"ingrese el tamanho del arreglo: "; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero: "; cin>>arr[i];
	}
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
		while(k>0 && aux<arr[k]){
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=aux;
	}
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
}
