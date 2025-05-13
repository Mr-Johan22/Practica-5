#include <iostream>
#include <string>
#include "headers/controlador.h"

using namespace std;

int main() {
    Controlador controlador;
    int opcion;

    do {
        cout << "\n--- Menu de la Concesionaria ---\n";
        cout << "1. Registrar vehiculo\n";
        cout << "2. Registrar cliente\n";
        cout << "3. Consultar listados\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore(); // Limpiar el newline del buffer

        if (opcion == 1) {
            string codigo, marca, modelo;
            int anio, kilometraje;
            double precio;

            cout << "Ingrese codigo del vehiculo: "; getline(cin, codigo);
            cout << "Ingrese marca del vehiculo: "; getline(cin, marca);
            cout << "Ingrese modelo del vehiculo: "; getline(cin, modelo);
            cout << "Ingrese anio del vehiculo: "; cin >> anio;
            cout << "Ingrese kilometraje del vehiculo: "; cin >> kilometraje;
            cout << "Ingrese precio del vehiculo: "; cin >> precio;
            cin.ignore();

            Vehiculo nuevoVehiculo(codigo, marca, modelo, anio, kilometraje, precio);
            controlador.registrarVehiculo(nuevoVehiculo);
            cout << "Vehiculo registrado con exito.\n";

        } else if (opcion == 2) {
            string dni, nombre, telefono, direccion;

            cout << "Ingrese DNI del cliente: "; getline(cin, dni);
            cout << "Ingrese nombre del cliente: "; getline(cin, nombre);
            cout << "Ingrese telefono del cliente: "; getline(cin, telefono);
            cout << "Ingrese direccion del cliente: "; getline(cin, direccion);

            Cliente nuevoCliente(dni, nombre, telefono, direccion);
            controlador.registrarCliente(nuevoCliente);
            cout << "Cliente registrado con exito.\n";

        } else if (opcion == 3) {
            int consultaOpcion;
            cout << "\n--- Que desea consultar? ---\n";
            cout << "1. Listar todos los vehiculos\n";
            cout << "2. Listar todos los clientes\n";
            cout << "Seleccione una opcion: ";
            cin >> consultaOpcion;
            cin.ignore();

            if (consultaOpcion == 1) {
                controlador.listarVehiculos();
            } else if (consultaOpcion == 2) {
                controlador.listarClientes();
            } else {
                cout << "Opcion de consulta invalida.\n";
            }

        } else if (opcion == 4) {
            cout << "Saliendo del sistema. Hasta luego!\n";
        } else {
            cout << "Opcion invalida. Por favor, intente de nuevo.\n";
        }

    } while (opcion != 4);

    return 0;
}
