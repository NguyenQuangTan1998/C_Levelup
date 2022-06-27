#include <iostream>

#include "Picture.h"
#include <Windows.h>
#include "CLine.h"
#include "CCircle.h"

using namespace std;

int main()
{
	//Draw Line code
	//CLine line;
	//line.setLenght(500);
	//line.draw(0, 400);


	//Draw Circle code
	//CCircle circle;
	//circle.draw(300, 300);

	//Draw Rectangle
	//CRectangle rectangle;
	//rectangle.draw(400,600);

	Picture picture;
	picture.Arr[0] = new CLine(500);
	picture.Arr[1] = new CCircle(30);
	picture.Arr[2] = new CRectangle(400,600);
	picture.Arr[3] = new CSquare(400);

	HWND console_handle = GetConsoleWindow();
	HDC device_context = GetDC(console_handle);

	HPEN pen = CreatePen(PS_SOLID, 5, RGB(255, 0, 0));
	SelectObject(device_context, pen);

	picture.Arr[0]->draw(device_context, 0, 400);
	picture.Arr[1]->draw(device_context, 300, 300);
	picture.Arr[2]->draw(device_context, 400, 600);
	picture.Arr[3]->draw(device_context, 600, 600);

	ReleaseDC(console_handle, device_context);
	Sleep(30000);
}
