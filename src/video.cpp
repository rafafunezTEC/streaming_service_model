#include "video.h"

Video::Video(std::string id, std::string nombre, int duracion, std::string genero)
    : id(id), nombre(nombre), duracion(duracion), genero(genero) {}

float Video::calcularPromedio() const {
    if (calificaciones.empty()) return 0;
    int suma = 0;
    for (int c : calificaciones) suma += c;
    return static_cast<float>(suma) / calificaciones.size();
}

void Video::agregarCalificacion(int calificacion) {
    if (calificacion < 1 || calificacion > 5)
        throw std::out_of_range("Calificación fuera de rango (1-5).");
    calificaciones.push_back(calificacion);
}

std::string Video::getNombre() const {
    return nombre;
}
