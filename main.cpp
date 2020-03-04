#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

  /*Mat image  = imread("test.png");
  if (image.empty()){
    cout << "couldn't open img" << endl;
  }
  namedWindow("test window");
  imshow("test window", image);
  waitKey(0);
  destroyWindow("test window");*/


int main(int argc, char *argv[]){
  VideoCapture cap(0);
  if (cap.isOpened() == false) cout << "couldn't open camera" << endl;
  double dWidth = cap.get(CAP_PROP_FRAME_WIDTH);
  double dHeight = cap.get(CAP_PROP_FRAME_HEIGHT);
  cout << "resolution of camera: " << dWidth << " " << dHeight << endl;
  string window_name = "Test Camera";
  namedWindow(window_name);
  while (true){
    Mat frame;
    bool bSuccess = cap.read(frame);
    if (bSuccess == false) cout << "error bsuccess" << endl;
    imshow(window_name, frame);
    if (waitKey(10) == 27) break;
  }
  return 0;
}
