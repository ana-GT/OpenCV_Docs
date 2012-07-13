cmake_minimum_required ( VERSION 2.8 )
project( Tutorials )

set( CMAKE_INSTALL_PREFIX /usr/local )
set( CMAKE_CXX_COMPILER "g++-4.4" )
set( CMAKE_CXX_FLAGS "-L /usr/local/lib" )

include_directories( .
				     /usr/local/include )


set ( SRC_FILES T2_matrix.cpp )
set ( HDR_FILES )
set ( OpenCV_LIBS opencv_core
				  opencv_highgui )

add_executable ( Code ${SRC_FILES} ${HDR_FILES} )
target_link_libraries( Code ${OpenCV_LIBS} )
