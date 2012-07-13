/**
 * @file T2_matrix
 * @author A. Huaman
 * @date 2012-07-12
 */
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

/**
 * @function main
 */
int main( int argc, char* argv[] ) {

	// Create a matrix initialized to zeros (black)
	cv::Mat m = cv::Mat::zeros( 300, 400, CV_8UC3 );

	// Set some matrix elements to green
	cv::Mat roi_green( m, cv::Rect( 100, 75, 200, 150) );
	roi_green = cv::Scalar( 0, 255, 0 );   

	// Set some matrix elements to red
	cv::Mat roi_red( m, cv::Rect( 150, 100, 100, 100) );
	roi_red = cv::Scalar( 0, 0, 255 );

	// Create a named window
	cv::namedWindow( "Test", cv::WINDOW_AUTOSIZE );

	// Display
	imshow( "Test", m );

	// Wait until a key is pressed
	cv::waitKey(0);

	 return 0;	
} 

