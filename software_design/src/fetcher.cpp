//Geocache Compass fetcher library
//made by T&R (Mecknavorz)
//Fetcher is a custom setup to store and get geocache data
//done cause i didn't wanna deal with requesting geocache API access lol

//includes
#include "Arduino.h"
#include "Wifi.h"
#include "WiFiClientSecure.h"
#include "fetcher.h"

//defualt constructor
geocache::geocache(){
    lat = 0.0;
    lon = 0.0;
    dif = 0;
    ter = 0;
    size = 0;
}
//geocache constructor
geocache::geocache(double Lat, double Long, int Dif, int Ter, int Siz){
    lat = Lat;
    lon = Long;
    dif = Dif;
    ter = Ter;
    size = Siz;
}

//defualt fetcher constructor
fetcher::fetcher(){
    geocache nearme[20];
}

fetcher::fetcher(int find){
    geocache nearme[find];
    //getNearby();
}

//function to fetch nearby 
void fetcher::getNearby(double Lat, double Long){
    //iterate over our array of geocaches to store
    //defualt is 20 but figured I'd prepare ahead incase I wanted that to change
    for(int i=0; i<sizeof(fetcher::nearme); i++){
        //fetch the geocache's data

    }
}