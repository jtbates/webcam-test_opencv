PROJECT( webcam_proj )
FIND_PACKAGE( OpenCV REQUIRED )
ADD_EXECUTABLE( webcam webcam.c )
TARGET_LINK_LIBRARIES( webcam ${OpenCV_LIBS} )
