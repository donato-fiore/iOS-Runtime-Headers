// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHDATEHEADERVIEWCONTROLLER_H
#define SBHDATEHEADERVIEWCONTROLLER_H

@class UIViewController, SBUILegibilityLabel, SBFDateTimeController, NSString, _UILegibilitySettings, UIView, NSLayoutConstraint;
@protocol SBFDateTimeOverrideObserver, SBHLegibility, SBFDateProviding;



@interface SBHDateHeaderViewController : UIViewController <SBFDateTimeOverrideObserver, SBHLegibility>

 {
    id *_timerToken;
    NSUInteger _updateDisabledCount;
}


@property (readonly, nonatomic) SBUILegibilityLabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) NSObject<SBFDateProviding> *dateProvider; // ivar: _dateProvider
@property (readonly, nonatomic) SBFDateTimeController *dateTimeController; // ivar: _dateTimeController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *timeContainer; // ivar: _timeContainer
@property (readonly, nonatomic) SBUILegibilityLabel *timeLabel; // ivar: _timeLabel
@property (readonly, nonatomic) NSLayoutConstraint *timeLeadingConstraint; // ivar: _timeLeadingConstraint


+(CGFloat)_topMarginFromTimeFont;
+(id)dateFont;
+(id)timeFont;
+(struct ? )dateFontMetrics;
+(struct ? )timeFontMetrics;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct UIEdgeInsets )_cachedGlyphInsetsTimeFontForString:(id)arg0 ;
-(struct UIEdgeInsets )_timeLabelInsetsForTimeString:(id)arg0 ;
-(void)_handleTimeZoneChange;
-(void)_startUpdateTimer;
-(void)_stopUpdateTimer;
-(void)_updateFormat;
-(void)_updateTimeLeadingConstraint;
-(void)controller:(id)arg0 didChangeOverrideDateFromDate:(id)arg1 ;
-(void)dealloc;
-(void)disableUpdates;
-(void)enableUpdates;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif