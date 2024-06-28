#include <iostream>
#include <string>
// Funci�n para seleccionar y comprar zapatos


const std::string PAYPAL_CORDOBAS = "ciclo.nicaragua121299@negocio.com]";
const std::string PAYPAL_DOLARES = "ciclo.nicaragua1212@negocio.com]";
const std::string BAC_CORDOBAS = "BAC1234567890";
const std::string BAMPRO_CORDOBAS = "BAMPRO1234567890";
const std::string AMEX_CORDOBAS = "AMEX1234567890";
const std::string BAC_DOLARES = "BAC0987654321";
const std::string BAMPRO_DOLARES = "BAMPRO0987654321";
const std::string AMEX_DOLARES = "AMEX0987654321";
const double equivalencia = 36.78;
double cordo;
double total;
bool continuarCompra;
int numTalla;
int cantidadCompra;
int tallaSiete, tallaOcho, tallaNueve, tallaDiez, tallaOnce, tallaDoce;
int adidas_option, converse_option, sandalias_option, tacones_option;

double seleccionarZapatos() {
    int option, zap_option;

    // Desglose de categor�as de zapatos
    std::cout << "Categor�as de zapatos disponibles: " << std::endl;
    std::cout << "1. Zapatos deportivos\n2. Zapatos de dama\n" << std::endl;
    std::cout << "Digite un n�mero para seleccionar la categor�a que desea: \n$: ";
    std::cin >> option;

    switch (option) {
        case 1: // Zapatos deportivos
            std::cout << "\nLos tenis disponibles son: \n1. Converse\n2. Adidas" << std::endl;
            std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
            std::cin >> zap_option;

            switch (zap_option) {
                case 1: // Converse
                    while (continuarCompra) {
                        std::cout << "Los Converse disponibles son: \n";
                        std::cout << "1. Custom Run Star Hike By You --- $140\n";
                        std::cout << "2. Chuck Taylor All Stars Washed Canvas --- $80\n";
                        std::cout << "3. Chuck Taylor All Stars (Clasicas) --- $75\n";
                        std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
                        std::cin >> converse_option;

                        switch (converse_option) {
// Custom Run Star Hike By You
                            case 1: { 
                                tallaSiete = 1, tallaOcho = 1, tallaDiez = 2;
                                std::cout << "\nHas seleccionado los Custom Run Star Hike By You, actualmente disponibles:\n";
                                std::cout << "Talla 7: " << tallaSiete << " pares\n";
                                std::cout << "Talla 8: " << tallaOcho << " pares\n";
                                std::cout << "Talla 10: " << tallaDiez << " pares\n";

                                std::cout << "\nPor favor ingrese el n�mero de talla que desea (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 7 && numTalla != 8 && numTalla != 10) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                    continue;
                                }

                                std::cout << "�Cu�ntos pares desea comprar? \n$: ";
                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 7 && cantidadCompra > tallaSiete) || 
                                    (numTalla == 8 && cantidadCompra > tallaOcho) || 
                                    (numTalla == 10 && cantidadCompra > tallaDiez)) {
                                    std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                    if (numTalla == 7) std::cout << tallaSiete;
                                    if (numTalla == 8) std::cout << tallaOcho;
                                    if (numTalla == 10) std::cout << tallaDiez;
                                    std::cout << " par(es) disponibles. �Desea comprarlo(s)? (s/n) \n$: ";
                                    char confirm;
                                    std::cin >> confirm;
                                    if (confirm == 's' || confirm == 'S') {
                                        cantidadCompra = (numTalla == 7) ? tallaSiete : (numTalla == 8) ? tallaOcho : tallaDiez;
                                    } else {
                                        continue;
                                    }
                                }

                                std::cout << "\nHa seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                                total += 140 * cantidadCompra;
                                break;
                            }
// Chuck Taylor All Stars Washed Canvas
                            case 2: {
                                tallaNueve = 1, tallaOnce = 1;
                                std::cout << "\nHas seleccionado Chuck Taylor All Stars Washed Canvas, actualmente solo hay: ";
                                std::cout << "Talla 9: " << tallaNueve << " disponibles" <<std::endl;
                                std::cout << "Talla 11: " << tallaOnce << " disponibles" << std::endl;
                                std::cout << "\nPor favor ingresa el numero de talla que deseas (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 9 && numTalla != 11) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                            std::cout << "�Cu�ntos pares deseas comprar? \n$: ";
                            std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 9 && cantidadCompra > tallaNueve) || 
                                    (numTalla == 11 && cantidadCompra > tallaOnce)) {
                                        std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                            if (numTalla == 9) std::cout << tallaNueve;
                                            if (numTalla == 11) std::cout << tallaOnce;
                                                std::cout << " par(es) disponibles. �Deseas comprarlo(s)? (s/n) \n$: ";
                                                char confirm;
                                                std::cin >> confirm;
                                            if (confirm == 's' || confirm == 'S') {
                                                cantidadCompra = (numTalla == 9) ? tallaNueve : tallaOnce;
                                            } else {
                                                continue;
                                            }
                                }
                            std::cout << "\nHas seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                            total += 80 * cantidadCompra;
                            break;
                            }
