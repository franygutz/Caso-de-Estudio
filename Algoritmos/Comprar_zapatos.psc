Proceso Comprar_zapatos
	Definir cordo Como Real;
	Definir total Como Real;
	Definir continuarCompra Como Logico;
	Definir numTalla Como Entero;
	Definir cantidadCompra Como Entero;
	Definir adidas_option, converse_option, sandalias_option, tacones_option Como Entero;
	
	Definir  seleccionarZapatos Como Real;
		Definir option, zap_option Como Entero;
		
		// Desglose de categor�as de zapatos
		Escribir "Categor�as de zapatos disponibles: ";
		Escribir "1. Zapatos deportivos";
		Escribir "2. Zapatos de dama";
		Escribir "Digite un n�mero para seleccionar la categor�a que desea: ";
		Leer option;
		
		Segun option Hacer
			Caso 1: // Zapatos deportivos
				Escribir "Los tenis disponibles son: ";
				Escribir "1. Converse";
				Escribir "2. Adidas";
				Escribir "Digite el n�mero del producto que desea comprar: ";
				Leer zap_option;
				
				Segun zap_option Hacer
					Caso 1: // Converse
						Mientras continuarCompra Hacer
							Escribir "Los Converse disponibles son: ";
							Escribir "1. Custom Run Star Hike By You --- $140";
							Escribir "2. Chuck Taylor All Stars Washed Canvas --- $80";
							Escribir "3. Chuck Taylor All Stars (Clasicas) --- $75";
							Escribir "Digite el n�mero del producto que desea comprar: ";
							Leer converse_option;
						FinMientras
					Caso 2: // Adidas
						Escribir "Los Adidas disponibles son: ";
						Escribir "1. Bravada 2.0 Platform Shoes --- $75";
						Escribir "2. Gazelle Indoor Shoes --- $130";
						Escribir "3. Cloudfoam Pure Shoes --- $80";
						Escribir "Digite el n�mero del producto que desea comprar: ";
						Leer adidas_option;
				FinSegun
			Caso 2: // Zapatos de dama
				Escribir "Los zapatos de dama disponibles son: ";
				Escribir "1. Tacones";
				Escribir "2. Sandalias";
				Escribir "Digite el n�mero del producto que desea comprar: ";
				Leer zap_option;
				
				Segun zap_option Hacer
					Caso 1: // Tacones
						Mientras continuarCompra Hacer
							Escribir "Los Tacones disponibles son: ";
							Escribir "1. Tac�n Rojo --- $120";
							Escribir "2. Tac�n Negro --- $100";
							Escribir "Digite el n�mero del producto que desea comprar: ";
							Leer tacones_option;
						FinMientras
					Caso 2: // Sandalias
						Escribir "Las Sandalias disponibles son: ";
						Escribir "1. Sandalia Beige --- $50";
						Escribir "2. Sandalia Blanca --- $60";
						Escribir "Digite el n�mero del producto que desea comprar: ";
						Leer sandalias_option;
				FinSegun
		FinSegun
FinFuncion
FinAlgoritmo

