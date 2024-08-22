// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISTACKEDIMAGESHADOWIMAGEKEY_H
#define _UISTACKEDIMAGESHADOWIMAGEKEY_H


#import <Foundation/Foundation.h>


@interface _UIStackedImageShadowImageKey : NSObject {
    CGFloat _shadowRadius;
    CGFloat _cornerRadius;
    BOOL _isContinuousCorner;
    CGFloat _white;
    CGFloat _alpha;
}




+(id)keyWithShadowRadius:(CGFloat)arg0 cornerRadius:(CGFloat)arg1 isContinuousCorner:(BOOL)arg2 white:(CGFloat)arg3 alpha:(CGFloat)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif