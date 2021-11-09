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

using namespace cv;
using namespace std;

void gammaCorrection(const Mat& src, Mat& dst, const float gamma)
{
    float invGamma = 1 / gamma;

    Mat table(1, 256, CV_8U);
    uchar* p = table.ptr();
    for (int i = 0; i < 256; ++i) {
        p[i] = (uchar)(pow(i / 255.0, invGamma) * 255);
    }

    LUT(src, table, dst);
}

#define INPUT "E:/hoc_tap/nam_4_ki_1/dip/assignment01-2/img.jpg"
int main()
{
    Mat image = imread(INPUT);
    Mat new_image = Mat::zeros(image.size(), image.type());
    int gamma = 0;
    cout << " Basic Linear Transforms " << endl;
    cout << "-------------------------" << endl;
    cout << "* Enter the gamma value: ";     cin >> gamma;
    gammaCorrection(image, new_image, gamma);
    imshow("Original Image", image);
    imshow("Gamma corrected image", new_image);
    waitKey();
    return 0;
}