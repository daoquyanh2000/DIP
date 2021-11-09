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

using namespace std;
using namespace cv;

#define INPUT "E:/hoc_tap/nam_4_ki_1/dip/vs/testcv/img.jpg"

int main() {
    ////////////////phan a////////////////
    //data structure store image
    Mat image1,image2;

    //read image from file with flags 1
    //convert image to the 3 channel BGR
    image1 = imread(INPUT, 1);
    //convert image to the 1 channel grayscale
    image2 = imread(INPUT, 0);

    //show imag in it
    imshow("3 channel BGR", image1);
    imshow("1 channel GRAYSCALE ", image2);
    
    //write img in grayscale
    imwrite("result_GRAYSCALE.jpg", image2);

    ///////////////////////////////////////
    ////////////////phan b////////////////
    Mat image3=imread(INPUT,1);
    putText(image3, "B18DCDT003", Point(0, 50), FONT_HERSHEY_COMPLEX, 0.9, Scalar(255, 255, 255), 1);
    imwrite("DIPF2103B18DCDT003AS1012b.jpg", image3);
    imshow("B18DCDT003", image3);
    //////////////////////////////////////
 
    waitKey();
    return 0;
}