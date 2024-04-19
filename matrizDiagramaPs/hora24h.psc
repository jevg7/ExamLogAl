Proceso hora24h
	Definir horaAct Como Entero;
	Escribir 'Bienvenido';
	Escribir 'Escriba la hora actual en formato 24h';
	Leer horaAct;
	Si horaAct<=12 Entonces
		Escribir 'Es de dia';
	SiNo
		Escribir 'Es de noche';
	FinSi
FinProceso
