//Algorit para determinar si una persona es mayor o menor de edad
#include <iostream>

using namespace std;

int main(){
	
	int edad;
	cout<<"Ingrasa tu edad: ";
	cin>> edad;
	if (edad >=18){
		cout<<"Eres mayor de edad";
	}
	else{
		cout<<"Eres menor de edad";
	}
	return 0;
}
