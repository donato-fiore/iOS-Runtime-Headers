// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBSHADOWEFFECT_H
#define UIKBSHADOWEFFECT_H

@class NSString;
@protocol UIKBRenderEffect;

#import <Foundation/Foundation.h>

#import "UIKBGradient.h"

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect>

 {
    NSString *_colorName;
}


@property (nonatomic) UIEdgeInsets concaveInsets; // ivar: _concaveInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIKBGradient *gradient;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets insets; // ivar: _insets
@property (readonly, nonatomic) BOOL isValid;
@property (nonatomic) CGSize offset; // ivar: _offset
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (nonatomic) CGFloat weight; // ivar: _weight


+(id)effectWithColor:(id)arg0 offset:(struct CGSize )arg1 insets:(struct UIEdgeInsets )arg2 weight:(CGFloat)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColor:(id)arg0 offset:(struct CGSize )arg1 insets:(struct UIEdgeInsets )arg2 weight:(CGFloat)arg3 ;
-(struct CGColor *)CGColor;
-(void)renderEffectWithRenderer:(id)arg0 traits:(id)arg1 ;


@end


#endif