// Chuck Taylor All Stars Clasicas
                            case 3: {
                                tallaSiete = 1, tallaDiez = 2;
                                std::cout << "Has seleccionado Chuck Taylor All Stars (Clasicas), actualmente solo hay: ";
                                std::cout << "Talla 7: " << tallaSiete << " disponibles" << std::endl;
                                std:: cout << "Talla 10: " << tallaDiez << " disponibles" << std::endl;
                                std::cout << "\nPor favor ingresa el numero de talla que deseas (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 7 && numTalla != 10) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                                std::cout << "\n�Cu�ntos pares deseas comprar? \n$: ";
                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 7 && cantidadCompra > tallaSiete) || 
                                    (numTalla == 10 && cantidadCompra > tallaDiez)) {
                                    std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                    if (numTalla == 7) std::cout << tallaSiete;
                                    if (numTalla == 10) std::cout << tallaDiez;
                                    std::cout << " par(es) disponibles. �Deseas comprarlo(s)? (s/n) \n$: ";
                                    char confirm;
                                    std::cin >> confirm;
                                    if (confirm == 's' || confirm == 'S') {
                                        cantidadCompra = (numTalla == 7) ? tallaSiete : tallaDiez;
                                    } else {
                                        continue;
                                    }
                                }

                                std::cout << "\nHas seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                                total += 75 * cantidadCompra;
                                break;
                            }
//Si digita un numero fuera del rango
                            default:
                                std::cout << "\nOpci�n no v�lida." << std::endl;
                                continue;
                        }
                        std::cout << "\n�Desea comprar otro producto? (s/n) \n$: ";
                        char otraCompra;
                        std::cin >> otraCompra;
                        if (otraCompra != 's') {
                            continuarCompra = false;
                        }
                    }
//Termina apartado de Converse
                    break;
//Empieza el case para Adidas
                case 2: // Adidas
                        while (continuarCompra) {
                        std::cout << "\nLos Adidas disponibles son: "; 
                        std::cout << "\n1. Bravada 2.0 Platform Shoes --- $75";
                        std::cout << "\n2. Gazelle Indoor Shoes --- $130";
                        std::cout << "\n3. Cloudfoam Pure Shoes --- $80" << std::endl;
                        std::cout << "\nDigite el numero del producto que desea comprar \n$: ";
                        std::cin >> adidas_option;
                        switch (adidas_option) {
// Bravada 2.0 Platform Shoes 
                            case 1: { 
                                tallaSiete = 1, tallaOnce= 1;
                                std::cout << "\nHas seleccionado los Bravada 2.0 Platform Shoes , actualmente disponibles:\n";
                                std::cout << "Talla 7: " << tallaSiete << " pares\n";
                                std::cout << "Talla 11: " << tallaOnce << " pares\n";

                                std::cout << "\nPor favor ingrese el n�mero de talla que desea (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 7 && numTalla != 11) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                                std::cout << "\n�Cu�ntos pares desea comprar? \n$: ";
                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 7 && cantidadCompra > tallaSiete) || 
                                    (numTalla == 11 && cantidadCompra > tallaOnce) ) {
                                    std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                    if (numTalla == 7) std::cout << tallaSiete;
                                    if (numTalla == 11) std::cout << tallaOnce;
                                    std::cout << " par(es) disponibles. �Desea comprarlo(s)? (s/n) \n$: ";
                                    char confirm;
                                    std::cin >> confirm;
                                    if (confirm == 's' || confirm == 'S') {
                                        cantidadCompra = (numTalla == 7) ? tallaSiete : tallaOnce;
                                    } else {
                                        continue;
                                    }
                                }

                                std::cout << "\nHa seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                                total += 75 * cantidadCompra;
                                break;
                            }
