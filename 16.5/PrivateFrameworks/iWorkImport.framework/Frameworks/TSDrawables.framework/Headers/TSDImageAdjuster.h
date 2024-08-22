// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDIMAGEADJUSTER_H
#define TSDIMAGEADJUSTER_H


#import <Foundation/Foundation.h>

#import "TSDImageAdjustments.h"

@interface TSDImageAdjuster : NSObject {
    TSDImageAdjustments *_imageAdjustments;
}




-(?)newFilteredImageForImageenhancedImage;
-(id)initWithImageAdjustments:(id)arg0 ;
-(struct CGImage *)p_newImageFromCIImage:(id)arg0 underlyingImage:(struct CGImage *)arg1 ;


@end


#endif