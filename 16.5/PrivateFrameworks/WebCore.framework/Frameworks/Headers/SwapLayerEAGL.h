// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWAPLAYEREAGL_H
#define SWAPLAYEREAGL_H

@class CAEAGLLayer, EAGLContext;



@interface SwapLayerEAGL : CAEAGLLayer {
    EAGLContext *mDisplayContext;
    BOOL initialized;
    ? mSwapState;
    *void mFunctions;
    unsigned int mReadFramebuffer;
}




-(id)initWithSharedState:(struct SharedSwapState *)arg0 withContext:(id)arg1 withFunctions:(*void)arg2 ;
-(void)display;


@end


#endif