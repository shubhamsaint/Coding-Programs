
#include "RGB.h"

namespace c8master {

RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {
	// TODO Auto-generated constructor stub

}

RGB operator-(const RGB& first, const RGB& second) {
	return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
}

}