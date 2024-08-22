// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDIMAGEREPCACHEDSIZEDIMAGE_H
#define TSDIMAGEREPCACHEDSIZEDIMAGE_H


#import <Foundation/Foundation.h>


@interface TSDImageRepCachedSizedImage : NSObject {
    *CGImage mImageRef;
    *CGPath mImageMaskPath;
}


@property (nonatomic) BOOL imageHasAdjustmentsBakedImage; // ivar: mImageHasAdjustmentsBakedImage
@property (nonatomic) BOOL imageHasMaskBakedIn; // ivar: mImageHasMaskBakedIn
@property (nonatomic) *CGPath imageMaskPath;
@property (nonatomic) NSInteger imageOrientation; // ivar: mImageOrientation
@property (nonatomic) *CGImage imageRef;
@property (nonatomic) CGSize imageSize; // ivar: mImageSize


-(void)dealloc;


@end


#endif