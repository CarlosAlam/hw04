//Autor:Oscar GArcia Avila
//Date: 2/22/2015
//Version:01
//Homework 04 using three types of data from standard input calculate the average
//en esta tarea se declararan tres tipos diferentes de variables desde la entrada y se calculara el promedio 
#include <iostream>//libreria
using namespace std;
int main(){
	int k,l,m,a;//variable tipo entero
	double o,p,q,b;//variable tipo doble
	char  x,w,z,c;//variable tipo caracter
    //tres variables para calcular el promedio de los datos de entrada
 	cout<<"Escribe 3 numeros"<<endl;//imprimimos mensaje para que el usuario ingrese un numero
	cin>> k; cin>>l; cin>>m;//el valor que ingresa lo guardamos en la variable k,l,m
    cout<<"Escribe 3 numeros"<<endl;
	cin>> o; cin>>p; cin>>q;
	cout<<"Escibe 3 cracteres"<<endl;
	cin>> x; cin>>w; cin>>z;
    a= (k+l+m)/3;//hacemos la operacion para calcular el promedio 
    b= (o+p+q)/3;
	c= (x+w+z)/3;
    cout<<"el primer promedio es\t"<< a<<endl;//imprimimos el valor del promedio
    cout<<"el segundo promedio es\t"<<b<<endl;
    cout<<"el tercer promedio es\t"<< c <<endl;
	return 0;
}
