#include "developed_lot.hpp"

namespace office{
    class Office : public developed_lot::DevelopedLot{
    private:
        int num_offices;

    public:
        Office(double,double,double,double,double,int,int);
        ~Office();

        double value();
    };

}