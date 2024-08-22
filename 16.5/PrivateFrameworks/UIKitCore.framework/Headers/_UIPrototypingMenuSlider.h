// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPROTOTYPINGMENUSLIDER_H
#define _UIPROTOTYPINGMENUSLIDER_H



#import "UISlider.h"
#import "UILabel.h"
#import "UIImageView.h"
#import "_UIPortalView.h"
#import "UIView.h"

@interface _UIPrototypingMenuSlider : UISlider {
    BOOL _didBringKnobToFront;
}


@property (retain, nonatomic) UILabel *currentValueLabel; // ivar: _currentValueLabel
@property (retain, nonatomic) UIImageView *knobBGView; // ivar: _knobBGView
@property (readonly, nonatomic) CGPoint knobCenter;
@property (retain, nonatomic) _UIPortalView *knobPortal; // ivar: _knobPortal
@property (retain, nonatomic) UIView *knobView; // ivar: _knobView
@property (nonatomic) CGFloat stepSize; // ivar: _stepSize


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct UIEdgeInsets )_thumbHitEdgeInsets;
-(void)decrement;
-(void)increment;
-(void)layoutSubviews;
-(void)setValue:(float)arg0 animated:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif