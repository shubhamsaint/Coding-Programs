#include <iostream>

#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

using namespace std;
using namespace c8master;


int main() {

	FractalCreator fractalCreator(800, 600);

	fractalCreator.addRange(0.0, RGB(0, 0, 0));
	fractalCreator.addRange(0.3, RGB(255, 0, 0));
	fractalCreator.addRange(0.5, RGB(255, 255, 0));
	fractalCreator.addRange(1.0, RGB(255, 255, 255));

	cout << fractalCreator.getRange(365) << endl;

	fractalCreator.addZoom(Zoom(382, 116, 0.1));
	fractalCreator.addZoom(Zoom(408, 222, 0.1));
	fractalCreator.run("test.bmp");

	cout << "Finished." << endl;
	return 0;
}
