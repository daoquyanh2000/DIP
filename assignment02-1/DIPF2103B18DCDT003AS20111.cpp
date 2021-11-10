///////////////////////////////////////////////////
//// 
//// ma nhom btl:		23
//// ten mon hoc:     xu ly anh
//// thong tin sv1:   Dao Quy Anh         - B18DCDT003    - 03 - B18CQDT03-B - daoquyanh13700@gmail.com
//// thong tin sv2:   Dang Hoang Giang    - B18DCDT059    - 04 - B18CQDT03-B - dgiang69@gmail.com
//// thong tin sv3:   Nguyen Huy Hung     - B18DCDT091    - 04 - B18CQDT03-B - nhuyhung146@gmail.com
//// 
//#include <iostream>
//#include "opencv2/imgproc.hpp"
//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/highgui.hpp"
//
//#define input  "E:/hoc_tap/nam_4_ki_1/dip/img.jpg"
//
//using namespace std;
//using namespace cv;
//int main(int argc, char** argv)
//{
//	Mat src = imread(input, IMREAD_COLOR);
//    if (src.empty())
//    {
//        printf(" Error opening image\n");
//        printf(" Usage:\n %s [image_name-- default lena.jpg] \n", argv[0]);
//        return EXIT_FAILURE;
//    }
//    Mat src_bilateral, src_median, src_gaussian, src_homogeneous;
//    imshow("Original Image", src);
//
//    //-------------------Homogeneous Blur-----------------------
//    blur(src, src_homogeneous, Size(5, 5), Point(-1, -1));
//    imshow("Homogeneous Blur", src_homogeneous);
//
//    //-------------------Gaussian Blur-----------------------
//    GaussianBlur(src, src_gaussian, Size(5, 5), 0, 0);
//    imshow("Gaussian Blur", src_gaussian);
//
//    //-------------------Median Blur-----------------------
//    medianBlur(src, src_median, 5);
//    imshow("Median Blur", src_median);
//
//    //-------------------Bilateral Blur-----------------------
//    bilateralFilter(src, src_bilateral, 5, 5 * 2, 5 / 2);
//    imshow("Bilateral Blur", src_bilateral);
//    waitKey();
//    return 0;
//}
