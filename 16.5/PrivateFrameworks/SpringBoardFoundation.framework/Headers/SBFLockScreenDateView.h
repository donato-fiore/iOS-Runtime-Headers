// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLOCKSCREENDATEVIEW_H
#define SBFLOCKSCREENDATEVIEW_H

@class UIView, SBUILegibilityLabel, NSTimeZone, UIFont, NSString, NSDate, _UILegibilitySettings, CSProminentDisplayViewController, UIColor, BSUIVibrancyConfiguration;


#import "SBFLockScreenDateSubtitleDateView.h"
#import "SBFLockScreenDateSubtitleView.h"

@interface SBFLockScreenDateView : UIView {
    SBUILegibilityLabel *_timeLabel;
    CGFloat _timeAlpha;
    CGFloat _subtitleAlpha;
    SBFLockScreenDateSubtitleDateView *_dateSubtitleView;
    UIView *_activeSubtitleView;
    NSTimeZone *_timeZone;
}


@property (nonatomic) CGFloat alignmentPercent; // ivar: _alignmentPercent
@property (retain, nonatomic) SBFLockScreenDateSubtitleView *customSubtitleView; // ivar: _customSubtitleView
@property (copy, nonatomic) UIFont *customTimeFont; // ivar: _customTimeFont
@property (readonly, nonatomic) ? customTimeMetrics; // ivar: _customTimeMetrics
@property (copy, nonatomic) NSString *customTimeNumberingSystem; // ivar: _customTimeNumberingSystem
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) CGFloat dateToTimeStretch; // ivar: _dateToTimeStretch
@property (retain, nonatomic) UIView *inlineComplicationView; // ivar: _inlineComplicationView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat maximumSubtitleWidth; // ivar: _maximumSubtitleWidth
@property (retain, nonatomic) CSProminentDisplayViewController *prominentDisplayViewController; // ivar: _prominentDisplayViewController
@property (nonatomic) CGRect restingFrame; // ivar: _restingFrame
@property (nonatomic) BOOL restrictsVibrancy; // ivar: _restrictsVibrancy
@property (readonly, nonatomic) CGFloat subtitleAlpha;
@property (readonly, nonatomic) CGFloat subtitleBaselineOffsetFromOrigin;
@property (nonatomic, getter=isSubtitleHidden) BOOL subtitleHidden;
@property (nonatomic) CGFloat subtitleLegibilityStrength; // ivar: _subtitleLegibilityStrength
@property (nonatomic) BOOL subtitleOnTop; // ivar: _subtitleOnTop
@property (retain, nonatomic) UIColor *textColor; // ivar: _overrideTextColor
@property (readonly, nonatomic) CGFloat timeAlpha;
@property (readonly, nonatomic) CGFloat timeBaselineOffsetFromOrigin;
@property (nonatomic) CGFloat timeLegibilityStrength; // ivar: _timeLegibilityStrength
@property (nonatomic) BOOL useCompactDateFormat; // ivar: _useCompactDateFormat
@property (nonatomic) BOOL useLandscapeTimeFontSize; // ivar: _useLandscapeTimeFontSize
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration; // ivar: _vibrancyConfiguration


+(CGFloat)defaultHeight;
+(id)timeFont;
+(struct ? )metricsForFont:(id)arg0 ;
+(struct ? )timeFontMetrics;
-(id)_effectiveTextColor;
-(id)_timeLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_subtitleViewFrameForView:(id)arg0 alignmentPercent:(CGFloat)arg1 ;
-(struct CGRect )_timeLabelFrameForAlignmentPercent:(CGFloat)arg0 ;
-(struct CGRect )chargingVisualInformationTimeFrame;
-(struct CGRect )chargingVisualInformationTimeSubtitleFrame;
-(struct CGRect )presentationExtentForAlignmentPercent:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )_cachedGlyphInsetsTimeFontForString:(id)arg0 ;
-(struct UIEdgeInsets )_timeLabelInsetsForTimeString:(id)arg0 ;
-(void)_cacheCustomTimeMetrics;
-(void)_layoutSubtitle;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif