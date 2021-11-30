//#include "opencv2/imgproc.hpp"
//#include "opencv2/highgui.hpp"
//#include <iostream>
//#define input  "E:/hoc_tap/nam_4_ki_1/dip/img.jpg"
//
//using namespace cv;
//using namespace std;
//Mat src, erosion_dst, dilation_dst;
//int erosion_elem = 0;
//int erosion_size = 0;
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
//    cin >> erosion_elem >> erosion_size;
//    int erosion_type = 0;
//    if (erosion_elem == 0) { erosion_type = MORPH_RECT; }
//    else if (erosion_elem == 1) { erosion_type = MORPH_CROSS; }
//    else if (erosion_elem == 2) { erosion_type = MORPH_ELLIPSE; }
//    Mat element = getStructuringElement(erosion_type,
//        Size(2 * erosion_size + 1, 2 * erosion_size + 1),
//        Point(erosion_size, erosion_size));
//    erode(src, erosion_dst, element);
//    imshow("Erosion Demo", erosion_dst);
//    waitKey(0);
//    return 0;
//}
//
