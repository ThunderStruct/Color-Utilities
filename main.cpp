//
//  main.cpp
//  RGB-ColorDifference
//
//  Created by Mohamed Shahawy on 4/22/16.
//  Copyright © 2016 Mohamed Shahawy. All rights reserved.
//

#include <iostream>
#include "ColorUtils.hpp"

int main()
{
    // getColorDeltaE function retrieves the color difference (Delta E) of any 2 RGB colors by first converting
    // the 2 colors into xyz color space then CIELAB, which is Delta-E-calculable
    
    // Note that the conversions calibrate the RGB color to 2° with illumination D65
    
    // **Calculations are quasimetric!**
    
    // Constructors can take 8-bit RGB format or float format (0.0 to 1.0)
    
    // Samples
    // White and Grey
    ColorUtils::rgbColor c1(static_cast<unsigned int>(255), 255, 255), c2(static_cast<float>(0.5), 0.5, 0.5);
    std::cout << ColorUtils::getColorDeltaE(c1, c2) << '\n';
    // White and Black
    c2 = ColorUtils::rgbColor(static_cast<unsigned int>(0), 0, 0);
    std::cout << ColorUtils::getColorDeltaE(c1, c2) << '\n';
    
    return 0;
}
