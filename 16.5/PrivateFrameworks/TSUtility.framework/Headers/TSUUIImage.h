// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUUIIMAGE_H
#define TSUUIIMAGE_H

@class UIImage;


#import "TSUImage.h"

@interface TSUUIImage : TSUImage {
    UIImage *mUIImage;
}




+(id)imageNamed:(id)arg0 inBundle:(id)arg1 ;
-(CGFloat)scale;
-(NSInteger)imageOrientation;
-(id)UIImage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithUIImage:(id)arg0 ;
-(struct CGImage *)CGImage;
-(struct CGImage *)CGImageForSize:(struct CGSize )arg0 ;
-(struct CGSize )size;
-(void)dealloc;


@end


#endif