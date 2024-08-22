// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARCUSTOMIZATIONCHICLETANCHORVIEW_H
#define _UIBARCUSTOMIZATIONCHICLETANCHORVIEW_H



#import "UIView.h"
#import "_UIBarCustomizationChiclet.h"

@interface _UIBarCustomizationChicletAnchorView : UIView

@property (retain, nonatomic) _UIBarCustomizationChiclet *chiclet; // ivar: _chiclet
@property (nonatomic) CGFloat contentPadding; // ivar: _contentPadding
@property (nonatomic) BOOL debugUIEnabled; // ivar: _debugUIEnabled
@property (nonatomic) BOOL jiggling; // ivar: _jiggling
@property (retain, nonatomic) UIView *positionAdaptorView; // ivar: _positionAdaptorView
@property (nonatomic) NSInteger state; // ivar: _state


+(id)_jitterRotationAnimationWithAmount:(CGFloat)arg0 ;
+(id)_jitterRotationAnimationWithStrength:(CGFloat)arg0 ;
+(id)_jitterXTranslationAnimationWithAmount:(CGFloat)arg0 ;
+(id)_jitterXTranslationAnimationWithStrength:(CGFloat)arg0 ;
+(id)_jitterYTranslationAnimationWithAmount:(CGFloat)arg0 ;
+(id)_jitterYTranslationAnimationWithStrength:(CGFloat)arg0 ;
-(BOOL)isUserInteractionEnabled;
-(id)description;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif