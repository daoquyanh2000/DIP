#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>
#define input  "E:/hoc_tap/nam_4_ki_1/dip/img.jpg"
using namespace cv;
using namespace std;
Mat src, dst;
int morph_elem = 0;
int morph_size = 0;
int morph_operator = 0;
int const max_operator = 4;
int const max_elem = 2;
int const max_kernel_size = 21;
const char* window_name = "Morphology Transformations Demo";
int main(int argc, char** argv)
{
    Mat src = imread(input, IMREAD_COLOR);
    if (src.empty())
    {
        printf(" Error opening image\n");
        return EXIT_FAILURE;
    }

    printf(" nhap Operator:\n 0: Opening - 1 : Closing: ");
    cin >> morph_operator;
    int operation = morph_operator + 2;
    printf("nhap Element(0-2) va Kernel size(0-21): ");
    cin >> morph_elem >> morph_size;  
    Mat element = getStructuringElement(morph_elem, Size(2 * morph_size + 1, 2 * morph_size + 1), Point(morph_size, morph_size));
    morphologyEx(src, dst, operation, element);
    imshow(window_name, dst);
    waitKey(0);
    return 0;
}
