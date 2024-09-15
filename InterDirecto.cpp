#include<iostream>
using namespace std;
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
		cout<<"ELIJA UNA OPCCION: "<<opc<<endl; cin>>opc;
		switch(opc){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				break;
		}
	}while(opc!=5);
	return 0;
}

