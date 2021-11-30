//#include "opencv2/imgproc.hpp"
//#include "opencv2/highgui.hpp"
//#include <iostream>
//#define input  "E:/hoc_tap/nam_4_ki_1/dip/img.jpg"
//
//using namespace cv;
//using namespace std;
//Mat src, erosion_dst, dilation_dst;
//int dilation_elem = 0;
//int dilation_size = 0;
//int const max_elem = 2;
//int const max_kernel_size = 21;
//int main()
//{
//    Mat src = imread(input, IMREAD_COLOR);
//    if (src.empty())
//    {
//        printf(" Error opening image\n");
//        return EXIT_FAILURE;
//    }
//    printf("nhap Element(0-2) va Kernel size(0-21): ");
//    cin >> dilation_elem >> dilation_size;
//    int dilation_type = 0;
//    if (dilation_elem == 0) { dilation_type = MORPH_RECT; }
//    else if (dilation_elem == 1) { dilation_type = MORPH_CROSS; }
//    else if (dilation_elem == 2) { dilation_type = MORPH_ELLIPSE; }
//    Mat element = getStructuringElement(dilation_type,
//        Size(2 * dilation_size + 1, 2 * dilation_size + 1),
//        Point(dilation_size, dilation_size));
//    dilate(src, dilation_dst, element);
//    imshow("Dilation Demo", dilation_dst);
//    waitKey(0);
//    return 0;
//}
//
