#ifndef SERIE_H
#define SERIE_H

#include "video.h"
#include "episodio.h"

class Serie : public Video {
private:
    std::vector<Episodio> episodios;

public:
    Serie(std::string id, std::string nombre, int duracion, std::string genero);
    void agregarEpisodio(Episodio ep);
    void mostrar() const override;
    void mostrarEpisodios() const;
};

#endif