// Gazelle Indoor Shoes
                            case 2: {
                                tallaOcho = 2, tallaDoce = 1;
                                std::cout << "\nHas seleccionado Gazelle Indoor Shoes, actualmente solo hay:";
                                std::cout << "\nTalla 8: " << tallaOcho << " disponibles";
                                std::cout << "\nTalla 12: " << tallaDoce << " disponibles\n";
                                std::cout << "\nPor favor ingresa el numero de talla que deseas (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 8 && numTalla != 12) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                                std::cout << "\n�Cu�ntos pares deseas comprar? \n$: ";
                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 8 && cantidadCompra > tallaOcho) || 
                                        (numTalla == 12 && cantidadCompra > tallaDoce)) {
                                        std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                            if (numTalla == 8) std::cout << tallaOcho;
                                            if (numTalla == 12) std::cout << tallaDoce;
                                                std::cout << " par(es) disponibles. �Deseas comprarlo(s)? (s/n) \n$: ";
                                                char confirm;
                                                std::cin >> confirm;
                                            if (confirm == 's' || confirm == 'S') {
                                                cantidadCompra = (numTalla == 8) ? tallaOcho : tallaDoce;
                                            } else {
                                                continue;
                                            }
                                }
                            std::cout << "\nHas seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                            total += 130 * cantidadCompra;
                            break;
                            }

// Cloudfoam Pure Shoes
                            case 3: {
                                tallaNueve = 1, tallaOnce = 1;
                                std::cout << "\nHas seleccionado Cloudfoam Pure Shoes, actualmente solo hay:";
                                std::cout << "\nTalla 9: " << tallaNueve << " disponibles";
                                std::cout << "\nTalla 11: " << tallaOnce << " disponibles\n";
                                std::cout << "\nPor favor ingresa el numero de talla que deseas (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 9 && numTalla != 11) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                                std::cout << "\n�Cu�ntos pares deseas comprar? \n$: ";

                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 9 && cantidadCompra > tallaNueve) || 
                                    (numTalla == 11 && cantidadCompra > tallaOnce)) {
                                    std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                    if (numTalla == 9) std::cout << tallaNueve;
                                    if (numTalla == 11) std::cout << tallaOnce;
                                    std::cout << " par(es) disponibles. �Deseas comprarlo(s)? (s/n) \n$: ";
                                    char confirm;
                                    std::cin >> confirm;
                                    if (confirm == 's' || confirm == 'S') {
                                        cantidadCompra = (numTalla == 9) ? tallaNueve : tallaOnce;
                                    } else {
                                        continue;
                                    }
                                }

                                std::cout << "\nHas seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                                total += 80 * cantidadCompra;
                                break;
                            }
//Si digita un numero fuera del rango
                            default:
                                std::cout << "\nOpci�n no v�lida." << std::endl;
                                continue;
                        }
                        std::cout << "\n�Desea comprar otro producto? (s/n) ";
                        char otraCompra;
                        std::cin >> otraCompra;
                        if (otraCompra != 's') {
                            continuarCompra = false;
                        }
                        }
//Termina apartado de Adidas
                    break;

                default:
                    std::cout << "\nOpci�n de zapatos deportivos no v�lida. Por favor, vuelva a intentar." << std::endl;
                    break;
            }
            break;

//Si son zapatos de dama:
        case 2: // Zapatos de dama
            std::cout << "Los zapatos de dama disponibles son: ";
            std::cout << "\n1. Tacones\n2. Sandalias" << std::endl;
             std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
            std::cin >> zap_option;

            switch (zap_option) {
                case 1: //Tacones
                    while (continuarCompra) {
                        std::cout << "Los Tacones disponibles son: \n";
                        std::cout << "1. Tac�n Rojo --- $120\n";
                        std::cout << "2. Tac�n Negro --- $100\n";
                        std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
                        std::cin >> tacones_option;

                        switch (tacones_option) {
// Tacon rojo
                            case 1: { 
                                tallaSiete = 1, tallaDiez = 1;
                                std::cout << "\nHas seleccionado los Custom Run Star Hike By You, actualmente disponibles:\n";
                                std::cout << "Talla 7: " << tallaSiete << " pares\n";
                                std::cout << "Talla 10: " << tallaDiez << " pares\n";

                                std::cout << "\nPor favor ingrese el n�mero de talla que desea (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 7 && numTalla != 10) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                    continue;
                                }

                                std::cout << "�Cu�ntos pares desea comprar? \n$: ";
                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 7 && cantidadCompra > tallaSiete) || 
                                    (numTalla == 10 && cantidadCompra > tallaDiez)) {
                                    std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                    if (numTalla == 7) std::cout << tallaSiete;
                                    if (numTalla == 10) std::cout << tallaDiez;
                                    std::cout << " par(es) disponibles. �Desea comprarlo(s)? (s/n) \n$: ";
                                    char confirm;
                                    std::cin >> confirm;
                                    if (confirm == 's' || confirm == 'S') {
                                        cantidadCompra = (numTalla == 7) ? tallaSiete : tallaDiez;
                                    } else {
                                        continue;
                                    }
                                }

                                std::cout << "\nHa seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                                total += 120 * cantidadCompra;
                                break;
                            }
