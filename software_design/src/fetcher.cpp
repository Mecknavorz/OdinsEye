//Geocache Compass fetcher library
//made by T&R (Mecknavorz)
//Fetcher is a custom setup to store and get geocache data
//done cause i didn't wanna deal with requesting geocache API access lol

//includes
#include "Arduino.h"
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
    geocache stored[20];
}