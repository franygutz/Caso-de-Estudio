/*Elaborado por: Nicolas Laguna, Franya Gutierrez, Valeria Grijalva y Carlos Briones.
Empezado el: 10 de Mayo del 2024
Finalizado el: 27 de Junio del 2024
Version: 6.0*/

#include <iostream> //libreria estandar de c++
#include <string> //para trabajar con strings
#include <conio.h> // para el uso de getch
#include <windows.h> //para trabajar con colores
#include <fstream> //para abrir archivos
#include <locale.h> //para incluir el setlocale
#include "items.h" //incluir a la cabecera donde estan todas las funciones


using namespace std;

struct pago { //struct de pago que funciona para los metodos de pago 
    int moneda; 
    int metodoPago;
    string codigoPago;
} modo;

void seleccionarMetodoPago() {
    while (true) {
        // Preguntar la moneda
        cout << "Selecciona la moneda en la que deseas pagar:\n";
        cout << "1. Córdobas\n";
        cout << "2. Dólares\n";
        cout << "3. Cancelar compra\n";
        cout << "Digita el número de la moneda: ";

        cin >> modo.moneda; //lectura de la moneda
        cin.ignore(); // Limpiar el buffer 
        system("cls"); // Limpiar la pantalla

        if (modo.moneda == 3) { //si la opcion de la moneda es igual a 3, se cancela la compra
            cout << "Compra cancelada.\n";
            break;
        }

        // Mostrar opciones de pago
        cout << "Selecciona el método de pago:\n";
        cout << "1. Transferencia bancaria\n";
        cout << "2. PayPal\n";
        cout << "3. Volver a seleccionar la moneda\n";
        cout << "Digita el número del método de pago: ";

        cin >> modo.metodoPago;
        cin.ignore(); // Limpiar el buffer del cin
        system("cls"); // Limpiar la pantalla

        if (modo.metodoPago == 3) { //si e metodo de pago es igual a 3, se vuelve a presentar el menu
            continue;
        }


        switch (modo.moneda) {
            case 1:
                cout << "Pago en Córdobas\n";
                switch (modo.metodoPago) {
                    case 1:
                        // Transferencia bancaria
                        //aca se llaman a lasconstantes declaradasd en la cabecera
                        cout << "Los números del depósito del negocio en Córdobas son:\n";
                        cout << "BAC: " << BAC_CORDOBAS << "\n";
                        cout << "BAMPRO: " << BAMPRO_CORDOBAS << "\n";
                        cout << "AMEX: " << AMEX_CORDOBAS << "\n";
                        cout << "Introduce los datos del depósito realizado: ";
                        getline(cin, modo.codigoPago);
                        cout << "Datos del depósito ingresados: " << modo.codigoPago << endl;
                        break;
                    case 2:
                        // PayPal
                        cout << "Los dígitos del PayPal del negocio en Córdobas son: " << PAYPAL_CORDOBAS << "\n";
                        cout << "Introduce los datos del pago realizado: ";
                        getline(cin, modo.codigoPago);
                        cout << "Datos del pago por PayPal ingresados: " << modo.codigoPago << endl;
                        break;
                    default:
                        cout << "Método de pago no válido.\n";
                        break;
                }
                break;
            case 2:
                cout << "Pago en Dólares\n";
                switch (modo.metodoPago) {
                    case 1:
                        // Transferencia bancaria
                        cout << "Los números del depósito del negocio en Dólares son:\n";
                        cout << "BAC: " << BAC_DOLARES << "\n";
                        cout << "BAMPRO: " << BAMPRO_DOLARES << "\n";
                        cout << "AMEX: " << AMEX_DOLARES << "\n";
                        cout << "Introduce los datos del depósito realizado: ";
                        getline(cin, modo.codigoPago);
                        cout << "Datos del depósito ingresados: " << modo.codigoPago << endl;
                        break;
                    case 2:
                        // PayPal
                        cout << "Los dígitos del PayPal del negocio en Dólares son: " << PAYPAL_DOLARES << "\n";
                        cout << "Introduce los datos del pago realizado: ";
                        getline(cin, modo.codigoPago);
                        cout << "Datos del pago por PayPal ingresados: " << modo.codigoPago << endl;
                        break;
                    default:
                        cout << "Método de pago no válido.\n";
                        break;
                }
                break;
            default:
                cout << "Moneda no válida.\n";
                break;
        }
        cout << "¿Deseas realizar otra operación? (S/N): ";
        char otraOperacion;
        cin >> otraOperacion;
        cin.ignore(); // Limpiar el buffer del cin
        if (toupper(otraOperacion) != 'S') {
            break;
        }
        system("cls"); // Limpiar la pantalla al final
    }
}

//Struct para ingresar el usuarip
struct Usuario {
    char nombre[100];
    char apellido[100];
    char id[17];
    char email[100];
    char telefono[9];
    char address[300];
}user;

//procedimiento para anadir color
void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //comando predeterminado
    SetConsoleTextAttribute(hConsole, color);//comando predeterminado
}

//procedimiento para volver al color normal
void resetColor() {
    setColor(7); //7 pq es el color blanco oridinario de la consola
}

// procedimiento para leer una cadena limitada por longitud m�xima
void leerCadena(char* cadena, int longitudMaxima) {
    int i = 0;
    char ch; // almacena el car�cter ingresado por el usuario

    while (true) { // Bucle infinito para permitir la entrada continua
        ch = _getch(); // captura el car�cter del teclado sin mostrarlo en pantalla

        if (ch == '\r') { // si se presiona la tecla Enter (retorno de carro), termina la entrada
            break;
        } else if (ch == '\b') { // si se presiona la tecla Backspace
            if (i > 0) { // verifica que haya al menos un car�cter para borrar
                std:: cout << "\b \b"; // borra el �ltimo car�cter mostrado en la consola
                i--; // decrementa el �ndice para retroceder en la cadena
            }
        } else if (isprint(ch)) { // si es un car�cter imprimible
            if (i < longitudMaxima - 1) { // verifica que a�n se puedan ingresar m�s caracteres
                std::cout << ch; // muestra el car�cter en pantalla
                cadena[i] = ch; // almacena el car�cter en el arreglo cadena en la posici�n i
                i++; // incrementa el �ndice para avanzar en la cadena
            }
        }
    }

    cadena[i] = '\0'; // coloca el car�cter nulo '\0' al final de la cadena para marcar su fin
    std:: cout << std:: endl; // salta a la siguiente l�nea en la consola despu�s de la entrada
}

// Funci�n para leer un n�mero de tel�fono
void leerTelefono(char* telefono, int longitudMaxima) {
    int i = 0;
    char ch; // almacena el car�cter ingresado por el usuario

    while (true) { // Bucle infinito para permitir la entrada continua
        ch = _getch(); // captura el car�cter del teclado sin mostrarlo en pantalla

        if (ch == '\r') { // si se presiona la tecla Enter (retorno de carro), termina la entrada
            break;
        } else if (ch == '\b') { // si se presiona la tecla Backspace
            if (i > 0) { // verifica que haya al menos un car�cter para borrar
                std::cout << "\b \b"; // borra el �ltimo car�cter mostrado en la consola
                i--; // decrementa el �ndice para retroceder en la cadena
            }
        } else if (isdigit(ch) && i < longitudMaxima - 1) { // si es un d�gito num�rico
            std::cout << ch; // muestra el car�cter en pantalla
            telefono[i] = ch; // almacena el car�cter en el arreglo telefono en la posici�n i
            i++; // incrementa el �ndice para avanzar en la cadena
        }
    }

    std::cout << std::endl; // salta a la siguiente l�nea en la consola despu�s de la entrada
}

//Funcion de ingreso
void leerIngreso(){
    std::cout << "Por favor ingresa tus datos personales" << endl;

    setColor(10);
    std::cout << "Nombres: " << std::endl;
    resetColor();
    setColor(14);
    std::cout << "$: ";
    resetColor();
    leerCadena(user.nombre, 100); //permite que no permita ingresar mas caracteres de 100

    setColor(10);
    std::cout << "Apellidos: " << std::endl;
    resetColor();
    setColor(14);
    std::cout << "$: ";
    resetColor();
    leerCadena(user.apellido, 100); //permite que no permita ingresar mas caracteres de 100

    setColor(10);
    std::cout << "Cédula de identidad: " << std::endl;
    resetColor();
    setColor(14);
    std::cout << "$: ";
    resetColor();
    leerCadena(user.id, 17); //permite que no permita ingresar mas caracteres de 17

    setColor(10);
    std::cout << "Correo electrónico: " << std::endl;
    resetColor();
    setColor(14);
    std::cout << "$: ";
    resetColor();
    leerCadena(user.email, 100); //permite que no permita ingresar mas caracteres de 100

    setColor(10);
    std::cout << "Teléfono celular: " << std::endl;
    resetColor();
    setColor(14);
    std::cout << "$: ";
    resetColor();
    leerTelefono(user.telefono, 9); // Usar leerTelefono para el n�mero de tel�fono

    setColor(10);
    std::cout << "Dirección: " << std::endl;
    resetColor();
    setColor(14);
    std::cout << "$: ";
    resetColor();
    leerCadena(user.address, 300);
}

