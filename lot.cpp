#include "lot.hpp"

namespace lot { 		//constructor
Lot::Lot(double lat, double lon, double w, double l) : latitude(lat), longitude(lon), width(w), length(l) {}

double Lot::getLatitude() const { 		//getters
	return latitude;
}
double Lot::getLongitude() const {
	return longitude;
}
double Lot::land_area() const { 		//land_area method
	return width * length;
}
double Lot::value() const { 		//value method
	return land_area() * 16.0;
}

Lot::~Lot() { 		//destructor
}
}