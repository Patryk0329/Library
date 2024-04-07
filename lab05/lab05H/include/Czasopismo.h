#ifndef CZASOPISMO_H
#define CZASOPISMO_H

#include "IKsiazka.h"

class Czasopismo: public IKsiazka
{
    private:

    std::string title, author, genre;
    int id, shelf;
    
    public:

    Czasopismo(std::string title, std::string author, int id, std::string genre, int shelf);

    void wyswietlInformacje() const override;

    int getId() const override;

    std::string getTytul() const override;

};


#endif