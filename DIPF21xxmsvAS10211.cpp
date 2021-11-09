/*


*/

#include <iostream>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
	string path = "D:/VS_Projects/resources/img.png";
	Mat src = imread(path);
	
	imshow("IMG", src);
	
	waitKey();
	return 0;
}