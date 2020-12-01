/**
 * Simple C++ class for representing a Cube (with constructors).
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"

namespace uiuc {
  Cube::Cube() {
    this->length_ = 1;
  }

  Cube::Cube(double length) {
    this->length_ = length;
  }

  double Cube::getVolume() {
    return this->length_ * this->length_ * this->length_;
  }

  double Cube::getSurfaceArea() {
    return 6 * this->length_ * this->length_;
  }

  void Cube::setLength(double length) {
    this->length_ = length;
  }
}
