/**
 * @file basic_2b.cpp
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

  // Create a window  
  cv::namedWindow( "Basic_2", cv::WINDOW_NORMAL );
  
  // Create a Trackbar in the window just created
  int tbVal = 25;
  int tbMaxVal = 60;
  void *pImg = &img;
  cv::createTrackbar( "Tb1", "Basic_2", &tbVal, tbMaxVal, tbCallback, pImg );

  // Display original image
  imshow( "Basic_2", img );

  // Wait until a key is pressed
  cv::waitKey(0);

  return 0;
  
}

/**
 * @function tbCallback
 */
void tbCallback( int _val, void* _data ) {

  // Cast the void pointer to Mat*
  cv::Mat* pImg; 
  pImg = static_cast<cv::Mat*>(_data);

  // Use the Trackbar value and _data to modify the image displayed
  cv::Mat img_modified;
  img_modified = *pImg + cv::Scalar(_val, _val, _val);

  // Display the modified image
  imshow( "Basic_2", img_modified );
  
}
