#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgproc/imgproc_c.h>
#include <opencv2/imgproc/detail/distortion_model.hpp>
#include <opencv2/imgproc/hal/hal.hpp>
#include <opencv2/imgproc/hal/interface.h>
#include <opencv2/imgproc/types_c.h>
#include <Windows.h>
#include <string>
#include <iostream>
#include <stdio.h>
#if !defined(__Pixel_h)
#define __Pixel_h
using namespace cv;
using namespace std;
class Pixel
{
public:
	Pixel();
	void pixelConsole( string );
private:

};
Pixel::Pixel() {}
void Pixel::pixelConsole(string nameImage)
{
	HWND myconsole = GetConsoleWindow();
	COLORREF COLOR;
	HDC mydc = GetDC(myconsole);
	Mat img = imread(nameImage);
	int pixel = 0;
	for (int i = 0; i < img.rows; i++)
	{
		int k = 0;
		for (int c = 0; c < img.cols; c++) {
			COLOR = RGB((int)img.at<uchar>(i, k), (int)img.at<uchar>(i, k + 1), (int)img.at<uchar>(i, k + 2));
			SetPixel(mydc, k, i * 2, COLOR);
			k += 3;
		}
	}

	ReleaseDC(myconsole, mydc);
	cin.ignore();
	system("pause");
}
#endif
