#ifndef EPISODIO_H
#define EPISODIO_H

#include <string>
#include <vector>

class Episodio {
private:
    std::string titulo;
    int temporada;
    std::vector<int> calificaciones;

public:
    Episodio(std::string titulo, int temporada);
    void mostrar() const;
    void agregarCalificacion(int calificacion);
    float calcularPromedio() const;
    std::string getTitulo() const;
};

#endif
