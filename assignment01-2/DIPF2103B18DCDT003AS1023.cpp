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



/* 
 0: Binary
 1: Binary Inverted
 2: Threshold Truncated
 3: Threshold to Zero
 4: Threshold to Zero Inverted
*/
#define INPUT "E:/hoc_tap/nam_4_ki_1/dip/assignment01-2/img.jpg"

int main()
{
    Mat image = imread(INPUT);
    Mat src_gray,dst,dst_adaptive;
    int threshold_type=0, max_binary_value=255, threshold_value=0;
    cout << "threshold_type: ";    cin >> threshold_type;
    cout << "threshold_value: ";    cin >> threshold_value;
    if (threshold_type == 0 || threshold_type == 1)
    {
        cout << "max_binary_value: ";    cin >> max_binary_value;
    }
    cvtColor(image, src_gray, COLOR_BGR2GRAY); // Convert the image to Gray
    threshold(src_gray, dst, threshold_value, max_binary_value, threshold_type);
    adaptiveThreshold(src_gray, dst_adaptive,
        127,
        ADAPTIVE_THRESH_MEAN_C,
        THRESH_BINARY,
        15,
        8);
    imshow("Original Image", image);
    imshow("grayed Image", src_gray);
    imshow("threshold image", dst);
    imshow("adaptiveThreshold", dst_adaptive);
    waitKey();
    return 0;
}