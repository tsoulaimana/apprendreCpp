#ifndef ZONEARROSAGE_H
#define ZONEARROSAGE_H
#include "vanne.h"
#include "capteurhumidite.h"
#include "string"
using namespace std;

class ZoneArrosage
{
public:
    //ZoneArrosage(int _numZone,const gpio_num_t _commandeVanne,const gpio_num_t _senseAVanne, const gpio_num_t _senseBVanne,const gpio_num_t _brocheHumidite);
    ZoneArrosage(const string _initialisationZone);
    ~ZoneArrosage();
    void Piloter();
private:
    //Vanne laVanne; version statique
    //CapteurHumidite leCapteurHumidite;

    Vanne *laVanne; //version dynamique
    CapteurHumidite *leCapteurHumidite;
    int numZone;
};

#endif // ZONEARROSAGE_H