// Tacon Negro
                            case 2: {
                                tallaNueve = 1;
                                std::cout << "\nHas seleccionado Tac�n Negro, actualmente solo hay: ";
                                std::cout << "Talla 9: " << tallaNueve << " disponibles" <<std::endl;
                                std::cout << "\nPor favor ingresa el numero de talla que deseas (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 9) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                            std::cout << "�Cu�ntos pares deseas comprar? \n$: ";
                            std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if (numTalla == 9 && cantidadCompra > tallaNueve) {
                                        std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                            if (numTalla == 9) std::cout << tallaNueve;
                                                std::cout << " par(es) disponibles. �Deseas comprarlo(s)? (s/n) \n$: ";
                                                char confirm;
                                                std::cin >> confirm;
                                            if (confirm == 's' || confirm == 'S') {
                                                cantidadCompra = (numTalla == 9);
                                            } else {
                                                continue;
                                            }
                                }
                            std::cout << "\nHas seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                            total += 100 * cantidadCompra;
                            break;
                            }
//Si digita un numero fuera del rango
                            default:
                                std::cout << "\nOpci�n no v�lida." << std::endl;
                                continue;
                        }
                        std::cout << "\n�Desea comprar otro producto? (s/n) \n$: ";
                        char otraCompra;
                        std::cin >> otraCompra;
                        if (otraCompra != 's') {
                            continuarCompra = false;
                        }
                    }
//Termina apartado de Tacone
                    break;
//Empieza el case para las Sandalias
                case 2: // Sandalias
                        while (continuarCompra) {
                        std::cout << "\nLos Sandalias disponibles son: "; 
                        std::cout << "\n1. Sandalia Beige --- $50";
                        std::cout << "\n2. Sandalia Blanca --- $60" << std::endl;
                        std::cout << "\nDigite el numero del producto que desea comprar \n$: ";
                        std::cin >> sandalias_option;

                        switch (sandalias_option) {
// Bravada 2.0 Platform Shoes 
                            case 1: {//Sandalia Beige 
                                tallaDoce = 1, tallaOnce= 1;
                                std::cout << "\nHas seleccionado la Sandalia Beige , actualmente disponibles:\n";
                                std::cout << "Talla 11: " << tallaOnce << " pares\n";
                                std::cout << "Talla 12: " << tallaDoce << " pares\n";

                                std::cout << "\nPor favor ingrese el n�mero de talla que desea (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla !=11 && numTalla != 12) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                                std::cout << "\n�Cu�ntos pares desea comprar? \n$: ";
                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 11&& cantidadCompra > tallaOnce) || 
                                    (numTalla == 12 && cantidadCompra > tallaDoce) ) {
                                    std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                    if (numTalla == 11) std::cout << tallaOnce;
                                    if (numTalla == 12) std::cout << tallaDoce;
                                    std::cout << " par(es) disponibles. �Desea comprarlo(s)? (s/n) \n$: ";
                                    char confirm;
                                    std::cin >> confirm;
                                    if (confirm == 's' || confirm == 'S') {
                                        cantidadCompra = (numTalla == 11) ? tallaOnce : tallaDoce;
                                    } else {
                                        continue;
                                    }
                                }

                                std::cout << "\nHa seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                                total += 50 * cantidadCompra;
                                break;
                            }
