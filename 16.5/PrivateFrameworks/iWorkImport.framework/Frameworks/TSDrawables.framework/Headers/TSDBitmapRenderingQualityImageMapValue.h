// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDBITMAPRENDERINGQUALITYIMAGEMAPVALUE_H
#define TSDBITMAPRENDERINGQUALITYIMAGEMAPVALUE_H


#import <Foundation/Foundation.h>


@interface TSDBitmapRenderingQualityImageMapValue : NSObject {
    *CGImage mDegradedImageRef;
}


@property (readonly, nonatomic) CGSize maxSize; // ivar: mMaxSize


-(struct CGImage *)degradedImageRefForProvider:(id)arg0 quality:(int)arg1 canvasScale:(CGFloat)arg2 ;
-(struct CGImage *)getDegradedImageRefFromProvider:(id)arg0 quality:(int)arg1 canvasScale:(CGFloat)arg2 ;
-(void)addSize:(struct CGSize )arg0 ;
-(void)dealloc;


@end


#endif