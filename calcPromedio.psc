Algoritmo calcPromedio
	
	Definir nota1 , nota2 , nota3, nota4 , nota5, total Como Entero;
	Definir promedio Como Real;
	
	Escribir "Ingrese la nota 1: ";
	Leer nota1;
	
	Escribir "Ingrese la nota 2: ";
	Leer nota2;
	
	Escribir "Ingrese la nota 3: ";
	Leer nota3;
	
	Escribir "Ingrese la nota 4: ";
	Leer nota4;
	
	Escribir "Ingrese la nota 5: ";
	Leer nota5;
	
	total<- nota1 + nota2 + nota3 + nota4 + nota5;
	promedio<- total/5;

	Si promedio >= 85 Entonces
        Escribir "¡Felicitaciones! Tu promedio es ", promedio, ". Sigue así.";
    Sino
        Escribir "Ánimo, tu promedio es ", promedio, ". Sigue esforzándote.";
    FinSi
	
FinAlgoritmo
