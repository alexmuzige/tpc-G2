#include <iostream>
using namespace std;

class Organisateurs{
public :

    struct evenements{
    string noms;
    int date;
    string adress;
    string titreevenement;
 };
    string organisateur;
    string titre;
    string adresse;
    int date;
    string pindeconsultation;

bool verificationdesevenement(string nom, string pin){
    bool validiter = true;
// on verifie dans la base des donnees si l'evenement y figure
    return validiter;
}

void organiserunevenement(){
    cout << " " << endl;
    cout << "   =====================================================================" << endl;
    cout << "         ORGANISER UN EVENEMENT SOCIO-CULTUREL AU COURS DE CE MOIS" << endl;
    cout << "   =====================================================================" << endl;
    cout<<"    "<<endl;
    cout<<"    Entrer votre nom  :"<<endl;
    cin >> organisateur;
    cout<<"    Entrer le titre d'identification de l'evenement :"<<endl;
    cin >> titre;
    cout<<"    Date de celebration de l'evenement (le jour du mois) :"<<endl;
    cin >> date;
    cout<<"    Lieu de celebration de l'evenement :"<<endl;
    cin >> adresse;
    cout<<"    Entrer votre pin de verification des donnees de l'evenement :"<<endl;
    cin >> pindeconsultation;

    evenements service;
    service.titreevenement = titre;
    service.date = date;
    service.noms = organisateur;
    service.adress = adresse;

    evenements*pointeur;
    pointeur = &service;
    cout<<"    "<<endl;
    cout<<"    L'evenement "<< titre <<" a ete enregistrer pour la journee indique"<<endl;
    cout<<"    "<<endl;
    cout<<"    nom de l'evenement :"<<service.titreevenement <<endl;
    cout<<"    date de celebration : le "<< service.date<<"/09/2021" <<endl;
    cout<<"    organiser par :"<<service.noms <<endl;
    cout<<"    lieu de celebration :"<<service.adress <<endl;
    cout<<"    "<<endl;
}
void presentation(){
    int nombredesparticipants = 25;
    cout << "   =====================================================================" << endl;
    cout << "    IDENTIFIER VOUS POUR CONSULTER LES DONNEES DE L'EVENEMENT ORGANISE" << endl;
    cout << "   =====================================================================" << endl;
    cout << " " << endl;
    cout << "    entrez votre nom :" << endl;
    cin >> organisateur;
    cout << "    definissez l'evenement a consulter :" << endl;
    cin >> titre;
    cout << "    Pin de securisation des donnees :" << endl;
    cin >> pindeconsultation;

    evenements service;
    service.titreevenement = titre;
    service.date = date;
    service.noms = organisateur;
    service.adress = adresse;

    evenements*pointeur;
    pointeur = &service;

    if(verificationdesevenement(organisateur, pindeconsultation) == true){
    cout<<"    "<<endl;
    cout<<"    nom de l'evenement :"<<service.titreevenement <<endl;
    cout<<"    date de celebration : le "<< service.date<<"/09/2021" <<endl;
    cout<<"    organiser par :"<<service.noms <<endl;
    cout<<"    lieu de celebration :"<<service.adress <<endl;
    cout<<"    nombre des participants deja enregistrer :"<<nombredesparticipants<<endl;
    cout<<"    "<<endl;

}
    else{
    cout << " "<< endl;
    cout << "    L'evenement mensionne ne figure pas sur la liste. nous vous sugerons" << endl;
    cout << "    donc de mentionner un autre evenement figurant sur la liste." << endl;
    cout << " "<< endl;
    presentation();
}
}

void listedesevenementsinternes(){
}

};

class Consultantpremier : public Organisateurs{
    public :

void listedesevenementsinternes(){

    for(int i=0; i<30 ; i++){
    int j = 25;
    evenements service;
    cout<<"    Evenement de la "<<i+1<< "ieme journnee" <<endl;
    evenements*pointeur;
    pointeur = &service;
    cout<<"    nom de l'evenement :"<<service.titreevenement<<endl;
    cout<<"    date de celebration : le "<< i+1<<"/09/2021" <<endl;
    cout<<"    lieu de celebration :"<<service.adress <<endl;
    cout<<"    organiser par :"<<service.noms<<endl;
    cout<<"    nombre des participants actuels :"<<j <<endl;
    cout<<"    "<<endl;
}
}

void presentation(){

    cout << "   =====================================================================" << endl;
    cout << "          IDENTIFIER VOUS POUR CONSULTER LES DONNEES DU RESEAU" << endl;
    cout << "   =====================================================================" << endl;
    cout << " " << endl;
    cout << "    entrez votre nom :" << endl;
    cin >> organisateur;
    cout << "    Pin de securisation des donnees :" << endl;
    cin >> pindeconsultation;


    if(verificationdesevenement(organisateur, pindeconsultation) == true){
    cout<<"    "<<endl;
    cout << "    Les evenements organiser pour ce mois sont :" << endl;
    cout<<"    "<<endl;
    listedesevenementsinternes();

}
    else{
    cout << " "<< endl;
    cout << "    vous n'etes pas autoriser a consulter les donnees du site." << endl;
    cout << " "<< endl;
    presentation();
}
}

};
