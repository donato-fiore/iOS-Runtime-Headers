// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVISUALEFFECTVIEWCORNERMASK_H
#define _UIVISUALEFFECTVIEWCORNERMASK_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIImage.h"

@interface _UIVisualEffectViewCornerMask : NSObject <NSCopying>

 {
    UIImage *_image;
    CGRect _imageCenter;
    NSUInteger _appliedCorners;
    BOOL _continuous;
    BOOL _effectsEdges;
}


@property (readonly, nonatomic) CGFloat radius; // ivar: _radius


+(id)continuousCornerMaskWithRadius:(CGFloat)arg0 ;
+(id)cornerMaskWithRadius:(CGFloat)arg0 ;
+(id)cornerMaskWithRadius:(CGFloat)arg0 continuous:(BOOL)arg1 cornerMask:(NSUInteger)arg2 ;
+(id)imageCornerMaskWithImage:(id)arg0 radius:(CGFloat)arg1 ;
+(void)_applyZeroMaskToLayer:(id)arg0 ;
-(BOOL)_isCornerWithRadius:(CGFloat)arg0 continuous:(BOOL)arg1 mask:(NSUInteger)arg2 ;
-(BOOL)cornersAreContinuous;
-(BOOL)isEqual:(id)arg0 ;
-(id)_clone;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cornerMaskAppliedToCorners:(NSUInteger)arg0 ;
-(id)cornerMaskEffectingEdges:(BOOL)arg0 ;
-(id)init;
-(void)_applyToLayer:(id)arg0 ;


@end


#endif