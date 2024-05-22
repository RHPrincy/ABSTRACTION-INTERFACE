#ifndef STRATEGIE_H
#define STRATEGIE_H

#include <iostream>
#include "Jeu.hpp"
using namespace std;

class Strategie: public Jeu
{
    public:
        Strategie();
        ~Strategie();
        void start();
        void exit();
        void pause();
        void play();
        void restart();
        int menu();
        void affichageJeu();
    protected:
        bool jouer = true;
};

#endif