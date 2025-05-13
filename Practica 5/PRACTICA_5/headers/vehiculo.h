#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>
#include <iostream>

class Vehiculo {
private:
    std::string codigo;
    std::string marca;
    std::string modelo;
    int anio;
    int kilometraje;
    double precio;

public:
    Vehiculo(const std::string& codigo, const std::string& marca, const std::string& modelo, int anio, int kilometraje, double precio);

    const std::string& getCodigo() const { return codigo; }
    const std::string& getMarca() const { return marca; }
    const std::string& getModelo() const { return modelo; }
    int getAnio() const { return anio; }
    int getKilometraje() const { return kilometraje; }
    double getPrecio() const { return precio; }

    void mostrarVehiculo() const;
};

#endif // VEHICULO_H
