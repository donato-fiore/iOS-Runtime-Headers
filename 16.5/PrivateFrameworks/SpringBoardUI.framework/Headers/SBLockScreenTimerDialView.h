// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENTIMERDIALVIEW_H
#define SBLOCKSCREENTIMERDIALVIEW_H

@class UIView, SBUILegibilityView, NSString, UIFont, _UILegibilitySettings;
@protocol SBUILegibility;



@interface SBLockScreenTimerDialView : UIView <SBUILegibility>

 {
    SBUILegibilityView *_dialView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly) Class superclass;


-(id)_newDialViewConfiguredForSettingsAndFont;
-(id)initWithSymbolFont:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif