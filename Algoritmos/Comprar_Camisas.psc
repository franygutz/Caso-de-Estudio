Proceso Comprar_Camisas
	Definir option, cformal_option, casual_option, cantidadCompra Como Entero;
	Definir total Como Real;
	Definir continuarCompra Como Logico;
	
	// Desglose de categorías de zapatos
	Escribir "Tipos de camisas disponibles: ";
	Escribir "1. Camisas formales";
	Escribir "2. Camisas casuales";
	Escribir "Digite un número para seleccionar la categoría que desea: ";
	Leer option;
	
	Segun option Hacer
		Caso 1: // Camisas casuales
			Escribir "Las camisas disponibles son: ";
			Escribir "1. Camisa blanca ---- $50";
			Escribir "2. Camisa azul ---- $55";
			Escribir "Digite el número del producto que desea comprar: ";
			Leer cformal_option;
			
		Caso 2: // Zapatos de dama
			Escribir "Las camisas casuales disponibles son: ";
			Escribir "1. Camisa a cuadros ---- $40";
			Escribir "2. Camisa de rayas ---- $45";
			Escribir "Digite el número del producto que desea comprar: ";
			Leer casual_option;
	FinSegun
FinFuncion
FinAlgoritmo