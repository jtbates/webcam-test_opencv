#include <cv.h>
#include <highgui.h>

int main ( int argc, char **argv )
{
  cvNamedWindow( "Webcam", CV_WINDOW_AUTOSIZE );
  CvCapture* capture;
  IplImage* frame;

  if(argc==1) {
    capture = cvCreateCameraCapture(0);
  } else {
    capture = cvCreateFileCapture( argv[1] );
  }
  assert( capture != NULL );

  while(1) {
    frame = cvQueryFrame( capture );
    if( !frame ) break;
    cvShowImage( "Webcam" , frame );
    char c = cvWaitKey(33);
    if( c == 27 ) break;
  }
  
  cvReleaseCapture( &capture );
  cvDestroyWindow( "Webcam" );
}
