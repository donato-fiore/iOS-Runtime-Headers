// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIIMAGEASYNCCGIMAGECONTENT_H
#define _UIIMAGEASYNCCGIMAGECONTENT_H

@class UIImageCGImageContent;


#import "_UIOldCGImageDecompressor.h"

@interface _UIImageAsyncCGImageContent : UIImageCGImageContent {
    NSInteger _orientation;
    _UIOldCGImageDecompressor *_decompressor;
}


@property BOOL finishedDecompressing; // ivar: _finishedDecompressing
@property (readonly) NSInteger orientation;


-(BOOL)isDecompressing;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithData:(id)arg0 immediateLoadWithMaxSize:(struct CGSize )arg1 scale:(CGFloat)arg2 renderingIntent:(NSUInteger)arg3 cache:(BOOL)arg4 ;
-(struct CGImage *)CGImage;


@end


#endif