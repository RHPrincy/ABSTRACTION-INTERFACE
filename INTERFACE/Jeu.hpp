#ifndef JEUX_H
#define JEUX_H

class Jeu
{
    public:
        Jeu();
        ~Jeu();
        virtual void start() = 0;
        virtual void exit() = 0;
        virtual void pause() = 0;
        virtual void play() = 0;
        virtual void restart() = 0;
};

#endif