#include "pelicula.h"
#include "serie.h"
#include <cassert>
#include <iostream>

void testPelicula() {
    Pelicula p("10", "Inception", 148, "Ciencia Ficción");
    p.agregarCalificacion(4);
    p.agregarCalificacion(5);
    assert(p.calcularPromedio() == 4.5f);
}

void testEpisodio() {
    Episodio e("Inicio", 1);
    e.agregarCalificacion(3);
    e.agregarCalificacion(5);
    assert(e.calcularPromedio() == 4.0f);
}

void testSerie() {
    Serie s("20", "Dark", 45, "Misterio");
    Episodio ep("Capítulo 1", 1);
    ep.agregarCalificacion(5);
    s.agregarEpisodio(ep);
    s.mostrarEpisodios();
}

int main() {
    testPelicula();
    testEpisodio();
    testSerie();
    std::cout << "\nTodas las pruebas pasaron correctamente.\n";
    return 0;
}
