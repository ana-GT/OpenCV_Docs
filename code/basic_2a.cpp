/**
 * @file basic_2a.cpp
 * @author A. Huaman
 * @date July 12th, 2012
 */

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include <stdio.h>

// Function declaration
void tbCallback( int _val, void* _data );

/**
 * @function main
 */
int main( int argc, char* argv[] ) {
  
  // Create a Mat object and read an image 
  cv::Mat img;
  img = cv::imread( argv[1], -1 );
  
  cv::namedWindow( "Basic_2", cv::WINDOW_NORMAL );
  
  // Create a Trackbar
  int tbVal = 30;
  int tbMaxVal = 60;
  cv::createTrackbar( "Tb1", "Basic_2", &tbVal, tbMaxVal, tbCallback );

  // Display
  imshow( "Basic_2", img );

  // Wait until a key is pressed
  cv::waitKey(0);

  return 0;
  
}

/**
 * @function tbCallback
 */
void tbCallback( int _val, void* _data ) {
  printf(" --> Trackbar is %d \n", _val );
}