// Sandalias Blancas
                            case 2: {
                                tallaOcho = 1, tallaDiez = 1;
                                std::cout << "\nHas seleccionado la Sandalia Blanca, actualmente solo hay:";
                                std::cout << "\nTalla 8: " << tallaOcho << " disponibles";
                                std::cout << "\nTalla 10 " << tallaDiez << " disponibles\n";
                                std::cout << "\nPor favor ingresa el numero de talla que deseas (o 0 para volver al men� principal): \n$: ";
                                std::cin >> numTalla;

                                if (numTalla == 0) {
                                    continue;
                                }

                                // Verificar la disponibilidad de la talla
                                if (numTalla != 8 && numTalla != 10) {
                                    std::cout << "\nLo sentimos, la talla seleccionada no est� disponible." << std::endl;
                                    continue;
                                }

                                std::cout << "\n�Cu�ntos pares deseas comprar? \n$: ";
                                std::cin >> cantidadCompra;

                                // Verificar la disponibilidad de la cantidad
                                if ((numTalla == 8 && cantidadCompra > tallaOcho) || 
                                        (numTalla == 10 && cantidadCompra > tallaDiez)) {
                                        std::cout << "\nLo sentimos, no tenemos suficientes pares en la talla seleccionada. Actualmente solo hay ";
                                            if (numTalla == 8) std::cout << tallaOcho;
                                            if (numTalla == 10) std::cout << tallaDiez;
                                                std::cout << " par(es) disponibles. �Deseas comprarlo(s)? (s/n) \n$: ";
                                                char confirm;
                                                std::cin >> confirm;
                                            if (confirm == 's' || confirm == 'S') {
                                                cantidadCompra = (numTalla == 8) ? tallaOcho : tallaDiez;
                                            } else {
                                                continue;
                                            }
                                }
                            std::cout << "\nHas seleccionado " << cantidadCompra << " par(es) en la talla " << numTalla << ". " << std::endl;
                            total += 60 * cantidadCompra;
                            break;
                            }

//Si digita un numero fuera del rango
                            default:
                                std::cout << "\nOpci�n no v�lida." << std::endl;
                                continue;
                        }
                        std::cout << "\n�Desea comprar otro producto? (s/n) ";
                        char otraCompra;
                        std::cin >> otraCompra;
                        if (otraCompra != 's') {
                            continuarCompra = false;
                        }
                        }
//termina zapatos de dama
                    break;

                default:
                    std::cout << "\nOpci�n de zapatos de dama no v�lida. Por favor, vuelva a intentar." << std::endl;
                    break;
            }
            break;
        default:
            std::cout << "Opci�n no incluida. Por favor, vuelva a intentar." << std::endl;
            break;
    }

    return total;
}


