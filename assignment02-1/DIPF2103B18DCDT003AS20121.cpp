/////////////////////////////////////////////////
// 
// ma nhom btl:		23
// ten mon hoc:     xu ly anh
// thong tin sv1:   Dao Quy Anh         - B18DCDT003    - 03 - B18CQDT03-B - daoquyanh13700@gmail.com
// thong tin sv2:   Dang Hoang Giang    - B18DCDT059    - 04 - B18CQDT03-B - dgiang69@gmail.com
// thong tin sv3:   Nguyen Huy Hung     - B18DCDT091    - 04 - B18CQDT03-B - nhuyhung146@gmail.com
// 
/////////////////////////////////////////////////
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

#define input  "E:/hoc_tap/nam_4_ki_1/dip/img.jpg"
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
    Mat src = imread(input, IMREAD_COLOR);
    if (src.empty())
    {
        cout << "Could not open or find the image!\n" << endl;
        cout << "Usage: " << argv[0] << " <Input image>" << endl;
        return -1;
    }
    cvtColor(src, src, COLOR_BGR2GRAY);
    Mat dst;
    equalizeHist(src, dst);
    imshow("Source image", src);
    imshow("Equalized Image", dst);
    waitKey();
    return 0;
}