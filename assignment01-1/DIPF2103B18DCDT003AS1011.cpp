/////////////////////////////////////////////////
//mon hoc:	xu ly anh
//ho ten:	DAO QUY ANH
//MSV	:	B18DCDT003
//ma nhom:	03
//
//email:	daoquyanh13700@gmail.com
/////////////////////////////////////////////////
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#define blue	Scalar(255, 0, 0)
#define green	Scalar(0, 255, 0)
#define red		Scalar(0, 0, 255)
#define white	Scalar(255, 255, 255)
#define black	Scalar(0, 0, 0)
#define center	Point(250, 250)
#define img		Mat::zeros(500, 500, CV_8UC3)

using namespace cv;
using namespace std;

int main()
{
	//mat
	Mat img1 = img;
	img1 =red;
	//imshow("mau do", img1);

	//hinh khoi
	Mat img2 = img;
	circle(img2, center, 100, green, -1);
	//imshow("hinh tron", img2);

	//ve text
	Mat img3 = img;
	putText(img3, "DAO QUY ANH", center, FONT_HERSHEY_COMPLEX,1,white,1);
	//imshow("text", img3);
	
	//tao mat nguoi
	//nhap chieu cao va chieu rong
	int m, n;
	cin >> m >> n;
	//tao anh co kich thuoc mxn
	Mat img4 = Mat::zeros(m, n, CV_8UC3);
	img4 = Scalar(210, 110, 35);

	//ve mat
	//note:point(rong,cao)
	int radius = sqrt(m*n)/8;
	circle(img4, Point(n / 4, m / 4), radius, white, -1);
	putText(img4, "mat trai", Point(n / 4, m / 4), FONT_HERSHEY_COMPLEX, 0.2, black, 1);
	circle(img4, Point(3*n / 4, m / 4), radius, white, -1);
	putText(img4, "mat phai", Point(3 * n / 4, m / 4), FONT_HERSHEY_COMPLEX, 0.2, black, 1);

	//ve mui
	circle(img4, Point(n / 2, m / 2), radius / 5, white, -1);
	putText(img4, "mui", Point(n / 2, m / 2), FONT_HERSHEY_COMPLEX, 0.2, black, 1);

	//ve mom
	//note:rect(rong,cao)
	rectangle(img4, cv::Rect(n / 4, 3 * m / 4, n/2, radius), white, -1);
	putText(img4, "day la cai mom", Point(n / 4, 3 * m / 4), FONT_HERSHEY_COMPLEX, 0.8, black, 1);
	imshow("ve mat nguoi", img4);
	waitKey(0);
	return 0;
}