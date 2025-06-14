#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"

class Pelicula : public Video {
public:
    Pelicula(std::string id, std::string nombre, int duracion, std::string genero);
    void mostrar() const override;
};

#endif
