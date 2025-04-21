#include <cassert>
#include <iostream>
#include "office_building.hpp"

void office_test() {
    office::Office office1 =
        office::Office(18.776, 108.5, 122.8, 19.1, 0, 0,12);

    office::Office office2 =
        office::Office(-90.909090, 180.364, 6.8, 4.4, 60.1, 10,15);

    double val1 = office1.value();
    double val2 = office2.value();
	
	std::cout << "Test 1 value: " << val1 << std::endl;
    std::cout << "Test 2 value: " << val2 << std::endl;

    assert(val1 == 37527.68 + 12*200);
    assert(val2 == 60578.72 + 15*200);

}

int main() {
    office_test();
	std::cout << "Tests passed successfully!\n";
	return 0;
}