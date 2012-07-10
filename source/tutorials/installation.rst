.. _installation:

Installation in Debian (64 bits)
********************************

#. OpenCV has many dependencies. For Debian Squeeze (64 bits), 
   there are two libraries in particular that must be 
   compiled with the ``--enable-shared`` option. Otherwise, installation
   errors may occur. These dependencies are:

#. **X264**

   * Download the source code from  `Debian backports <http://packages.debian.org/source/squeeze-backports/x264>`_
   * Unzip and ``cd`` the folder.
   * For 64-bits systems, the flag ``-fPIC`` is required for shared libraries. In your terminal, ``configure`` with the following options 
  	
     .. code-block:: bash
	
	./configure --enable-shared --enable-pic
	make
	sudo make install
 		
#. **FFMPEG**

   * Download the `source code for FFMPEG <http://packages.debian.org/source/squeeze/ffmpeg>`_
   * Here also ``-fPIC`` is required. However, the option ``--enable-shared`` takes care of it. So:

     .. code-block:: bash

	./configure --enable-gpl --enable-libtheora --enable-libvorbis --enable-libx264 --enable-libxvid --enable-nonfree --enable-postproc --enable-version3 --enable-x11grab --enable-shared
	make
	sudo make install

   .. warning::
      
      If you don't follow the steps above, it is likely that you will get an error similar to this:

      .. code-block:: bash
	
         [ 15%] Building CXX object modules/highgui/CMakeFiles/opencv_highgui.dir/src/bitstrm.cpp.o
         Linking CXX shared library ../../lib/libopencv_highgui.so
         /usr/bin/ld: /usr/local/lib/libavcodec.a(avpacket.o): relocation R_X86_64_32S against `av_destruct_packet' can not be used when making a shared object; recompile with -fPIC
         /usr/local/lib/libavcodec.a: could not read symbols: Bad value

#. Install any other missing dependencies.

#. Download the latest OpenCV source code from :opencv_svn:`SVN <>`
#. Unzip and create a build directory:
   
   .. code-block:: bash

      cd OpenCV-2.4.1 
      mkdir build
      cd build

#. Run CMake with your favorite options:

   .. code-block:: bash

      cmake -DWITH_OPENGL=ON -DWITH_QT=ON ..

#. Build and install

   .. code-block:: bash

      make
      sudo make install

Additional Resources for Ubuntu users
======================================

#. A similar guide for installing OpenCV 2.4.1 in Ubuntu 12.04 can be found `here <http://www.ozbotz.org/opencv-installation/>`_
#. Also, you may wish to take a look at this `Troubleshooting guide <http://www.samontab.com/web/2012/06/installing-opencv-2-4-1-ubuntu-12-04-lts/>`_   
