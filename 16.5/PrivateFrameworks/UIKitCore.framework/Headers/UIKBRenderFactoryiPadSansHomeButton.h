// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORYIPADSANSHOMEBUTTON_H
#define UIKBRENDERFACTORYIPADSANSHOMEBUTTON_H



#import "UIKBRenderFactoryiPad.h"

@interface UIKBRenderFactoryiPadSansHomeButton : UIKBRenderFactoryiPad



-(BOOL)_displaysAsControlKeyStyle:(id)arg0 ;
-(BOOL)iPadSansHomeButtonLayout;
-(CGFloat)controlKeyFontSize;
-(CGFloat)dualStringKeyBottomFontSize;
-(CGFloat)dualStringKeyTopFontSize;
-(CGFloat)keyCornerRadius;
-(CGFloat)stringKeyFontSize;
-(CGFloat)symbolImageControlKeyFontSize;
-(id)_traitsForKey:(id)arg0 onKeyplane:(id)arg1 ;
-(id)displayContentsForKey:(id)arg0 ;
-(struct CGPoint )dualStringKeyBottomTextOffset;
-(struct CGPoint )dualStringKeyTopTextOffset;
-(struct CGPoint )iPadFudgeControlKeyOffset;
-(struct CGPoint )symbolImageControlKeyOffset;
-(void)_customizeGeometry:(id)arg0 forKey:(id)arg1 contents:(id)arg2 ;


@end


#endif