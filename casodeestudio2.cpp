#include <iostream>
#include <string>

using namespace std;
//Struct para ingresar el usuarip
struct Usuario {
    string nombres;
    string apellidos;
    string identificacion;
    string correo;
    string telefono;
    string direccion;
};
//Funcion de los zapatos
double seleccionarZapatos() {
    int option, zap_option;
    double total = 0.0;
//Desgloce de categorias
    cout << "Categorias de zapatos disponibles: " << endl;
    cout << "1. Zapatos deportivos \n2. Zapatos de dama  \n3. Zapatos elegantes" << endl;
    cout << "Digita un numero para escoger la categoria que deseas: ";
    cin >> option;
    system("cls");

    switch (option) {
    case 1:
        cout << "Los tenis disponibles por el momento son: \n1. Converse \n2. Adidas\n3. Nike \n4. Skechers" << endl;
        cin >> zap_option;
        system("cls");
            switch (zap_option) {
            case 1:
                cout << "Los converse disponibles son: \n1. Custom Run Star Hike By You --- $140\n2. Chuck Taylor All Stars Washed Canvas --- $80\n3. Chuck Taylor All Stars (Clasicas) --- $75" << endl;
                int converse_option;
                cin >> converse_option;
                if (converse_option == 1) total += 140;
                else if (converse_option == 2) total += 80;
                else if (converse_option == 3) total += 75;
                break;
            case 2:
                cout << "Los adidas disponibles son: \n1. Bravada 2.0 Platform Shoes --- $75\n2. Gazelle Indoor Shoes --- $130\n3. Cloudfoam Pure Shoes --- $80\n4. UBounce DNA Shoes --- $100" << endl;
                int adidas_option;
                cin >> adidas_option;
                if (adidas_option == 1) total += 75;
                else if (adidas_option == 2) total += 130;
                else if (adidas_option == 3) total += 80;
                else if (adidas_option == 4) total += 100;
                break;
            case 3:
                cout << "Los Nike disponibles son: \n1. Nike Air Force 1'07 --- $130\n2. Nike Air Force 1 LE --- $120\n3. Nike Air Force 1'07 Next Nature --- $130\n4. Nike Pegasus Trail 5 --- $150" << endl;
                int nike_option;
                cin >> nike_option;
                if (nike_option == 1) total += 130;
                else if (nike_option == 2) total += 120;
                else if (nike_option == 3) total += 130;
                else if (nike_option == 4) total += 150;
                break;
            case 4:
                cout << "Los Skechers disponibles son: \n1. Skechers Slip-ins: GO RUN Lite - Anthem --- $100\n2. GO RUN Consistent 2.0 - Americana --- $90\n3. Skechers Slip-ins: GO WALK 7 --- $110\n4. Skech-Air Ventura - Vhalor --- $90" << endl;
                int skechers_option;
                cin >> skechers_option;
                if (skechers_option == 1) total += 100;
                else if (skechers_option == 2) total += 90;
                else if (skechers_option == 3) total += 110;
                else if (skechers_option == 4) total += 90;
                break;
            default:
                cout << "Opcion de Zapatos deportivos no incluida, por favor volver a intentar" << endl;
                break;
            }
        break;

    case 2:
        cout << "Los zapatos de dama disponibles son: \n1. Tacones \n2. Sandalias \n3. Flats \n4. Botines" << endl;
        cin >> zap_option;
        system("cls");
            switch (zap_option) {
            case 1:
                cout << "Tacones disponibles son: \n1. Tacon Rojo --- $120\n2. Tacon Negro --- $100" << endl;
                int tacones_option;
                cin >> tacones_option;
                if (tacones_option == 1) total += 120;
                else if (tacones_option == 2) total += 100;
                break;
            case 2:
                cout << "Sandalias disponibles son: \n1. Sandalia Beige --- $50\n2. Sandalia Blanca --- $60" << endl;
                int sandalias_option;
                cin >> sandalias_option;
                if (sandalias_option == 1) total += 50;
                else if (sandalias_option == 2) total += 60;
                break;
            case 3:
                cout << "Flats disponibles son: \n1. Flats Azul --- $30\n2. Flats Rojo --- $35" << endl;
                int flats_option;
                cin >> flats_option;
                if (flats_option == 1) total += 30;
                else if (flats_option == 2) total += 35;
                break;
            case 4:
                cout << "Botines disponibles son: \n1. Botines Negros --- $150\n2. Botines Marron --- $140" << endl;
                int botines_option;
                cin >> botines_option;
                if (botines_option == 1) total += 150;
                else if (botines_option == 2) total += 140;
                break;
            default:
                cout << "Opcion de Zapatos de dama no incluida, por favor volver a intentar" << endl;
                break;
            }
        break;

    case 3:
        cout << "Los zapatos elegantes disponibles son: \n1. Oxford \n2. Brogue \n3. Derby" << endl;
        cin >> zap_option;
        system("cls");
            switch (zap_option) {
            case 1:
                cout << "Oxford disponibles son: \n1. Oxford Negro --- $200\n2. Oxford Marron --- $180" << endl;
                int oxford_option;
                cin >> oxford_option;
                if (oxford_option == 1) total += 200;
                else if (oxford_option == 2) total += 180;
                break;
            case 2:
                cout << "Brogue disponibles son: \n1. Brogue Marron --- $170\n2. Brogue Negro --- $160" << endl;
                int brogue_option;
                cin >> brogue_option;
                if (brogue_option == 1) total += 170;
                else if (brogue_option == 2) total += 160;
                break;
            case 3:
                cout << "Derby disponibles son: \n1. Derby Negro --- $150\n2. Derby Marron --- $140" << endl;
                int derby_option;
                cin >> derby_option;
                if (derby_option == 1) total += 150;
                else if (derby_option == 2) total += 140;
                break;
            default:
                cout << "Opcion de Zapatos elegantes no incluida, por favor volver a intentar" << endl;
                break;
            }
    break;

    default:
        cout << "Opcion no incluida, por favor volver a intentar" << endl;
        break;
    }

    return total;
}
//funcion de camisas
double seleccionarCamisas() {
    int option;
    double total = 0.0;

    cout << "Tipos de camisas disponibles: \n1. Camisas formales \n2. Camisas casuales \n3. Camisetas" << endl;
    cout << "Digita un numero para escoger la categoria que deseas: ";
    cin >> option;
    system("cls");

    switch (option) {
    case 1:
        cout << "Camisas formales disponibles son: \n1. Camisa blanca --- $50\n2. Camisa azul --- $55" << endl;
        int formales_option;
        cin >> formales_option;
        if (formales_option == 1) total += 50;
        else if (formales_option == 2) total += 55;
        break;
    case 2:
        cout << "Camisas casuales disponibles son: \n1. Camisa de cuadros --- $40\n2. Camisa de rayas --- $45" << endl;
        int casuales_option;
        cin >> casuales_option;
        if (casuales_option == 1) total += 40;
        else if (casuales_option == 2) total += 45;
        break;
    case 3:
        cout << "Camisetas disponibles son: \n1. Camiseta negra --- $20\n2. Camiseta blanca --- $20\n3. Camiseta con estampado --- $25" << endl;
        int camisetas_option;
        cin >> camisetas_option;
        if (camisetas_option == 1) total += 20;
        else if (camisetas_option == 2) total += 20;
        else if (camisetas_option == 3) total += 25;
        break;
    default:
        cout << "Opcion de camisas no incluida, por favor volver a intentar" << endl;
        break;
    }

    return total;
}
//funcion de pantalones
double seleccionarPantalones() {
    int option;
    double total = 0.0;

    cout << "Tipos de pantalones disponibles: \n1. Jeans \n2. Pantalones de vestir \n3. Pantalones cortos" << endl;
    cout << "Digita un numero para escoger la categoria que deseas: ";
    cin >> option;
    system("cls");

    switch (option) {
    case 1:
        cout << "Jeans disponibles son: \n1. Jeans azul --- $60\n2. Jeans negro --- $65" << endl;
        int jeans_option;
        cin >> jeans_option;
        if (jeans_option == 1) total += 60;
        else if (jeans_option == 2) total += 65;
        break;
    case 2:
        cout << "Pantalones de vestir disponibles son: \n1. Pantalon negro --- $70\n2. Pantalon gris --- $75" << endl;
        int vestir_option;
        cin >> vestir_option;
        if (vestir_option == 1) total += 70;
        else if (vestir_option == 2) total += 75;
        break;
    case 3:
        cout << "Pantalones cortos disponibles son: \n1. Short deportivo --- $30\n2. Bermuda --- $35" << endl;
        int cortos_option;
        cin >> cortos_option;
        if (cortos_option == 1) total += 30;
        else if (cortos_option == 2) total += 35;
        break;
    default:
        cout << "Opcion de pantalones no incluida, por favor volver a intentar" << endl;
        break;
    }

    return total;
}

