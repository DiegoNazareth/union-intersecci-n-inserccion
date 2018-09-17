/*Elaborar un programa que maneje los arreglos de tamaño variable tipo entero (un par de conjuntos 
de enteros ordenados o desordenados), y que permita realizar las siguientes operaciones:
• Unión Dados dos Arreglos A = {2, 3, 8, 6, 3} y B = {1, 2, 1}, Generar tercer ONU Arreglo C = {2, 3, 8, 
6, 1) que cuente con los elementos de A y B, evitando la duplicidad de elementos, el vector 
resultando ser el resultado de la operación
• Inclusión de conjunto en su conjunto en el conjunto B siempre y cuando cada elemento de A 
pertenece a
/ • Intersección es el conjunto formado por los conjuntos comunes a ambos conjuntos
#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char** argv){
	int tam1,tam2;
	cout<<"Dime el tamanio vec1: ";
	scanf("%d",&tam1);
	cout<<"Dime el tamanio vec2: ";
	scanf("%d",&tam2);
	int v1[tam1],k=0,p=0,l=0,vr[tam1+tam2];
	int v2[tam2];
	int v3[tam1+tam2],cont,num,va[tam1+tam2];
	int vinte[tam1+tam2],vectinclusion[tam1+tam2];
	int contadorint=0,contadorinclusion=0;
	for(int i=0;i<tam1;i++){
		cout<<"Ingresa valores del vector 1 posicion: "<<i<<" ";
		scanf("%d",&v1[i]);
	}
	for(int j=0;j<tam2;j++){
		cout<<"Ingresa valores del vector 2 posicion: "<<j<<" ";
		scanf("%d",&v2[j]);
	}
	for(int i=0;i<tam1;i++){
	v3[k]=v1[i];
	k++;
	}
	k=tam1;
	for(int i=0;i<tam2;i++){
		v3[k]=v2[i];
		k++;
	}
	//Union
for(int j=0;j<tam1+tam2;j++){
		cont=0;
		num=v3[j];
		va[p]=num;
		p++;
	for(int m=0;m<tam1+tam2;m++){
		if(va[m]==num){
			cont++;
		}
	}
	if(cont==1){
		vr[l]=num;
		l++;
	}
}
cout<<"Imprimiendo vector sin repeticiones"<<endl;
	for(int m=0;m<l;m++){
	cout<<vr[m];
	}
	//Inclusion
	for(int j=0;j<tam2;j++){
		for(int i=0;i<tam1;i++){
		if(v2[j]==v1[i]){
			vectinclusion[contadorinclusion]=v2[i];
			contadorinclusion++;
			} 
		}
	}
	cout<<endl<<"Inclusion"<<endl;
	for(int i=0;i<contadorinclusion;i++){
		cout<<vectinclusion[i];
			}
	//Interseccion
	cout<<endl<<"Interseccion entre 2 vectores"<<endl;
	for(int i=0;i<tam1;i++){
		for(int j=0;j<tam2;j++){
		if(v1[i]==v2[j]){
			vinte[contadorint]=v1[i];
			contadorint++;
			} 
		}
	}
	for(int i=0;i<contadorint;i++){
		cout<<vinte[i];
			}
	return 0;
}