double seleccionarCamisas() {
    int option, cformal_option, casual_option, cantidadCompra;
    double total = 0;
    bool continuarCompra = true;
    std::string tallaSeleccionada;

    while (continuarCompra) {
        std::cout << "Tipos de camisas disponibles: \n1. Camisas formales \n2. Camisas casuales\n" << std::endl;
        std::cout << "Digite un n�mero para seleccionar la categor�a que desea: \n$: ";
        std::cin >> option;

        switch (option) {
            case 1: { // Camisas formales
                int xl = 2, l = 4, m = 9, s = 4, xs = 3;
                while (continuarCompra) {
                    std::cout << "\nLas camisas formales disponibles son: \n1. Camisa blanca ---- $50\n2. Camisa azul --- $55" << std::endl;
                    std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
                    std::cin >> cformal_option;

                    switch (cformal_option) {
                        case 1: // Camisa blanca
                            xl = 2, l = 4, m = 9, s = 4, xs = 3;
                            std::cout << "\nHas seleccionado la Camisa Blanca, actualmente disponibles:\n";
                            std::cout << "Talla XL: " << xl << std::endl;
                            std::cout << "Talla L: " << l << std::endl;
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;
                            std::cout << "Talla XS: " << xs << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAYUSCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "XL" && tallaSeleccionada != "L" && tallaSeleccionada != "M" && tallaSeleccionada != "S" && tallaSeleccionada != "XS") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntas camisas desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "XL" && cantidadCompra > xl) || 
                                (tallaSeleccionada == "L" && cantidadCompra > l) || 
                                (tallaSeleccionada == "M" && cantidadCompra > m) ||
                                (tallaSeleccionada == "S" && cantidadCompra > s) ||
                                (tallaSeleccionada == "XS" && cantidadCompra > xs)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes camisas en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "XL") std::cout << xl;
                                if (tallaSeleccionada == "L") std::cout << l;
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                if (tallaSeleccionada == "XS") std::cout << xs;
                                std::cout << " camisas disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "XL") ? xl : (tallaSeleccionada == "L") ? l : (tallaSeleccionada == "M") ? m : (tallaSeleccionada == "S") ? s : xs;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " camisa(s) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 50 * cantidadCompra;
                            break;

                        case 2: // Camisa Azul
                            xl = 1, l = 5, m = 4, s = 5, xs = 5;
                            std::cout << "\nHas seleccionado la Camisa Azul, actualmente disponibles:\n";
                            std::cout << "Talla XL: " << xl << std::endl;
                            std::cout << "Talla L: " << l << std::endl;
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;
                            std::cout << "Talla XS: " << xs << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAYUSCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "XL" && tallaSeleccionada != "L" && tallaSeleccionada != "M" && tallaSeleccionada != "S" && tallaSeleccionada != "XS") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntas camisas desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "XL" && cantidadCompra > xl) || 
                                (tallaSeleccionada == "L" && cantidadCompra > l) || 
                                (tallaSeleccionada == "M" && cantidadCompra > m) ||
                                (tallaSeleccionada == "S" && cantidadCompra > s) ||
                                (tallaSeleccionada == "XS" && cantidadCompra > xs)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes camisas en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "XL") std::cout << xl;
                                if (tallaSeleccionada == "L") std::cout << l;
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                if (tallaSeleccionada == "XS") std::cout << xs;
                                std::cout << " camisas disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "XL") ? xl : (tallaSeleccionada == "L") ? l : (tallaSeleccionada == "M") ? m : (tallaSeleccionada == "S") ? s : xs;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " camisa(s) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 55 * cantidadCompra;
                            break;

                        default:
                            std::cout << "\nOpci�n no v�lida." << std::endl;
                            continue;
                    }
                    std::cout << "\n�Desea comprar otro producto? (s/n) \n$: ";
                    char otraCompra;
                    std::cin >> otraCompra;
                    if (otraCompra != 's' && otraCompra != 'S') {
                        continuarCompra = false;
                    }
                }
                break;
            }

            case 2: { // Camisas casuales
                while (continuarCompra) {
                    std::cout << "\nLas camisas casuales disponibles son: \n1. Camisa a cuadros ---- $40\n2. Camisa de rayas --- $45" << std::endl;
                    std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
                    std::cin >> casual_option;

                    switch (casual_option) {
                        case 1: { // Camisa a cuadros
                            int m = 3, s = 2;
                            std::cout << "\nHas seleccionado la Camisa a Cuadros, actualmente disponibles:\n";
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAYUSCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "M" && tallaSeleccionada != "S") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntas camisas desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "M" && cantidadCompra > m) || (tallaSeleccionada == "S" && cantidadCompra > s)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes camisas en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                std::cout << " camisas disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "M") ? m : s;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " camisa(s) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 40 * cantidadCompra;
                            break;
                        }

                        case 2: { // Camisa de rayas
                            int m = 2, s = 4;
                            std::cout << "\nHas seleccionado la Camisa de Rayas, actualmente disponibles:\n";
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAYUSCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "M" && tallaSeleccionada != "S") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntas camisas desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "M" && cantidadCompra > m) || (tallaSeleccionada == "S" && cantidadCompra > s)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes camisas en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                std::cout << " camisas disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "M") ? m : s;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " camisa(s) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 45 * cantidadCompra;
                            break;
                        }

                        default:
                            std::cout << "\nOpci�n no v�lida." << std::endl;
                            continue;
                    }
                    std::cout << "\n�Desea comprar otro producto? (s/n) \n$: ";
                    char otraCompra;
                    std::cin >> otraCompra;
                    if (otraCompra != 's' && otraCompra != 'S') {
                        continuarCompra = false;
                    }
                }
                break;
            }

            default:
                std::cout << "\nOpci�n no v�lida." << std::endl;
                break;
        }
    }
    return total;
}

