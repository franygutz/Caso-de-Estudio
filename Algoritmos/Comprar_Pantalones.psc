Proceso Comprar_Pantalones
	Definir option Como Entero;
	Definir jeans_option Como Entero;
	Definir vestri_option Como Entero;
	Definir cantidadCompra Como Entero;
	Definir continuarCompra Como Logico;
	
	// Desglose de tipos de pantalones
	Escribir "Tipos de pantalones disponibles: ";
	Escribir "1. Jeans";
	Escribir "2. Pantalones de vestir";
	Escribir "Digite un número para seleccionar la categoría que desea: ";
	Leer option;
	
	Segun option Hacer
		Caso 1: // Pantalones jeans
			Escribir "Jeans disponibles: ";
			Escribir "1. Jeans azul ---- $60";
			Escribir "2. Jeans negro ---- $65";
			Escribir "Digite el número del producto que desea comprar: ";
			Leer jeans_option;
			
		Caso 2: // Pantalones de vestir
			Escribir "Pantalones de vestir disponibles son: ";
			Escribir "1. Pantalón negro ---- $70";
			Escribir "2. Pantalón gris ---- $75";
			Escribir "Digite el número del producto que desea comprar: ";
			Leer vestri_option;
	FinSegun
FinAlgoritmo
