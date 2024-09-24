#ifndef COLORCODER_HPP
#define COLORCODER_HPP
#include "ColorPair.hpp"

namespace TelCoColorCoder {
    extern const char* MajorColorNames[];
    extern const char* MinorColorNames[];
    extern int numberOfMajorColors;
    extern int numberOfMinorColors;

    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
}
#endif
