// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDFRAMEIMAGECACHEENTRY_H
#define TSDFRAMEIMAGECACHEENTRY_H


#import <Foundation/Foundation.h>

#import "TSDFrameSpec.h"

@interface TSDFrameImageCacheEntry : NSObject {
    ? mImages;
}


@property (readonly, nonatomic) CGFloat assetScale; // ivar: mAssetScale
@property (readonly, nonatomic) TSDFrameSpec *frameSpec; // ivar: mFrameSpec
@property (readonly, nonatomic) CGSize size; // ivar: mSize
@property (readonly, nonatomic) CGFloat viewScale; // ivar: mViewScale


-(id)initWithFrame:(id)arg0 size:(struct CGSize )arg1 viewScale:(CGFloat)arg2 ;
-(int)p_cacheIndexForCALayer:(BOOL)arg0 mask:(BOOL)arg1 ;
-(struct CGImage *)newImageForCALayer:(BOOL)arg0 mask:(BOOL)arg1 ;
-(void)dealloc;
-(void)setImage:(struct CGImage *)arg0 forCALayer:(BOOL)arg1 mask:(BOOL)arg2 ;


@end


#endif