#include <iostream>
using namespace std;

class Invites{
    public :
    string nom;
    string evenement;
    string date ="le 13/09/2021";
    string adress="ULPGL";

bool verificationdesevenement(string ass){
    bool validiter = true;
// on verifie dans la base des donnees si l'evenement y figure
    return validiter;
}

void presentationInvites(){

    cout << "   =====================================================================" << endl;
    cout << "       IDENTIFIER VOUS POUR PARTICIPER A L'EVENEMENT ORGANISE" << endl;
    cout << "   =====================================================================" << endl;
    cout << " " << endl;
    cout << "    entrez votre nom:" << endl;
    cin >> nom;
    cout << "    A quel evenement vous voulez participer" << endl;
    cin >> evenement;

    if(verificationdesevenement(evenement) == true){
    cout << "    " << nom <<", vous etes enregistrer pour participer a la " << evenement<< endl;
    cout << "    qui aura lieu "<< date<< " a "<< adress<< endl;
    cout << " "<< endl;

}
    else{
    cout << " "<< endl;
    cout << "    L'evenement mensionne ne figure pas sur la liste. nous vous sugerons" << endl;
    cout << "    donc de selectionner un autre evenement figurant sur la liste." << endl;
    cout << " "<< endl;
    presentationInvites();
}

}
};
