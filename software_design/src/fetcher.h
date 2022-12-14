//Geocache Compass fetcher header
//made by T&R (Mecknavorz)
//Fetcher is a custom setup to store and get geocache data
//done cause i didn't wanna deal with requesting geocache API access lol
#ifndef fetcher_h
#define fetcher_h

//basic includes
#include "Arduino.h"
#include "Wifi.h"
#include "WiFiClientSecure.h"

class geocache{
    public:
    //variables
    double lat; //latitude - double?
    double lon; //longitude
    int dif; //difficulty
    int ter; //terrain
    int size; //size
    //stringtype;
    //string name;
    //functions
    geocache();
    geocache(double Lat, double Long, int Dif, int Ter, int Siz); //defualt constructor
    private:
    //hidden?
    //logged
    //-
};

class fetcher{
    public:
    geocache nearme[20]; //nearby geocaches
    fetcher(); //defualt constructor
    fetcher(int find);
    void getNearby(double cLat, double cLong);
};

#endif