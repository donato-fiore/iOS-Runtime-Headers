// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILEGIBILITYIMAGESET_H
#define _UILEGIBILITYIMAGESET_H


#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UILegibilityImageSet : NSObject

@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage


+(id)imageFromImage:(id)arg0 withShadowImage:(id)arg1 ;
-(id)imageSetWithOrientation:(NSInteger)arg0 ;
-(id)initWithImage:(id)arg0 shadowImage:(id)arg1 ;
-(void)dealloc;


@end


#endif