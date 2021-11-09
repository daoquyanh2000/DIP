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

#define INPUT "E:/hoc_tap/nam_4_ki_1/dip/assignment01-2/img.jpg"
int main()
{
	Mat image = imread(INPUT);
    Mat new_image = Mat::zeros(image.size(), image.type());
    int beta = 0;       /*< Simple brightness control */
    cout << " Basic Linear Transforms " << endl;
    cout << "-------------------------" << endl;
    cout << "* Enter the beta value [0-100]: ";    cin >> beta;
    
    for (int y = 0; y < image.rows; y++) {
        for (int x = 0; x < image.cols; x++) {
            for (int c = 0; c < image.channels(); c++) {
                new_image.at<Vec3b>(y, x)[c] =
                    saturate_cast<uchar>( image.at<Vec3b>(y, x)[c] + beta);
            }
        }
    }
    imshow("Original Image", image);
    imshow("New Image", new_image);
    waitKey();
    return 0;
}