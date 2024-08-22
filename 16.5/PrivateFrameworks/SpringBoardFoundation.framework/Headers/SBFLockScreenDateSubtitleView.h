// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLOCKSCREENDATESUBTITLEVIEW_H
#define SBFLOCKSCREENDATESUBTITLEVIEW_H

@class UIView, SBUILegibilityLabel, UIFont, _UILegibilitySettings, NSString;



@interface SBFLockScreenDateSubtitleView : UIView {
    SBUILegibilityLabel *_label;
}


@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (readonly, nonatomic) CGFloat baselineOffsetFromBottom;
@property (readonly, nonatomic) CGFloat baselineOffsetFromOrigin;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (retain, nonatomic) NSString *string;


+(CGFloat)scaledFontSize:(CGFloat)arg0 withMaximumFontSizeCategory:(id)arg1 ;
+(id)labelFont;
+(struct ? )labelFontMetrics;
-(CGFloat)interItemSpacing;
-(id)init;
-(id)initWithString:(id)arg0 accessoryView:(id)arg1 ;
-(struct CGRect )subtitleLabelFrame;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )subtitleLabelCharacterOverflowInsets;
-(void)_updateForCurrentSizeCategory;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif