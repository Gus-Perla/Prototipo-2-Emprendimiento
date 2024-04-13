#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {

    string apellidos, nombres, fechaNac;
    string sexo, rev;
    sexo = "a";
    rev = "i";
    string check;
    long int numeroCed;
    check = "n";
    
while(check != "s" && check != "S"){
    
    while(rev == "i" || rev == "I"){
	    sexo = "a";
		cout << "Datos Personales \n\n";
	    cout << "Apellidos: ";
	    cin >> apellidos;
	    cout << "\nNombres: ";
	    cin >> nombres;
	    cout << "\nFecha de Nacimiento (dd-mm-aaaa): ";
	    cin >> fechaNac;
	    while (sexo != "m" && sexo != "M" && sexo!= "f" && sexo != "F"){
		    cout << "\nSexo (M/F): ";
	    	cin >> sexo;
		}
	    cout << "\nNumero de cedula: (1234567890): ";
	    cin >> numeroCed;
	    
	    cout << "\nTus datos son: \n";
		cout << apellidos; 
		cout << "\n";
		cout << nombres; 
		cout << "\n";
		cout << fechaNac; 
		cout << "\n";
		cout << sexo; 
		cout << "\n";
		cout << numeroCed;
		
		cout << "\n\n Estan tus datos correctos (C), o incorrectos (I): ";
		cin >> rev;
		
		while(rev != "i" && rev != "I" && rev != "c" && rev != "C"){
			cout << "\n\n Estan tus datos correctos (C), o incorrectos (I): ";
			cin >> rev;
		}
	}

    int C1, C2, C3, C4, C5, C6, C7, C8;
    C1 = 0;
    C2 = 0;
    C3 = 0;
    C4 = 0;
    C5 = 0;
    C6 = 0;
    C7 = 0;
    C8 = 0;

	while (C1 != 1 && C1 != 2){
		
	cout << "\n \nTienes enfermedades preexistentes \n";
    cout << "1. Si \n";
    cout << "2. No \n";
    cout << "Ingresa el numero de tu respuesta: ";
    cin >> C1;
		
    if (C1 == 1) {
        cout << "\nVas sacar una cita de control? \n";
        cout << "1. Si \n";
		cout << "2. No \n\n";
		cout << "Ingresa el numero de tu respuesta: ";
		cin >> C2;
			while (C2 != 1 || C2 != 2)
			if (C2 == 1){
				cout << "\n\nA que especialidad te vas a dirigir? \n\n";
				cout << " 1. Sistema Gastrointestinal \n";
        		cout << " 2. Sistema Respiratorio \n";
 				cout << " 3. Sistema Articular y Muscular \n";
		        cout << " 4. Sistema Renal \n";
        		cout << " 5. Sistema Sanguineo \n";
		        cout << " 6. Sistema Dermatologico \n";
        		cout << " 7. Ofmatologia \n";
		        cout << " 8. Sistema Neurologico \n";
        		cout << " 9. Sistema Cardiaco \n";
		        cout << "10. Otorrinolaringologia \n";
        		cout << "11. Endocrinologia \n";
		        cout << "12. Ginecologia \n";
		        cout << "13. Traumatologia \n";
		        cout << "14. Oncologia \n";
		        cout << "\nIngresa el numero de tu respuesta: ";
		        cin >> C4;
				break;
			} else if (C2 == 2){
				C1 = 2;
				break;
			} else {
       			cout << "Respuesta invalida.\n";
    			cout << "Porfavor ingresa una respuesta valida: ";
    			cin >> C2;
			}
			
    } else if (C1 == 2) {
       break;
    } else {
        cout << "Respuesta invalida.\n";
    	cout << "Porfavor ingresa una respuesta valida: ";
    	cin >> C1;
    }
	}
    
	if (C1 == 2){
		cout << "\n \nQue Parte del cuerpo te esta molestando o deseas que sea revisado? \n\n";
        cout << "1. Sistema Gastrointestinal \n";
        cout << "2. Sistema Respiratorio \n";
        cout << "3. Sistema Articular y Muscular \n";
        cout << "4. Sistema Renal \n";
        cout << "5. Sistema Sanguineo \n";
        cout << "6. Sistema Dermatologico \n";
        cout << "7. Ofmatologia \n";
        cout << "8. Sistema Neurologico \n";
        cout << "9. Sistema Cardiaco \n";
        cout << "10. Otorrinolaringologia \n";
        cout << "11. Problemas hormonales \n";
        cout << "12. Ginecologia \n";
        cout << "\nIngresa el numero de tu respuesta: ";
        cin >> C3;
	}
	
	if (C3 == 1){
		cout << "\n\nSintomas del Sistema Gastrointestinal \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Diarrea: ";
		cin >> C5;
		cout << "Nota que su piel se ha tornado amarillenta?: ";
		cin >> C6;
		cout << "Heces con sangre: ";
		cin >> C7;
		if (C6 == 1 || C7 ==1){
			C4 = 1;
		} else {
			C4 = 15;
		}
	}
	
	if (C4 == 1){
		cout << "\n\nLista de medicos Gastrointestinales: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C4 == 15){
		cout << "\n\nLista de medicos Generales: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	
	if (C3 == 2){
		cout << "\n\nSintomas del Sistema Respiratorio \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Sensacion de falta de Aire: ";
		cin >> C5;
		cout << "Tos cronica (más de 8 semanas): ";
		cin >> C6;
		if (C5 == 1 || C6 ==1){
			C4 = 2;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 2){
		cout << "\n\nLista de Pneumologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 3){
		cout << "\n\nSintomas del Sistema Articular y Muscular \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Dolor en las articulaciones: ";
		cin >> C5;
		if (C5 == 1){
			C4 = 3;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 2){
		cout << "\n\nLista de Reumatologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}

	if (C3 == 4){
		cout << "\n\nSintomas del Sistema Renal \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Disminucion de la cantidad y frecuencia de las veces que orina: ";
		cin >> C5;
		cout << "Orina Espumosa: ";
		cin >> C6;
		if (C5 == 1 || C6 ==1){
			C4 = 4;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 4){
		cout << "\n\nLista de Nefrologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	
	if (C3 == 5){
		cout << "\n\nSintomas del Sistema Sanguineo \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Cansancio y Deseo de comer hielo o tierra: ";
		cin >> C5;
		cout << "Sangrados Recurrentes y Prolongados: ";
		cin >> C6;
		if (C6 ==1){
			C4 = 5;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 5){
		cout << "\n\nLista de Hematologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 6){
		cout << "\n\nSintomas del Sistema Dermatologico \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Picazon en la piel: ";
		cin >> C5;
		cout << "Irritación prolongada en la piel: ";
		cin >> C6;
		if (C6 ==1){
			C4 = 6;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 6){
		cout << "\n\nLista de Dermatologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 7){
		C4 = 7;
	}

	if (C4 == 7){
		cout << "\n\nLista de Oftalmologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 8){
		cout << "\n\nSintomas del Sistema Neurologico \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Dolor de cabeza: ";
		cin >> C5;
		cout << "Sensación de quemazón en las piernas: ";
		cin >> C6;
		if (C6 ==1){
			C4 = 8;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 8){
		cout << "\n\nLista de Neurologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 9){
		C4 = 9;
	}

	if (C4 == 9){
		cout << "\n\nLista de Cardiologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 10){
		cout << "\n\nOtorrinolaringologia \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Moquera persistente: ";
		cin >> C5;
		if (C6 == 1){
			C4 = 15;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 10){
		cout << "\n\nLista de Otorrinolaringologos : \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 11){
		cout << "\n\nProblemas Hormonales \n\n";
		cout << "Para las preguntas que siguen llene 1 si tiene ese sitoma y 2 si no tiene ese sintoma:\n\n";
		cout << "Muchas ganas de comer Y Necesidad constate de ir al baño Y Sed insaciable: ";
		cin >> C5;
		if (C5 == 1 ){
			C4 = 15;
		} else {
			C4 = 15;
		}
	}

	if (C4 == 11){
		cout << "\n\nLista de Endocrinologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	if (C3 == 12){
		C4 = 12;
	}

	if (C4 == 12){
		cout << "\n\nLista de Ginecologos: \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}

	if (C4 == 13){
		cout << "\n\nLista de Traumatologos : \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}

	if (C4 == 14){
		cout << "\n\nLista de Oncologos : \n";
		cout << " -----Se llena basado en la lista de medicos de la institucion.-----\n\n";
	}
	
	
    cout << "\nTus datos son: \n";
	cout << apellidos;
	cout << "\n";
	cout << nombres;
	cout << "\n";
	cout << fechaNac;
	cout << "\n";
	cout << sexo;
	cout << "\n";
	cout << numeroCed;
	
	cout << "\n\nDeseas agendar una cita nuevamente (N)\n";
	cout << "Deseas salir (S)\n";
	cin >> check;
	
	while(check != "s" && check != "S" && check != "n" && check != "n"){
		cout << "\n\nDeseas agendar una cita nuevamente (N)\n";
		cout << "Deseas salir (S)\n";
		cin >> check;
	}
	if (check == "n" || check == "N"){
		rev = "i";
	}
}

cout << "\n\nGracias por utilizar EfectiveMed, te deseamos un excelente dia.\n\n";
    return 0;
}
