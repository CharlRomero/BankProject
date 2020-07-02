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
#if !defined(__PDF_h)
#define __PDF_h
using namespace cv;
using namespace std;
class PDF
{
public:
	PDF();
	void generatePDF(string, string);
};
PDF::PDF(){}
void PDF::generatePDF(string cadena, string report)
{
	LPCCH lpBuffer1 = cadena.c_str();
	LPCSTR lpName = report.c_str();
	_lwrite(_lcreat(lpName, 00), lpBuffer1, 100);
}
#endif