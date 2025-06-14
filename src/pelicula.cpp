#include "pelicula.h"
#include <iostream>

Pelicula::Pelicula(std::string id, std::string nombre, int duracion, std::string genero)
    : Video(id, nombre, duracion, genero) {}

void Pelicula::mostrar() const {
    std::cout << "[Película] " << nombre << " (" << genero << ", " << duracion << " mins)"
              << " - Promedio: " << calcularPromedio() << std::endl;
}
