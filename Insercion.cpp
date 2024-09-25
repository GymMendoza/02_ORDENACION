#include<iostream>
using namespace std;
void insercionDir(int n,int arr[]);
void insercionBin(int n,int arr[]);
int main(){
	int opc;
	int n;
	cout<<"ingrese el tamanho del arreglo: "; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero: "; cin>>arr[i];
	}
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
		while(k>0 && aux<arr[k]){
			arr[k+1]=arr[k];
			k=k-1;
		}
		arr[k+1]=aux;
	}
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
	cout<<"arreglo ordenado: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

