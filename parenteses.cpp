#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int main(){
	char c;
	while(cin >> ("%c", &c) !=EOF){
		int valido = 1;
		int Abre = 0, Fecha = 0;
		while(valido == 1){
			if(c =='(')
				Abre++;
			else if (c ==')') 
				Fecha++;
			if (Fecha > Abre)
				valido = 0;
			c =getchar();
			if(c == '\n'){
				break;
			}

		}
		if(Abre == Fecha && valido) 
			cout << "Correct" << endl;
		else 
			cout << "Incorrect" << endl;
	}
}