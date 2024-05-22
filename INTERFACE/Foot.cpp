#include <cstdlib>
#include <ctime>
#include "Foot.hpp"

Foot::Foot()
{

}
Foot::~Foot()
{
    
}
int Foot::menu()
{
    int choice;
    cout << "1-Continue \t 2-Restart \t 3-Exit" << endl;
    cin >> choice;
    return (choice);
}
void Foot::start()
{
    srand(time(NULL));
    int scoreAdversaire (0);
    int scoreEquipe (0);
    int temps (0);
    cout << "Debut du match " << endl;
    while (jouer == true && (temps <= 90))
    {
        int adversaireAttaque = rand()%40;
        int equipeAttaque = rand()%40;
        int adversaireDefense= rand()%40;
        int equipeDefense = rand()%40;
        int marquer = rand()%2;
        if ((adversaireAttaque*2 > equipeDefense+equipeAttaque) && marquer == 1)
        {
            scoreAdversaire++;
            cout << "But de l'adversaire" << endl;
            cout << scoreEquipe << ":" << scoreAdversaire << endl;
        }
        else if((equipeAttaque*2 > adversaireDefense+adversaireDefense) && marquer == 1)
        {
            scoreEquipe++;
            cout << "Vous avez marquer un but" << endl;
            cout << scoreEquipe << ":" << scoreAdversaire << endl;
        }
        else
        {
            if (temps != 0)
            {
                cout << temps << "-eme minutes : "<< scoreEquipe << ":" << scoreAdversaire << endl;
            }
        }
        temps+=7;
        pause();
    }
    if (scoreAdversaire > scoreEquipe)
        {
            cout << "Vous avez perdu ...GAME OVER..." << endl;
            cout << "Score finale = " << scoreEquipe << ":" << scoreAdversaire << endl;
        }
    else if (scoreAdversaire < scoreEquipe)
        {
            cout << "FELICITATION  Vous avez gagne" << endl;
            cout << "Score finale = " << scoreEquipe << ":" << scoreAdversaire << endl;
        }
    else
        {
            cout << "MATCH NUL" << endl;
            cout << "Score finale = " << scoreEquipe << ":" << scoreAdversaire << endl;
        }
}
void Foot::exit()
{
    cout << " EXIT GAME " << endl;
    jouer = false;
}
void Foot::pause()
{
    switch (menu())
    {
        case 1:
            play();
            break;
        case 2:
            restart();
            break;
        default:
            exit();
            break;
    }
}
void Foot::play()
{
    cout << " PLAY " << endl;
}
void Foot::restart()
{
    cout << " GAME RESTARTED " << endl;
    int scoreAdversaire (0);
    int scoreEquipe (0);
    start();
}
void Foot::affichageJeu()
{
    cout << "BIENVENUE - JEU DE FOOT" << endl;
}