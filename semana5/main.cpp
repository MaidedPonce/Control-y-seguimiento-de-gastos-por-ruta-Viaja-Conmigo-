#include <iostream>

using namespace std;

int operaciones(int elemento)
{
    // se declaran las variables
    const float litro_de_gasolina_x_trece = 13;
    const float precio_por_litro = 14.50;
    const int precio_de_gasolina_x_litro = 14.50;
    const float km_x_hora = 75;

    float litros_gasolina_x_ruta = elemento / litro_de_gasolina_x_trece;
    cout << "Se requieren " << litros_gasolina_x_ruta * 30 << " litros de gasolina " << endl;
    float gasto_total_gasolina = litros_gasolina_x_ruta * precio_por_litro;
    cout << "Lo cual el costo toal de la gasolina seria " << gasto_total_gasolina * 30 << " pesos" << endl;
    float tiempo_recorrido_en_horas = elemento / km_x_hora;
    cout << "El tiempo recorrido en horas es de " << tiempo_recorrido_en_horas * 30 << endl;
    float tiempo_recorrido_en_minutos = tiempo_recorrido_en_horas * 60;
    cout << "Mientras que el recorrido total en minutos es de " << tiempo_recorrido_en_minutos * 30 << endl;
    cout << "-------------------------------------------------" << endl;
    return litros_gasolina_x_ruta;
}

int seleccionarOpcion(int opcion)
{
    // se hace una lista de los km
    int lista[] = {0, 467, 1614, 931, 549};
    // se hace una lista de los nombres de los lugares
    string lista2[] = {" ", "CDMX-Oaxaca Centro", "CDMX-Cancún", "CDMX-Monterrey", "CDMX-Guadalajara"};

    int tamano_de_lista = sizeof(lista) / sizeof(lista[0]);
    int tamano_de_lista2 = sizeof(lista2) / sizeof(lista2[0]);

    if (opcion <= 4 && opcion != 0)
    {
        for (int i = 0; i <= tamano_de_lista; i++)
            if (i == opcion)
            {
                for (int o = 0; o < tamano_de_lista2; o++)
                {
                    if (o == opcion)
                    {
                        // imprimir el destino
                        cout << "Los datos para " << lista2[o] << " al mes son: " << endl;
                    }
                }
                // imprimir los datos del destino
                return operaciones(lista[i]);
            }
    }
    else
    {
        // si no se valida, entonces imprimir que el destino no existe
        cout << "El destino elegido no existe." << endl;
        return 0;
    }
    return opcion;
}

int main()
{
    int opcion = 0;

    // le pedimos un destino al usuario
    cout << "Seleccione una opcion para saber los datos del destino seleccionado: " << endl;
    cout << "1.CDMX-Oaxaca Centro" << endl;
    cout << "2.CDMX-Cancún" << endl;
    cout << "3.CDMX-Monterrey" << endl;
    cout << "4.CDMX-Guadalajara" << endl;
    cin >> opcion;

    seleccionarOpcion(opcion);
}