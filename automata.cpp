
#include<stdio.h>

#include<conio.h>

#include<string>

#include<iostream>

#include <fstream>

using namespace std;
	
char s1[] = {' ', '=', ';', ')', '(', '+', '-', '*', '/', '>', '<', ','};
char s2[] = {' ', ';', ')','+', '-', '*', '/', '>', '<'};
char s3[] = {' '};
char s4[] = {' '};
char s5[] = {' ','{','}',',','='};
char s6[] = {' '};
char s7[] = {' ','\n'};
char s8[] = {' ','\n'};
char s9[] = {' '};
char s10[] = {' ','}','\n'}; 
char s11[] = {' ', ',',')'};
string palabraR[] = {"if","else", "while","and","or","int","doble","bool","string"};//arreglo de palabras reservadas
bool error = false;

//en este espacio comienzan los metodos para poder buscar los separadores de los estados
int buscarS1(char separador){
	int respuesta = 0;
	int longitud = sizeof(s1)/sizeof(*s1);
	for(int i = 0; i < longitud; i++){
		if(s1[i] == separador){	
			return respuesta = 1;	
		}
	}
	return respuesta;
}

int buscarS2(char separador){
	int respuesta = 0;
	int longitud = sizeof(s2)/sizeof(*s2);
	for(int i = 0; i < longitud; i++){
		if(s2[i] == separador){	
			return respuesta = 1;
		}
	}
	return respuesta;
}

