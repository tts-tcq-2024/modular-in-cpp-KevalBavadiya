#include <iostream>
#include "PrintManual.hpp"
#include "ColorCoder.hpp"

namespace TelCoColorCoder {
    void PrintColorCodeManual() {
        for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; ++i) {
            ColorPair colorPair = GetColorFromPairNumber(i);
            std::cout << i << " : " << colorPair.ToString() << std::endl;
        }
    }
}
