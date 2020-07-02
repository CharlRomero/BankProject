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
#include <iostream>
#include <Windows.h>
#include <opencv2/objdetect.hpp>
#include<iostream>
#include <cmath>
#if !defined(__MyQrCode_h)
#define __MyQrCode_h
using namespace cv;
using namespace std;

class MyQrCode
{
public:
	MyQrCode();
	void generateCodeQr();
	void display(Mat &im, Mat &bbox);
private:

};
MyQrCode::MyQrCode(){}
void MyQrCode::display(Mat &im, Mat &bbox)
{
	int n = bbox.rows;
	for (int i = 0; i < n; i++)
	{
		line(im, Point2i(bbox.at<float>(i, 0), bbox.at<float>(i, 1)), Point2i(bbox.at<float>((i + 1) % n, 0), bbox.at<float>((i + 1) % n, 1)), Scalar(255, 0, 0), 3);
	}

}
void MyQrCode::generateCodeQr()
{
	int argc = 0;
	string* argv = new string[100];
	Mat inputImage, rectifiedImage;
	if (argc > 1)
		inputImage = imread(argv[1]);
	else
		inputImage = imread("QrCode.jpg");
	namedWindow("QR", WINDOW_NORMAL);
	std::string data = "**************";
	imshow("QR", inputImage);
	waitKey(0);
	if (data.length() > 0)
	{
		display(inputImage, inputImage);
		inputImage.convertTo(inputImage, CV_8UC3);
		imshow("Rectified QRCode", rectifiedImage);

		waitKey(0);
	}
	else
	{
		cout << "QR Code not detected" << endl;
	}

}
#endif