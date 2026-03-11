#include <iostream>
#include <memory>
#include <fstream>

#include "geometry.h"



class Feature {
public:
	Feature() = default;

	bool isValid() {
		return shape_ != nullptr;
	}

	bool read(std::istream& in) {
		if (!in.good()) {
			return false;
		}

        //Реализовать десериализацию объекта из файла

        return in.good();
	}

	void draw() {
		if (shape_ != nullptr) {
			shape_->Draw();
		}
	}

private:
	std::unique_ptr<Shape> shape_;
};

int main(int argc, char* argv[]) {
	Feature feature;

	std::ifstream ifs("features.dat", std::ios::binary);

	if (feature.read(ifs) || !feature.isValid()) {
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}