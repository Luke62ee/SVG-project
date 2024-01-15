/**
 * SVG Circle
 **/

#ifndef RECT_H
#define RECT_H

#include "svg.h"
#include <iostream>
#include <string>

using namespace std;

class Rect : public SVG {

public:
  // operator<< equivalent to write the object out
  ostream &write(ostream &out) const override;

  // operator>> equivalent to read the object contents
  istream &read(istream &input) override;

private:
  // coordinates for center of circle
  int x{0}, y{0};

  // radius of circle
  int width{0}, height{0};

  // color of circle
  string color{"black"};
};

#endif
