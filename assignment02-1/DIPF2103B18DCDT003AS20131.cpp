/*
	ma nhom btl:		23
	ten mon hoc:     xu ly anh
	thong tin sv1:   Dao Quy Anh         - B18DCDT003    - 03 - B18CQDT03-B - daoquyanh13700@gmail.com
	thong tin sv2:   Dang Hoang Giang    - B18DCDT059    - 04 - B18CQDT03-B - dgiang69@gmail.com
	thong tin sv3:   Nguyen Huy Hung     - B18DCDT091    - 04 - B18CQDT03-B - nhuyhung146@gmail.com
*/


//#include "opencv2/imgproc.hpp"
//#include "opencv2/highgui.hpp"
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//#define input "D:/VS_Projects/resources/DIPF2103B18DCDT003AS20131.jpg"
//
//Mat src, src_blur, src_gray;
//Mat sobel_img, canny_img, laplace_img;
//int lowerThreshold = 100;
//int upperThreshold = 200;
//int ddepth = CV_64F;
//int delta = 0;
//int scale = 1;
//int kernel_size = 3;
//
//int main() {
//	src = imread(input);						// load image
//	cvtColor(src, src_gray, COLOR_BGR2GRAY);	// convert filtered image to grayscale
//	GaussianBlur(src, src_blur, Size(3, 3), 0);	// reduce noise
//
//	if (src.empty())
//	{
//		return -1;
//	}
//
//	//---------------Sharpening filter--------------------
//	Mat sharpening_kernel = (Mat_<double>(3, 3) << -1, -1, -1,-1, 9, -1,-1, -1, -1);
//	Mat sharped;
//	filter2D(src_blur, sharped, -1, sharpening_kernel);
//	imshow("Sharpening Image", sharped);
//	//---------------Sobel Edge Detection-----------------
//	Sobel(src_blur, sobel_img, ddepth, 1, 1, kernel_size);
//	imshow("Sobel Edge Detection", sobel_img);
//	//---------------Canny Edge Detection-----------------
//	Canny(src_blur, canny_img, lowerThreshold, upperThreshold, kernel_size);
//	imshow("Canny Edge Detection", canny_img);
//	//---------------Laplace Edge Detection---------------
//	Laplacian(src_blur, laplace_img, ddepth, kernel_size, scale, delta);
//	imshow("Laplacecian Edge Detection", laplace_img);
//
//	waitKey(0);
//	return 0;
//}