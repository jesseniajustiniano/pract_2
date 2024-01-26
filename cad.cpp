#include <iostream>
/*las cadenas son un conjuntos de caracteres
se pueden concatenar 
medir longitud
saber si esta vacia
*/
using namespace std;

int main(int argc, char *argv[]) {
	
	
	string lyu;
	lyu = "I love C++";
	//Concatenando una cadena con la variable
	cout<<"La cadena es:" + lyu<<endl;
	//medir la longitud de una cadena
	cout<<"La longitud de la cadena es:" + lyu.length()<<endl;
	//Si el valor de retorno es 0,significa que la cadena esta vacia
	cout<<"¿Esta¡ vacio?:"<<lyu.empty()<<endl<<endl;
	lyu.append("!");     //Agrega uno despues de la cadena!
	cout<<"La cadena modificada es:"<<lyu<<endl<<endl;
	string lyu_2;
	lyu_2= "I love too";
	lyu.swap(lyu_2);   //intercambio de datos de cadenas
	cout<<"Cambie la cadena modificada como:"<<lyu<<endl<<endl;
	
	
	int site;
	site =lyu.find('l', 0);  //encuentra la posicion donde aparece l desde o y regresar
	cout<<"La posiciion donde aparece l en la cadena es:"<<site<<endl;
	site = lyu.find('o', 0); //encuentra la poscion donde aparece oo  desde 0 y regresar 
	cout<<"la posicion donde aparece oo en la cadena es:"<<site<<endl;
	site = 0; //recorrer y buscar todas las posiciones 
	do 
	{
		site = lyu.find('o', site);
		if (site ==-1)
			cout<<"Busqueda completada, no hay otros elementos"<<endl;
		else
			cout<<"La posicion donde aparece o en la cadena es:"<<site<<endl;
		site++;
	} while (site !=0);
	//a - 4
	//e - 3
	//i - 1
	//o - 0
	//u - 5
	
	
	
	
	
	
	return 0;
}

