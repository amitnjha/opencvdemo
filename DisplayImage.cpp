#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;
int main(int argc, char** argv )
{
  
  VideoCapture cap(0);
  cap.open(0);
  if(!cap.isOpened()){
    cout << "Error Opening camera" << endl; 
  }


  return 0;

}
  /*
  if ( argc != 2 )
    {
      printf("usage: DisplayImage.out <Image_Path>\n");
      return -1;
    }
  Mat image;
  image = imread( argv[1], 1 );
  if ( !image.data )
    {
      printf("No image data \n");
      return -1;
    }
  namedWindow("Display Image", WINDOW_AUTOSIZE );
  imshow("Display Image", image);
  waitKey(0);
  return 0;*/
//}
