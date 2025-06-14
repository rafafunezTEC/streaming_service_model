#include <iostream>
#include <vector>
#include <memory>
#include "pelicula.h"
#include "serie.h"
#include "episodio.h"

int main() {
    std::vector<std::shared_ptr<Video>> catalogo;

    auto peli1 = std::make_shared<Pelicula>("001", "Matrix", 136, "Acción");
    auto peli2 = std::make_shared<Pelicula>("002", "La La Land", 128, "Drama");
    peli1->agregarCalificacion(5);
    peli1->agregarCalificacion(4);
    peli2->agregarCalificacion(5);

    auto serie1 = std::make_shared<Serie>("003", "Breaking Bad", 50, "Misterio");
    Episodio ep1("Piloto", 1);
    ep1.agregarCalificacion(5);
    ep1.agregarCalificacion(4);
    Episodio ep2("Cat's in the Bag", 1);
    ep2.agregarCalificacion(5);
    serie1->agregarEpisodio(ep1);
    serie1->agregarEpisodio(ep2);

    catalogo.push_back(peli1);
    catalogo.push_back(peli2);
    catalogo.push_back(serie1);

    int opcion;
    do {
        std::cout << "\n--- Menú Streaming ---\n";
        std::cout << "1. Mostrar todos los videos\n";
        std::cout << "2. Mostrar solo películas\n";
        std::cout << "3. Mostrar episodios de una serie\n";
        std::cout << "4. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        if (opcion == 1) {
            for (auto& v : catalogo) v->mostrar();
        } else if (opcion == 2) {
            for (auto& v : catalogo) {
                if (dynamic_cast<Pelicula*>(v.get())) v->mostrar();
            }
        } else if (opcion == 3) {
            std::string nombre;
            std::cout << "Nombre de la serie: ";
            std::cin.ignore();
            std::getline(std::cin, nombre);
            for (auto& v : catalogo) {
                if (auto s = dynamic_cast<Serie*>(v.get())) {
                    if (s->getNombre() == nombre) {
                        s->mostrarEpisodios();
                    }
                }
            }
        }

    } while (opcion != 4);

    return 0;
}
