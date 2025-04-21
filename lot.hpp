namespace lot {
class Lot {
private:		//definitions
	double latitude;
	double longitude;
	double width;
	double length;

protected: 		//protected land_area method
	double land_area() const;

public:
	Lot(double lat, double lon, double w, double l); 		//constructor
	
	double getLatitude() const; 		//getters
	double getLongitude() const;
	
	double value() const; 		//public value method
	
	~Lot(); 		//destructor
};
}