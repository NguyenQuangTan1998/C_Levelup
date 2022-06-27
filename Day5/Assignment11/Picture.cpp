#include "Picture.h"

Picture::Picture() {

	for (int i = 0; i < 4; i++) {
		Arr[i] = NULL;
	}
};

Picture::~Picture() {
	for (int i = 0; i < 4; i++) {
		delete Arr[i];
	}
};

void Picture::draw(int x, int y) {
};