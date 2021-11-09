/////////////////////////////////////////////////
// 
// ma nhom btl:		23
// ten mon hoc:     xu ly anh
// thong tin sv1:   Dao Quy Anh         - B18DCDT003    - 03 - B18CQDT03-B - daoquyanh13700@gmail.com
// thong tin sv2:	Dang Hoang Giang    - B18DCDT059    - 04 - B18CQDT03-B - dgiang69@gmail.com
// thong tin sv3:   Nguyen Huy Hung     - B18DCDT091    - 04 - B18CQDT03-B - nhuyhung146@gmail.com
// 
/////////////////////////////////////////////////



#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;
#define input "E:/hoc_tap/nam_4_ki_1/dip/img.png"
Mat src, src_gray;
Mat dst, detected_edges;
int lowThreshold = 0;
const int max_lowThreshold = 100;
int ratio1 = 3;
const int kernel_size = 3;
const char* window_name = "Edge Map";
static void CannyThreshold(int, void*)
{
    blur(src_gray, detected_edges, Size(3, 3));
    Canny(detected_edges, detected_edges, lowThreshold, lowThreshold * ratio1 , kernel_size);
    dst = Scalar::all(0);
    src.copyTo(dst, detected_edges);
    imshow(window_name, dst);
}
int main(int argc, char** argv)
{
    CommandLineParser parser(argc, argv, "{@input | fruits.jpg | input image}");
    src = imread((input), IMREAD_COLOR); // Load an image
    if (src.empty())
    {
        std::cout << "Could not open or find the image!\n" << std::endl;
        std::cout << "Usage: " << argv[0] << " <Input image>" << std::endl;
        return -1;
    }
    dst.create(src.size(), src.type());
    cvtColor(src, src_gray, COLOR_BGR2GRAY);
    namedWindow(window_name, WINDOW_AUTOSIZE);
    createTrackbar("Min Threshold:", window_name, &lowThreshold, max_lowThreshold, CannyThreshold);
    CannyThreshold(0, 0);
    waitKey(0);
    return 0;
}