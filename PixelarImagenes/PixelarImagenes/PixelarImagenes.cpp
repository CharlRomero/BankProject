#include"CreatPDF.h"
#include "Pixel.h"
#include "QrCode.h"
#include <iostream>
#include <Windows.h>
#include <opencv2/objdetect.hpp>
#include<iostream>
#include <cmath>

using namespace cv;
using namespace std;

int main()
{
	PDF pdf;
	pdf.generatePDF("hola soy abigail cabascango", " new.pdf");
	Pixel pixel;
	pixel.pixelConsole("Qrcode.png");

	return 0;
}

/*
int main()
{
	// Read image
	
}*/