#include <iostream>

using namespace std;

int main()
{
    // se declaran las variables
    const float litro_de_gasolina_x_trece = 13;
    const float precio_por_litro = 14.50;
    const int precio_de_gasolina_x_litro = 14.50;
    const float km_x_hora = 75;
    // se hace una lista de los km
    int lista[] = {0, 467, 1614, 931, 549};
    // se hace una lista de los nombres de los lugares
    string lista2[] = {" ", "CDMX-Oaxaca Centro", "CDMX-Cancún", "CDMX-Monterrey", "CDMX-Guadalajara"};

    int tamano_de_lista = sizeof(lista) / sizeof(lista[0]);
    int tamano_de_lista2 = sizeof(lista2) / sizeof(lista2[0]);

    int opcion = 0;
    // le pedimos un destino al usuario
    cout << "Seleccione una opcion para saber los datos del destino seleccionado: " << endl;
    cout << "1.CDMX-Oaxaca Centro" << endl;
    cout << "2.CDMX-Cancún" << endl;
    cout << "3.CDMX-Monterrey" << endl;
    cout << "4.CDMX-Guadalajara" << endl;
    cin >> opcion;

    // Se inicializan las variables 
    float litros_gasolina_x_ruta, gasto_total_gasolina, tiempo_recorrido_en_horas, tiempo_recorrido_en_minutos;

    // Se evalua las opciones con un switch
    switch (opcion) {
        case 1:
            litros_gasolina_x_ruta = lista[1] / litro_de_gasolina_x_trece;
            cout << "Se requieren " << litros_gasolina_x_ruta * 30 << " litros de gasolina " << endl;
            gasto_total_gasolina = litros_gasolina_x_ruta * precio_por_litro;
            cout << "Lo cual el costo toal de la gasolina seria " << gasto_total_gasolina * 30 << " pesos" << endl;
            tiempo_recorrido_en_horas = lista[1] / km_x_hora;
            cout << "El tiempo recorrido en horas es de " << tiempo_recorrido_en_horas * 30 << endl;
            tiempo_recorrido_en_minutos = tiempo_recorrido_en_horas * 60;
            cout << "Mientras que el recorrido total en minutos es de " << tiempo_recorrido_en_minutos * 30 << endl;
            cout << "-------------------------------------------------" << endl;
            break;
        case 2:
            litros_gasolina_x_ruta = lista[2] / litro_de_gasolina_x_trece;
            cout << "Se requieren " << litros_gasolina_x_ruta * 30 << " litros de gasolina " << endl;
            gasto_total_gasolina = litros_gasolina_x_ruta * precio_por_litro;
            cout << "Lo cual el costo toal de la gasolina seria " << gasto_total_gasolina * 30 << " pesos" << endl;
            tiempo_recorrido_en_horas = lista[2] / km_x_hora;
            cout << "El tiempo recorrido en horas es de " << tiempo_recorrido_en_horas * 30 << endl;
            tiempo_recorrido_en_minutos = tiempo_recorrido_en_horas * 60;
            cout << "Mientras que el recorrido total en minutos es de " << tiempo_recorrido_en_minutos * 30 << endl;
            cout << "-------------------------------------------------" << endl;
            break;
        case 3:
            litros_gasolina_x_ruta = lista[3] / litro_de_gasolina_x_trece;
            cout << "Se requieren " << litros_gasolina_x_ruta * 30 << " litros de gasolina " << endl;
            gasto_total_gasolina = litros_gasolina_x_ruta * precio_por_litro;
            cout << "Lo cual el costo toal de la gasolina seria " << gasto_total_gasolina * 30 << " pesos" << endl;
            tiempo_recorrido_en_horas = lista[3] / km_x_hora;
            cout << "El tiempo recorrido en horas es de " << tiempo_recorrido_en_horas * 30 << endl;
            tiempo_recorrido_en_minutos = tiempo_recorrido_en_horas * 60;
            cout << "Mientras que el recorrido total en minutos es de " << tiempo_recorrido_en_minutos * 30 << endl;
            cout << "-------------------------------------------------" << endl;
        case 4:
            litros_gasolina_x_ruta = lista[4] / litro_de_gasolina_x_trece;
            cout << "Se requieren " << litros_gasolina_x_ruta * 30 << " litros de gasolina " << endl;
            gasto_total_gasolina = litros_gasolina_x_ruta * precio_por_litro;
            cout << "Lo cual el costo toal de la gasolina seria " << gasto_total_gasolina * 30 << " pesos" << endl;
            tiempo_recorrido_en_horas = lista[4] / km_x_hora;
            cout << "El tiempo recorrido en horas es de " << tiempo_recorrido_en_horas * 30 << endl;
            tiempo_recorrido_en_minutos = tiempo_recorrido_en_horas * 60;
            cout << "Mientras que el recorrido total en minutos es de " << tiempo_recorrido_en_minutos * 30 << endl;
            cout << "-------------------------------------------------" << endl;
        default:
            break;
    }
}