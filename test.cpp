#include <iostream>
#include <cassert>
#include <string>
#include "reverse.hpp"

void test_all() {
    int ai[]{1, 2, 3};
    reverse_array(ai, 3);
    assert(ai[0] == 3);

    double ad[]{1.1, 2.2};
    reverse_array(ad, 2);
    assert(ad[0] == 2.2);

    std::string as[]{"VT", "ECE"};
    reverse_array(as, 2);
    assert(as[0] == "ECE");
    
    std::cout << "All manual tests passed!" << std::endl;
}

int main() {
    test_all();
    return 0;
}