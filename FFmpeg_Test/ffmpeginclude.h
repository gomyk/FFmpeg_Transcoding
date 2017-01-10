/*
 *  Include ffmpeg files
 */


#pragma once

#ifndef __STDC_CONSTANT_MACROS
  #define __STDC_CONSTANT_MACROS
#endif

 ///> Include FFMpeg
extern "C" {
#include <libavformat/avformat.h>
}

///> Library Link On Windows System
#pragma comment( lib, "avformat.lib" )	
#pragma comment( lib, "avutil.lib" )
#pragma comment( lib, "avcodec.lib" )
