# Color-Utilities

A color utilities class that converts RGB to XYZ or CIELAB color spaces and measures the color difference (Delta-E)

## Important Notes
* Constructors can take 8-bit RGB format or float format (0.0 to 1.0) as shown in the Instructions section below
* **Calculations are quasimetric!**
* The conversions calibrate the RGB color to 2° with illumination D65
* Delta-e is calculated using CIE76, which may be validated using [this link](http://colormine.org/delta-e-calculator)


## Usage
* ColorUtils mainly aims at calculating Delta-E for any two given RGB colors
* Since the RGB color space is not *perceptually uniform*, a couple of conversions are needed in order to compare the colors, thus introducing the conversion functions to the class


## Instructions
### Constructing Colors
```
ColorUtils::rgbColor c1(static_cast<unsigned int>(255), 255, 255);  // unsigned int constructor
ColorUtils::rgbColor c2(static_cast<float>(0), 0, 0); // float constructor
```
```
ColorUtils::xyzColor cX1(static_cast<float>(255), 0, 0); // float constructor
```
```
ColorUtils::CIELABColorSpace cC1(static_cast<float>(255), 255, 255); // float constructor
```
### RGB to XYZ Converter
```
ColorUtils::xyzColor cX2 = rgbToXyz(c1);  // cX2 contains the XYZ value of c1 (white)
```
### XYZ to CIELAB Converter
```
ColorUtils::CIELABColorSpace cC2 = xyzToCIELAB(xyzColor cX1); // cC2 contains the CIELAB value of cX1 (red)
```
### Delta-E Calculator
```
float deltaE = getColorDeltaE(rgbColor c1, rgbColor c2);  // deltaE = 100.0
```

## Task List
- [ ] Overload the public functions for better compatibility 
- [ ] Add more color spaces support *(such as CMYK and other variations of RGB)*
- [ ] Overload arithmetic operators for each color space
- [ ] Add an option to use dE2000

**Feel free to make a pull request or request more features!**


## License
MIT
