#include <iostream>

using namespace std;

int main() {
    // se declaran las variables
    const float litro_de_gasolina_x_trece = 13;
    const float precio_por_litro = 14.50;
    const int precio_de_gasolina_x_litro = 14.50;
    const float km_x_hora = 75;
    // se hace una lista de los km
    int lista[] = { 467, 1614, 931, 549 };
    // se hace una lista de los nombres de los lugares
    string lista2[] = { "CDMX-Oaxaca Centro", "CDMX-Cancún", "CDMX-Monterrey", "CDMX-Guadalajara" };


    int tamano_de_lista = sizeof(lista) / sizeof(lista[0]);
    int tamano_de_lista2 = sizeof(lista2) / sizeof(lista2[0]);

    int opcion;
    cout << "Seleccione una opcion: "; cin >> opcion;
    cout << opcion << endl;
    return 0; 
    // se crea un ciclo de iteracion por cada elemento de la lista que contiene los km
    for (int i = 0; i < tamano_de_lista; i++)
    {
        // para poder imprimir los datos se hace una sola iteracion
        for (int o = 0; o < 1; o++)
        {
            cout << "Los datos para " << lista2[o] << " al mes son: " << endl;
        }
        float litros_gasolina_x_ruta = lista[i] / litro_de_gasolina_x_trece;
        cout << "Se requieren " << litros_gasolina_x_ruta * 30 << " litros de gasolina " << endl;
        float gasto_total_gasolina = litros_gasolina_x_ruta * precio_por_litro;
        cout << "Lo cual el costo toal de la gasolina seria " << gasto_total_gasolina *30 << " pesos" << endl;
        float tiempo_recorrido_en_horas = lista[i] / km_x_hora;
        cout << "El tiempo recorrido en horas es de " << tiempo_recorrido_en_horas *30 << endl;
        float tiempo_recorrido_en_minutos = tiempo_recorrido_en_horas * 60;
        cout << "Mientras que el recorrido total en minutos es de " << tiempo_recorrido_en_minutos *30 << endl;
        cout << "-------------------------------------------------" << endl;
    }
}