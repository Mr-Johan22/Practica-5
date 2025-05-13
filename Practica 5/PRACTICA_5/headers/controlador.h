#ifndef CONTROLADOR_H
#define CONTROLADOR_H
#include <vector>
#include <string>
#include "vehiculo.h"
#include "cliente.h"

class Controlador {
private:
    std::vector<Vehiculo> vehiculos;
    std::vector<Cliente> clientes;

public:
    void registrarVehiculo(const Vehiculo& vehiculo);
    void registrarCliente(const Cliente& cliente);

    void listarVehiculos() const;
    void listarClientes() const;
};

#endif // CONTROLADOR_H
