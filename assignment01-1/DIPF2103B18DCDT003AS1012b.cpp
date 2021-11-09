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


int main() {
    ////////////////phan c////////////////
    VideoCapture cap;
    //open camera
    cap.open(0);
    // Check VideoCapture documentation.
    if (cap.isOpened() == false)
    {
        cout << "Cannot open the video file" << endl;
        cin.get(); //wait for any key press
        return -1;
    }
    int count0 = 0,count1=0;
    while (true)
    {
        Mat frame;
        bool bSuccess = cap.read(frame); // read a new frame from video 

        //Breaking the while loop at the end of the video
        if (bSuccess == false)
        {
            cout << "Found the end of the video" << endl;
            break;
        }
        string file_name = "DIPF2103B18DCDT003AS1012c";
        string file_type= ".jpg";
        string frame_name = file_name +to_string(int(0))+ to_string(count1) + file_type;
        //voi moi 5000 frame thi ta in ra 1 frame 
        if (count0 % 5000 == 0) {
            imwrite(frame_name,frame);
            count1++;
        }
        count0++;
    }

    return 0;
}   