double seleccionarPantalones() {
    int option, jeans_option, vestir_option, cantidadCompra;
    double total = 0;
    bool continuarCompra = true;
    std::string tallaSeleccionada;

    while (continuarCompra) {
        std::cout << "Tipos de pantalones disponibles: \n1. Jeans \n2. Pantalones de vestir\n" << std::endl;
        std::cout << "Digita un n�mero para escoger la categor�a que deseas: \n$: ";
        std::cin >> option;

        switch (option) {
            case 1: { // Jeans
                int xl, l , m , s , xs;
                while (continuarCompra) {
                    std::cout << "\nJeans disponibles son: \n1. Jeans azul --- $60\n2. Jeans negro --- $65" << std::endl;
                    std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
                    std::cin >> jeans_option;

                    switch (jeans_option) {
                        case 1: // Jeans azul
                            xl = 1, l = 2, m = 6, s = 4, xs = 2;
                            std::cout << "\nHas seleccionado los Jeans Azul, actualmente disponibles:\n";
                            std::cout << "Talla XL: " << xl << std::endl;
                            std::cout << "Talla L: " << l << std::endl;
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;
                            std::cout << "Talla XS: " << xs << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAY�SCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "XL" && tallaSeleccionada != "L" && tallaSeleccionada != "M" && tallaSeleccionada != "S" && tallaSeleccionada != "XS") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntos pantalones desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "XL" && cantidadCompra > xl) || 
                                (tallaSeleccionada == "L" && cantidadCompra > l) || 
                                (tallaSeleccionada == "M" && cantidadCompra > m) ||
                                (tallaSeleccionada == "S" && cantidadCompra > s) ||
                                (tallaSeleccionada == "XS" && cantidadCompra > xs)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes pantalones en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "XL") std::cout << xl;
                                if (tallaSeleccionada == "L") std::cout << l;
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                if (tallaSeleccionada == "XS") std::cout << xs;
                                std::cout << " pantalones disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "XL") ? xl : (tallaSeleccionada == "L") ? l : (tallaSeleccionada == "M") ? m : (tallaSeleccionada == "S") ? s : xs;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " pantal�n(es) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 60 * cantidadCompra;
                            break;

                        case 2: // Jeans negro
                            xl = 0, l = 1, m = 4, s = 4, xs = 0;
                            std::cout << "\nHas seleccionado los Jeans Negro, actualmente disponibles:\n";
                            std::cout << "Talla XL: " << xl << std::endl;
                            std::cout << "Talla L: " << l << std::endl;
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;
                            std::cout << "Talla XS: " << xs << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAY�SCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "XL" && tallaSeleccionada != "L" && tallaSeleccionada != "M" && tallaSeleccionada != "S" && tallaSeleccionada != "XS") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntos pantalones desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "XL" && cantidadCompra > xl) || 
                                (tallaSeleccionada == "L" && cantidadCompra > l) || 
                                (tallaSeleccionada == "M" && cantidadCompra > m) ||
                                (tallaSeleccionada == "S" && cantidadCompra > s) ||
                                (tallaSeleccionada == "XS" && cantidadCompra > xs)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes pantalones en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "XL") std::cout << xl;
                                if (tallaSeleccionada == "L") std::cout << l;
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                if (tallaSeleccionada == "XS") std::cout << xs;
                                std::cout << " pantalones disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "XL") ? xl : (tallaSeleccionada == "L") ? l : (tallaSeleccionada == "M") ? m : (tallaSeleccionada == "S") ? s : xs;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " pantal�n(es) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 65 * cantidadCompra;
                            break;

                        default:
                            std::cout << "\nOpci�n no v�lida." << std::endl;
                            continue;
                    }
                    std::cout << "\n�Desea comprar otro producto? (s/n) \n$: ";
                    char otraCompra;
                    std::cin >> otraCompra;
                    if (otraCompra != 's' && otraCompra != 'S') {
                        continuarCompra = false;
                    }
                }
                break;
            }

            case 2: { // Pantalones de vestir
                int xl = 0, l = 2, m = 4, s = 4, xs = 2;
                while (continuarCompra) {
                    std::cout << "\nPantalones de vestir disponibles son: \n1. Pantal�n negro --- $70\n2. Pantal�n gris --- $75" << std::endl;
                    std::cout << "Digite el n�mero del producto que desea comprar: \n$: ";
                    std::cin >> vestir_option;

                    switch (vestir_option) {
                        case 1: // Pantal�n negro
                            xl = 0, l = 2, m = 4, s = 4, xs = 2;
                            std::cout << "\nHas seleccionado los Pantalones Negro, actualmente disponibles:\n";
                            std::cout << "Talla XL: " << xl << std::endl;
                            std::cout << "Talla L: " << l << std::endl;
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;
                            std::cout << "Talla XS: " << xs << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAY�SCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "XL" && tallaSeleccionada != "L" && tallaSeleccionada != "M" && tallaSeleccionada != "S" && tallaSeleccionada != "XS") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntos pantalones desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "XL" && cantidadCompra > xl) || 
                                (tallaSeleccionada == "L" && cantidadCompra > l) || 
                                (tallaSeleccionada == "M" && cantidadCompra > m) ||
                                (tallaSeleccionada == "S" && cantidadCompra > s) ||
                                (tallaSeleccionada == "XS" && cantidadCompra > xs)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes pantalones en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "XL") std::cout << xl;
                                if (tallaSeleccionada == "L") std::cout << l;
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                if (tallaSeleccionada == "XS") std::cout << xs;
                                std::cout << " pantalones disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "XL") ? xl : (tallaSeleccionada == "L") ? l : (tallaSeleccionada == "M") ? m : (tallaSeleccionada == "S") ? s : xs;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " pantal�n(es) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 70 * cantidadCompra;
                            break;

                        case 2: // Pantal�n gris
                            xl = 0, l = 1, m = 2, s = 2, xs = 0;
                            std::cout << "\nHas seleccionado los Pantalones Gris, actualmente disponibles:\n";
                            std::cout << "Talla XL: " << xl << std::endl;
                            std::cout << "Talla L: " << l << std::endl;
                            std::cout << "Talla M: " << m << std::endl;
                            std::cout << "Talla S: " << s << std::endl;
                            std::cout << "Talla XS: " << xs << std::endl;

                            std::cout << "\nPor favor ingrese la talla que desea en MAY�SCULA (o 0 para volver al men� principal): \n$: ";
                            std::cin >> tallaSeleccionada;

                            if (tallaSeleccionada == "0") {
                                continue;
                            }

                            // Verificar la disponibilidad de la talla
                            if (tallaSeleccionada != "XL" && tallaSeleccionada != "L" && tallaSeleccionada != "M" && tallaSeleccionada != "S" && tallaSeleccionada != "XS") {
                                std::cout << "\nLo sentimos, la talla seleccionada no est� disponible. \n \n" << std::endl;
                                continue;
                            }

                            std::cout << "�Cu�ntos pantalones desea comprar? \n$: ";
                            std::cin >> cantidadCompra;

                            // Verificar la disponibilidad de la cantidad
                            if ((tallaSeleccionada == "XL" && cantidadCompra > xl) || 
                                (tallaSeleccionada == "L" && cantidadCompra > l) || 
                                (tallaSeleccionada == "M" && cantidadCompra > m) ||
                                (tallaSeleccionada == "S" && cantidadCompra > s) ||
                                (tallaSeleccionada == "XS" && cantidadCompra > xs)) {
                                std::cout << "\nLo sentimos, no tenemos suficientes pantalones en la talla seleccionada. Actualmente solo hay ";
                                if (tallaSeleccionada == "XL") std::cout << xl;
                                if (tallaSeleccionada == "L") std::cout << l;
                                if (tallaSeleccionada == "M") std::cout << m;
                                if (tallaSeleccionada == "S") std::cout << s;
                                if (tallaSeleccionada == "XS") std::cout << xs;
                                std::cout << " pantalones disponibles. �Desea comprarla(s)? (s/n) \n$: ";
                                char confirm;
                                std::cin >> confirm;
                                if (confirm == 's' || confirm == 'S') {
                                    cantidadCompra = (tallaSeleccionada == "XL") ? xl : (tallaSeleccionada == "L") ? l : (tallaSeleccionada == "M") ? m : (tallaSeleccionada == "S") ? s : xs;
                                } else {
                                    continue;
                                }
                            }

                            std::cout << "\nHa seleccionado " << cantidadCompra << " pantal�n(es) en la talla " << tallaSeleccionada << ". " << std::endl;
                            total += 75 * cantidadCompra;
                            break;

                        default:
                            std::cout << "\nOpci�n no v�lida." << std::endl;
                            continue;
                    }
                    std::cout << "\n�Desea comprar otro producto? (s/n) \n$: ";
                    char otraCompra;
                    std::cin >> otraCompra;
                    if (otraCompra != 's' && otraCompra != 'S') {
                        continuarCompra = false;
                    }
                }
                break;
            }

            default:
                std::cout << "\nOpci�n no v�lida." << std::endl;
                break;
        }
    }

    return total;
}
