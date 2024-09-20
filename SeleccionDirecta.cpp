#include <iostream>

using namespace std;
void seleccionDir(int arr[],int n);
int main(){
	int n;

	cout<<"ingrese el tamanho del arreglo: "; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero: "; cin>>arr[i];
	}
	
	seleccionDir(arr,n);
	
	return 0;
}
void seleccionDir(int arr[],int n){
	int menor,k;
	for(int i=0;i<n-1;i++){
		menor=arr[i];
		k=i;
		for(int j=i+1;j<n;j++){
			if (arr[j]<menor){
			menor=arr[j];
			k=j;
			}
		}
		arr[k]=arr[i];
		arr[i]=menor;
	}
	cout<<"el orden del arreglo es: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
} 