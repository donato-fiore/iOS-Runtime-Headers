// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGFACEKITTRACKER_H
#define VGFACEKITTRACKER_H


#import <Foundation/Foundation.h>


@interface VGFaceKitTracker : NSObject {
    *CVAFaceTracking _faceKit;
    *__CFDictionary _semantics;
    *__CFDictionary _quadSemantics;
}




-(BOOL)loadFaceKitSemantics;
-(BOOL)loadQuadFaceKitSemantics;
-(BOOL)processWithCaptureData:(id)arg0 callback:(id)arg1 ;
-(id)init;
-(struct __CFDictionary *)buildInputDictionaryWithCaptureData:(id)arg0 ;
-(struct __CFDictionary *)quadSemantics;
-(struct __CFDictionary *)semantics;
-(void)dealloc;


@end


#endif