// Función para escribir en el archivo
void escribirRegistro() {
    ofstream archivo("DatosDeCompras.txt", ios::app); // Abre el archivo en modo append
    archivo << "Nombre del cliente: " << user.nombre << " " << user.apellido << endl; //imprime nombres y apellidos
    archivo << "Método de pago: " << modo.metodoPago << endl; //imprime el metodo de pago seleccionado por el usuario
    archivo << "Moneda: " << modo.moneda << endl; //imprime la moneda seleccionada por el usuario
    archivo << "Código de pago: " << modo.codigoPago << endl; //imprime el codigo de pago ingresado por el usuario
    archivo << "Dirección: " << user.address << endl; //imprime la direccion del usuario
    archivo << "Email: " << user.email << endl; //imprime el email del usuario
    archivo << "Número de teléfono: " << user.telefono << endl; //imprime el cel del usuario
    archivo << "----------------------------------------\n"; // Separador entre registros
    archivo.close(); // Cierra el archivo cuando terminas de escribir
}


int main() { 
    std:: cout << "Bienvenid@ al Sistema de compras de Ciclo";
    
    leerIngreso();
    
    cout << "\nHola " << user.nombre << " "<< user.apellido << ", gracias por preferirnos.\n\n";
    
    string categorias[] = {"Camisas", "Pantalones", "Zapatos"}; //se establece un string con las categorias
    int numCategorias = 3;
    
    double totalCompra = 0.0;
    bool seguirComprando = true;
    while (seguirComprando) {
        cout << "En ciclo, dividimos nuestras prendas en 3 categorías:\n";
        for (int i = 0; i < numCategorias; ++i) {
            cout << i + 1 << ". " << categorias[i] << endl;
        }
        cout << "Por favor, digita el numero de la categoria que desees comprar para desplegar el catalogo: ";
        int categoriaSeleccionada;
        cin >> categoriaSeleccionada;
        cin.ignore();
        system("cls");
        
        if (categoriaSeleccionada < 1 || categoriaSeleccionada > numCategorias) { //si la categoria no esta en el rango
            cout << "Categoria invalida. Intentalo de nuevo.\n";
            system("cls");
            continue;
        }

        //dependiendo a que categoria se llamo
        if (categoriaSeleccionada == 1) {
            totalCompra += seleccionarCamisas();
        } else if (categoriaSeleccionada == 2) {
            totalCompra += seleccionarPantalones();
        } else if (categoriaSeleccionada == 3) {
            totalCompra += seleccionarZapatos();
        } else {
            cout << "\nCategoria de " << categorias[categoriaSeleccionada - 1] << " no tiene productos detallados en este ejemplo.\n";
        }
        

        //si el usuario desea escoger otro del menu
        system("cls");
        cout << "Deseas escoger otro? (1. Si / 2. No): ";
        int opcion;
        cin >> opcion;
        cin.ignore();
        
        //si la opcion es la 2, entonces deja de seguir comprando
        if (opcion == 2) {
            seguirComprando = false;
        }
        system("cls");
    }

    system("cls");

    cordo = equivalencia * totalCompra; //total de la compra en cordobas
    cout << "El total de tu compra en dólares es: $" << totalCompra << endl;
    cout << "El total de tu compra en códobas es: C$" << cordo << endl;
    seleccionarMetodoPago();


    system("cls");
    cout << "Muchas gracias por tu compra. Deseas dejar una resenia: (1. Si / 2. No): ";
    int dejarResena;
    cin >> dejarResena;
    cin.ignore();
    
    if (dejarResena == 1) {
        string resena;
        cout << "Por favor, deja tu resenia:";
        getline(cin, resena);
        cout << "Gracias por tu reseña.\n";
    }
    system("cls");
    cout << "Gracias por usar el sistema de compras de la tienda ciclo. \n\nCuando verifiquemos que el pago ha sido realizado, se te notificará via: \nCorreo: ";
    cout << user.email << "\nWhatsApp: " << user.telefono << "\nHasta luego.\n";
    
    escribirRegistro();
    return 0;
}
