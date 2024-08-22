// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBDIVOTEDEFFECT_H
#define UIKBDIVOTEDEFFECT_H

@class NSString;
@protocol UIKBRenderEffect;

#import <Foundation/Foundation.h>

#import "UIKBGradient.h"

@interface UIKBDivotedEffect : NSObject <UIKBRenderEffect>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIKBGradient *gradient;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL renderUnder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (nonatomic) CGFloat weight; // ivar: _weight


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGColor *)CGColor;
-(void)renderEffectWithRenderer:(id)arg0 traits:(id)arg1 ;


@end


#endif