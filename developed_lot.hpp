#include "lot.hpp"

namespace developed_lot {
	
class DevelopedLot : public lot::Lot { 		//inheritance and definitions
private:
	double footprint;
	int floors;

protected:
	double floor_area_ratio() const; 		//protected method floor_area_ratio

public: 		//constructor
	DevelopedLot(double lat, double lon, double width, double length, double footprint, int floors);

	double value() const; 		//value method

	~DevelopedLot(); 		//destructor
};
}