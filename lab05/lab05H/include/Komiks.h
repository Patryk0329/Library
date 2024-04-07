#ifndef KOMIKS_H
#define KOMIKS_H

#include "IKsiazka.h"

class Komiks: public IKsiazka
{
    private:

    std::string title, author, genre;
    int id, shelf;
    
    public:

    Komiks(std::string title, std::string author, int id, std::string genre, int shelf);
    void wyswietlInformacje () const override;
    int getId() const override;

    std::string getTytul() const override;
};


#endif