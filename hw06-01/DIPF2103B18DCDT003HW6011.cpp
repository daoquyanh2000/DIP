//#include "opencv2/imgcodecs.hpp"
//#include "opencv2/highgui.hpp"
//#include "opencv2/imgproc.hpp"
//#include <iostream>
//using namespace std;
//using namespace cv;
//
//Mat input_image, input_filter;
//Mat gray_scale_image(input_image.rows, input_image.cols, CV_8UC1);
//Mat gray_scale_filter(input_filter.rows, input_filter.cols, CV_8UC1);
//#define input0  "E:/hoc_tap/nam_4_ki_1/dip/img.jpg"
//#define input1  "E:/hoc_tap/nam_4_ki_1/dip/img_template.jpg"
//
//int main()
//{
//    //load source img and template img
//    input_image = imread(input0);
//    input_filter = imread(input1);
//
//    imshow("Input Image", input_image);
//    imshow("Input Template", input_filter);
//    if (input_image.empty() || input_filter.empty())
//    {
//        std::cout << "Can't find image" << std::endl;
//        return -1;
//    }
//    cvtColor(input_image, gray_scale_image, COLOR_BGR2GRAY);
//    cvtColor(input_filter, gray_scale_filter, COLOR_BGR2GRAY);
//
//    imshow("GrayScale Image", gray_scale_image);
//    imshow("GrayScale Filter", gray_scale_filter);
//
//    Mat final_image(gray_scale_image.rows - gray_scale_filter.rows + 1, gray_scale_image.cols - gray_scale_filter.cols + 1, CV_8UC1);
//    matchTemplate(gray_scale_image, gray_scale_filter, final_image, 3);
//    normalize(final_image, final_image, 0, 1, NORM_MINMAX, -1, Mat());
//
//    /// Localizing the best match with minMaxLoc
//    double min_val, max_val;
//    Point min_loc, max_loc, match_loc;
//    minMaxLoc(final_image, &min_val, &max_val, &min_loc, &max_loc, Mat());
//    // For SQDIFF and SQDIFF_NORMED, the best matches are lower values. For all the other methods, the higher the better
//    match_loc = max_loc;
//    std::cout << match_loc << std::endl;
//    /// Show what you got
//    rectangle(input_image,
//        match_loc,
//        Point(match_loc.x + gray_scale_filter.cols, match_loc.y + gray_scale_filter.rows),
//        Scalar::all(0),
//        2,
//        8,
//        0);
//    rectangle(final_image,
//        match_loc,
//        Point(match_loc.x + gray_scale_filter.cols, match_loc.y + gray_scale_filter.rows),
//        Scalar::all(0),
//        2,
//        8,
//        0);
//    imshow("Final Image", input_image);
//    cv::waitKey();
//    return 0;
//}   
