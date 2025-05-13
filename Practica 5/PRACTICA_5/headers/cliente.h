#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <iostream>

class Cliente {
private:
    std::string dni;
    std::string nombre;
    std::string telefono;
    std::string direccion;

public:
    Cliente(const std::string& dni, const std::string& nombre, const std::string& telefono, const std::string& direccion);

    const std::string& getDni() const { return dni; }
    const std::string& getNombre() const { return nombre; }
    const std::string& getTelefono() const { return telefono; }
    const std::string& getDireccion() const { return direccion; }

    void mostrarCliente() const;
};

#endif // CLIENTE_H