int main() { //falta agregar el fichero
    Usuario usuario;
    //lectura de los datos del usuario 
    cout << "Bienvenido al Sistema de compras de la tienda ciclo\n\n";
    cout << "Registrate para proceder a tu compra:\n";
    cout << "Nombres: "; getline(cin, usuario.nombres);
    cout << "Apellidos: "; getline(cin, usuario.apellidos);
    cout << "Identificacion: "; getline(cin, usuario.identificacion);
    cout << "Correo electronico: "; getline(cin, usuario.correo);
    cout << "Numero telefonico: "; getline(cin, usuario.telefono);
    cout << "Direccion: "; getline(cin, usuario.direccion);
    
    system("cls");

    cout << "\nHola " << usuario.nombres << ", gracias por preferirnos.\n\n";
    
    string categorias[] = {"Gorras", "Camisas", "Joyería", "Pantalones", "Zapatos"};
    int numCategorias = 5;
    
    double totalCompra = 0.0;
    bool seguirComprando = true;
    while (seguirComprando) {
        cout << "En ciclo, dividimos nuestras prendas en 5 categorías:\n";
        for (int i = 0; i < numCategorias; ++i) {
            cout << i + 1 << ". " << categorias[i] << endl;
        }
        cout << "Por favor, digita el numero de la categoria que desees comprar para desplegar el catalogo: ";
        int categoriaSeleccionada;
        cin >> categoriaSeleccionada;
        cin.ignore();
        system("cls");
        //cat invalida si el numero no está en el rango
        if (categoriaSeleccionada < 1 || categoriaSeleccionada > numCategorias) {
            cout << "Categoria invalida. Intentalo de nuevo.\n";
            system("cls");
            continue;
        }

        if (categoriaSeleccionada == 2) {
            totalCompra += seleccionarCamisas();
        } else if (categoriaSeleccionada == 4) {
            totalCompra += seleccionarPantalones();
        } else if (categoriaSeleccionada == 5) {
            totalCompra += seleccionarZapatos();
        } else {
            cout << "\nCategoria de " << categorias[categoriaSeleccionada - 1] << " no tiene productos detallados en este ejemplo.\n";
        }
        
        system("cls");
        cout << "Deseas escoger otro? (1. Si / 2. No): ";
        int opcion;
        cin >> opcion;
        cin.ignore();
        
        if (opcion == 2) {
            seguirComprando = false;
        }
        system("cls");
    }

    system("cls");

    cout << "El total de tu compra es: $" << totalCompra << endl;

    //agregar las formas de pago a función
    cout << "Selecciona el metodo de pago:\n";
    cout << "1. Tarjeta de credito\n";
    cout << "2. PayPal\n";
    cout << "3. Transferencia bancaria\n";
    cout << "Digita el numero del metodo de pago: ";
    int metodoPago;
    cin >> metodoPago;
    cin.ignore();
    system("cls");
    string codigoPago;
    cout << "Introduce el codigo del pago: ";
    getline(cin, codigoPago);
    
    system("cls");
    cout << "Muchas gracias por tu compra. Deseas dejar una resenia: (1. Si / 2. No): ";
    int dejarResena;
    cin >> dejarResena;
    cin.ignore();
    
    if (dejarResena == 1) {
        string resena;
        cout << "Por favor, deja tu resenia:";
        getline(cin, resena);
        cout << "Gracias por tu resenia.\n";
    }
    system("cls");
    cout << "Gracias por usar el sistema de compras de la tienda ciclo. Hasta luego\n";
    
    return 0;
}
