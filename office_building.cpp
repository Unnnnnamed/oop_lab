#include "office_building.hpp"


office::Office::Office(double lat, double lon, double w, double l, double fa, int num_floors, int offices) : DevelopedLot(lat,lon,w,l,fa,num_floors){
    num_offices = offices;
}

office::Office::~Office(){};

double office::Office::value(){
    return developed_lot::DevelopedLot::value() + num_offices * 200;
}



