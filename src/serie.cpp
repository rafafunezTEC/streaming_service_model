#include "serie.h"
#include <iostream>

Serie::Serie(std::string id, std::string nombre, int duracion, std::string genero)
    : Video(id, nombre, duracion, genero) {}

void Serie::agregarEpisodio(Episodio ep) {
    episodios.push_back(ep);
}

void Serie::mostrar() const {
    std::cout << "[Serie] " << nombre << " (" << genero << ", " << duracion << " mins)" << std::endl;
    mostrarEpisodios();
}

void Serie::mostrarEpisodios() const {
    for (const Episodio& ep : episodios) {
        ep.mostrar();
    }
}
