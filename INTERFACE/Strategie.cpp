#include <cstdlib>
#include <ctime>
#include "Strategie.hpp"
Strategie::Strategie()
{

}
Strategie::~Strategie()
{
    
}
void Strategie::start()
{
    srand(time(NULL));
    int scoreUtilisateur(0);
    int scoreBot(0);
    while (jouer == true)
    {
        string choix[] = {"pierre", "papier", "ciseaux"};
        string choixUtilisateur;
        cout << "Entrer votre choix (pierre, papier, ou ciseaux): ";
        cin >> choixUtilisateur;
        int indexChoixBot = rand() % 3;
        string choixBot = choix[indexChoixBot];
        cout << "Choix de votre adversaire: " << choixBot << endl;
        if (choixUtilisateur == choixBot) 
        {
            cout << " MATCH NUL!" << endl;
        } 
        else if ((choixUtilisateur == "pierre" && choixBot == "ciseaux") ||(choixUtilisateur == "papier" && choixBot == "pierre") ||(choixUtilisateur == "ciseaux" && choixBot == "papier")) 
        {
            cout << " FELICITATION vous avez gagnez!" << endl;
            scoreUtilisateur++;
        } 
        else 
        {
            cout << "GAME OVER ... vous avez perdu!" << endl;
            scoreBot++;
        }
        cout << "Votre score = " << scoreUtilisateur << endl;
        cout << "Score de l'adversaire = " << scoreBot << endl;
        pause();
    }
}
int Strategie::menu()
{
    int choice;
    cout << "1-Play \t 2-Restart \t 3-Exit" << endl;
    cin >> choice;
    return (choice);
}
void Strategie::exit()
{
    cout << " Exit Game " << endl;
    jouer = false;
}
void Strategie::pause()
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
void Strategie::play()
{
    cout << " PLAY " << endl;
}
void Strategie::restart()
{
    cout << " Game restarted " << endl;
    int scoreUtilisateur = 0;
    int scoreBot = 0;
    start();
}
void Strategie::affichageJeu()
{
    cout << "BIENVENUE - JEU DE STRATEGIE" << endl;
}