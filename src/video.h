#ifndef VIDEO_H
#define VIDEO_H

#include <string>
#include <vector>
#include <iostream>

class Video {
protected:
    std::string id;
    std::string nombre;
    int duracion;
    std::string genero;
    std::vector<int> calificaciones;

public:
    Video(std::string id, std::string nombre, int duracion, std::string genero);
    virtual ~Video() {}

    virtual void mostrar() const = 0;
    virtual float calcularPromedio() const;
    virtual void agregarCalificacion(int calificacion);

    std::string getNombre() const;
};

#endif
