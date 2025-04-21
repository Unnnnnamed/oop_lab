#include "developed_lot.hpp"

namespace developed_lot{
		//constructor
DevelopedLot::DevelopedLot(double lat, double lon, double width, double length, double footprint, int floors) : lot::Lot(lat, lon, width, length), footprint(footprint), floors(floors) {}

double DevelopedLot::floor_area_ratio() const { 		//method floor_area_ratio
	double total_area = footprint * floors;
	double land_area = lot::Lot::land_area();
	return total_area / land_area;
}

double DevelopedLot::value() const { 		//value method
	double base_value = lot::Lot::value();
	double total_area = footprint * floors;
	double total_value = total_area * 100;
	return base_value + total_value;
}

DevelopedLot::~DevelopedLot() { 		//destructor
}
}