int buscarS3(char separador){
	int respuesta = 0;
	int longitud = sizeof(s3)/sizeof(*s3);
	for(int i = 0; i < longitud; i++){
		if(s3[i] == separador){	
			return respuesta = 1;
		}
	}
	
	if(respuesta == 0){
		if(isalpha(separador)){
			return respuesta = 1;
		}else if(isalnum(separador)){
			return respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarS4(char separador){
	int respuesta = 0;
	int longitud = sizeof(s4)/sizeof(*s4);
	for(int i = 0; i < longitud; i++){
		if(s4[i] == separador){	
			return respuesta = 1;	
		}
	}
	//sirve para buscar separadores que se han  numeros o letras
	if(respuesta == 0){
		if(isalpha(separador)){
			return respuesta = 1;
		}else if(isalnum(separador)){
			return respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarS5(char separador){
	int respuesta = 0;
	int longitud = sizeof(s5)/sizeof(*s5);
	for(int i = 0; i < longitud; i++){
		if(s5[i] == separador){	
			return respuesta = 1;	
		}
	}
	return respuesta;
}

int buscarS6(char separador){
	int respuesta = 0;
	int longitud = sizeof(s6)/sizeof(*s6);
	for(int i = 0; i < longitud; i++){
		if(s6[i] == separador){	
			return respuesta = 1;	
		}
	}
	
	//sirve para buscar separadores que se han  numeros o letras
	if(respuesta == 0){
		if(isalpha(separador)){
			respuesta = 1;
		}else if(isalnum(separador)){
			respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarS7(char separador){
	int respuesta = 0;
	int longitud = sizeof(s7)/sizeof(*s7);
	for(int i = 0; i < longitud; i++){
		if(s7[i] == separador){	
			return respuesta = 1;	
		}
	}
	//sirve para buscar separadores que se han  numeros o letras y saldo de linea
	if(respuesta == 0){
		if(isalpha(separador)){
			return respuesta = 1;
		}else if(isalnum(separador)){
			return respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarS8(char separador){
	int respuesta = 0;
	int longitud = sizeof(s8)/sizeof(*s8);
	for(int i = 0; i < longitud; i++){
		if(s8[i] == separador){	
			return respuesta = 1;	
		}
	}
	//sirve para buscar separadores que se han  numeros o letras, salto de linea y el fin de archivo
	if(respuesta == 0){
		if(isalpha(separador)){
			return respuesta = 1;
		}else if(isalnum(separador)){
			return respuesta = 1;
		}else if(separador != EOF){
			error = true; //true en el error para dejar que el automata entre en un bucle infinito
			return respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarS9(char separador){
	int respuesta = 0;
	int longitud = sizeof(s9)/sizeof(*s9);
	for(int i = 0; i < longitud; i++){
		if(s9[i] == separador){	
			return respuesta = 1;	
		}
	}
	//sirve para buscar separadores que se han  numeros o letras
	if(respuesta == 0){
		if(isalpha(separador)){
			return respuesta = 1;
		}else if(isalnum(separador)){
			return respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarS10(char separador){
	int respuesta = 0;
	int longitud = sizeof(s10)/sizeof(*s10);
	for(int i = 0; i < longitud; i++){
		if(s10[i] == separador){	
			return respuesta = 1;	
		}
	}
	//sirve para buscar separadores que se han  numeros o letras
	if(respuesta == 0){
		if(isalpha(separador)){
			return respuesta = 1;
		}else if(isalnum(separador)){
			return respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarS11(char separador){
	int respuesta = 0;
	int longitud = sizeof(s11)/sizeof(*s11);
	for(int i = 0; i < longitud; i++){
		if(s11[i] == separador){	
			return respuesta = 1;	
		}
	}
	//sirve para buscar separadores que se han  numeros o letras
	if(respuesta == 0){
		if(isalpha(separador)){
			return respuesta = 1;
		}else if(isalnum(separador)){
			return respuesta = 1;
		}
	}
	
	return respuesta;
}

int buscarPalabraReservada(string palabra){
	int respuesta = 0;
	int longitud = sizeof(palabraR)/sizeof(*palabraR);
	for(int i = 0; i < longitud; i++){
		if(palabraR[i] == palabra){
				
			return respuesta = 1;

		}

	}
	
	return respuesta;
}

int main(){
	//declaracion de variables
	int estado = 0;
	string token = "";
	
	//abrimos el archivo.txt
	ifstream fichero;
	fichero.open("archivo.txt");
	char caracter;
	
	//el parametro error es para especificar si existe un error lexico
	//el parametro !fichero.eoc() sirve para seguir leyendo el archivo asta que llegue al fin de esté
	while((error == false) && (!fichero.eof())){

		fichero.get(caracter);

		switch(estado){
			case 0:
				if (isalpha(caracter)){
					estado = 1;
					token += caracter;
				}else if(isalnum(caracter)){
					estado = 2;
					token += caracter;
				}else if(caracter == '<' || caracter == '>' || caracter == '='){
					estado = 5;	
					token += caracter;	
				}else if(caracter == '!'){
					estado = 6;
					token += caracter;	
				}else if(caracter == '('){
					estado = 8;
					token += caracter;
				}else if(caracter == ')'){
					estado = 9;
					token += caracter;
				}else if(caracter == '+' || caracter == '-' || caracter == '*' || caracter == '/'){
					estado = 10;
					token += caracter;
				}else if(caracter == '{'){
					estado = 11;
					token += caracter;
				}else if(caracter == '}'){
					estado = 12;
					token += caracter;
				}else if(caracter == ','){
					estado = 13;
					token += caracter;
				}else if(caracter == ';'){
					estado = 14;
					token += caracter;
				}else if(caracter == '\"'){
					estado = 15;
					token += caracter;
				}else if(caracter == ' '){
					estado = 0;
				}
				break;
			case 1:
				if(isalpha(caracter)){
					estado = 1;
					token += caracter;
				}else if(isalnum(caracter)){
					estado = 1;
					token += caracter;
				}else{
					if (buscarS1(caracter) == 1){
						if(buscarPalabraReservada(token) == 1){
							cout <<"Palabra reservada: "<< token <<endl;
							
						}else{
							cout <<"id: "<< token <<endl;
							
						}
						token = "";
						estado = 0;
						fichero.unget();
					}else{
						cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
						error = true;
					}
				}
				break;
			case 2:
				if(isalnum(caracter)){
					estado = 2;
					token += caracter;
				}else if(caracter == ','){
					estado = 3;
					token += caracter;
				}else{
					if(buscarS2(caracter) == 1){
						cout <<"entero: "<< token << endl;
						token = "";
						estado = 0;
						fichero.unget();
					}else{
						cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
						error = true;
					}
				}
				break;
			case 3:
				if(isalnum(caracter)){
					estado = 4;
					token += caracter;
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}

				break;	
			case 4:
				if(isalnum(caracter)){
					estado = 4;
					token += caracter;
				}else{
					if(buscarS2(caracter) == 1){
						cout <<"punto decimal: "<< token << endl;
						token = "";
						estado = 0;
						fichero.unget();
					}else{
						cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
						error = true;
					}
				}

				break;
			case 5:
				if(caracter == '='){
					estado = 7;
					token += caracter;
				}else{
					if(buscarS3(caracter) == 1){
						cout <<"operador relacional: "<< token << endl;
						token = "";
						estado = 0;
						fichero.unget();
					}else{
						cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
						error = true;
					}
				}
				break;
			case 6:
				if(caracter == '='){
					estado = 7;
					token += caracter;
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 7:
				if(buscarS3(caracter) == 1){
					cout <<"operador relacional: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 8:
				if(buscarS4(caracter) == 1){
					cout <<"parentesis abierto: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 9:
				if(buscarS5(caracter) == 1){
					cout <<"parentesis cerrado: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 10:
				if(buscarS6(caracter) == 1){
					cout <<"operador aritmetico: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 11:
				if(buscarS7(caracter) == 1){
					cout <<"llave abierta: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 12:
				if(buscarS8(caracter) == 1){
					cout  <<"llave cerrada: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 13:
				if(buscarS9(caracter) == 1){
					cout  <<"coma: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 14:
				if(buscarS10(caracter) == 1){
					cout  <<"punto y coma: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;
			case 15:
				if(buscarS11(caracter) == 1){
					cout  <<"comilla: "<< token << endl;
					token = "";
					estado = 0;
					fichero.unget();
				}else{
					cout << "error lexico: " << token <<"'"<<caracter<<"'"<< endl;
					error = true;
				}
				break;	
			default:
				break;	
		}
	
	}
	fichero.close();

}


