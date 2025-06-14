#include "episodio.h"
#include <iostream>

Episodio::Episodio(std::string titulo, int temporada)
    : titulo(titulo), temporada(temporada) {}

void Episodio::mostrar() const {
    std::cout << "  Título: " << titulo << ", Temporada: " << temporada
              << ", Promedio: " << calcularPromedio() << std::endl;
}

void Episodio::agregarCalificacion(int calificacion) {
    if (calificacion < 1 || calificacion > 5)
        throw std::out_of_range("Calificación fuera de rango (1-5).");
    calificaciones.push_back(calificacion);
}

float Episodio::calcularPromedio() const {
    if (calificaciones.empty()) return 0;
    int suma = 0;
    for (int c : calificaciones) suma += c;
    return static_cast<float>(suma) / calificaciones.size();
}

std::string Episodio::getTitulo() const {
    return titulo;
}
