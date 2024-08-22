// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTSWITCHERSHADOWVIEW_H
#define UIINPUTSWITCHERSHADOWVIEW_H

@class NSArray;


#import "UIView.h"
#import "_UIBackdropView.h"
#import "UIKeyboardMenuView.h"

@interface UIInputSwitcherShadowView : UIView

@property (retain, nonatomic) _UIBackdropView *blurView; // ivar: _blurView
@property (retain, nonatomic) NSArray *gradientColors; // ivar: m_gradientColors
@property (nonatomic) CGRect keyRect; // ivar: _keyRect
@property (nonatomic) UIKeyboardMenuView *menu; // ivar: _menu
@property (nonatomic) int mode; // ivar: m_mode
@property (nonatomic) CGFloat pointerOffset; // ivar: m_pointerOffset


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif