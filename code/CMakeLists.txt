cmake_minimum_required ( VERSION 2.8 )
project( Tutorials )

set( CMAKE_INSTALL_PREFIX /usr/local )
set( CMAKE_CXX_COMPILER "g++-4.4" )
set( CMAKE_CXX_FLAGS "-L /usr/local/lib" )

include_directories( .
				     /usr/local/include )


set ( SRC_FILES basic_1.cpp )
set ( HDR_FILES )
set ( OpenCV_LIBS opencv_core
				  opencv_highgui
                  opencv_nonfree
                  opencv_features2d )

#add_executable ( Code ${SRC_FILES} ${HDR_FILES} )
#target_link_libraries( Code ${OpenCV_LIBS} )
add_executable ( SURF_Descriptor SURF_Descriptor.cpp )
target_link_libraries( SURF_Descriptor ${OpenCV_LIBS} )
