#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "IDZAQAudioPlayer.h"
#import "IDZAudioDecoder.h"
#import "IDZAudioPlayer.h"
#import "IDZOggVorbisFileDecoder.h"

FOUNDATION_EXPORT double OggPlayerVersionNumber;
FOUNDATION_EXPORT const unsigned char OggPlayerVersionString[];

