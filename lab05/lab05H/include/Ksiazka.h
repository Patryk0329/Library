#ifndef KSIAZKA_H
#define KSIAZKA_H

#include "IKsiazka.h"

class Ksiazka: public IKsiazka
{
    private:

    std::string title, author, genre;
    int id, shelf;
    
    public:
    Ksiazka(std::string title, std::string author, int id, std::string genre, int shelf);
    void wyswietlInformacje() const override;
    std::string getTytul() const override;
    int getId() const override;

};

#endif