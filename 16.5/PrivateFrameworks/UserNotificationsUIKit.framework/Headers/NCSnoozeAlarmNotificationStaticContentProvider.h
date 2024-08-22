// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCSNOOZEALARMNOTIFICATIONSTATICCONTENTPROVIDER_H
#define NCSNOOZEALARMNOTIFICATIONSTATICCONTENTPROVIDER_H

@class NSString, NSTimer;
@protocol _UIAlwaysOnEnvironmentObserver, NCNotificationViewControllerObserving;


#import "NCNotificationRequestContentProvider.h"
#import "NCNotificationViewController.h"

@interface NCSnoozeAlarmNotificationStaticContentProvider : NCNotificationRequestContentProvider <_UIAlwaysOnEnvironmentObserver, NCNotificationViewControllerObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat fireTime; // ivar: _fireTime
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *secondaryText; // ivar: secondaryText
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimer *tickTimer; // ivar: _tickTimer
@property (retain, nonatomic) NCNotificationViewController *viewController; // ivar: _viewController


-(BOOL)_hasOneMinuteOrLessRemainingForTime:(CGFloat)arg0 ;
-(CGFloat)_remainingDurationForTime:(CGFloat)arg0 ;
-(id)_formatDuration:(CGFloat)arg0 includeSeconds:(BOOL)arg1 ;
-(id)_secondaryTextForTime:(CGFloat)arg0 ;
-(id)_timelinesForDateInterval:(id)arg0 ;
-(id)date;
-(id)initWithNotificationRequest:(id)arg0 viewController:(id)arg1 ;
-(id)title;
-(void)_beginObservingAlwaysOnEnvironment;
-(void)_tickTimerFired:(id)arg0 ;
-(void)_timelinesForDateInterval:(id)arg0 completion:(id)arg1 ;
-(void)_updateContentForTime:(CGFloat)arg0 ;
-(void)_updateWithFrameSpecifier:(id)arg0 ;
-(void)_updateWithFrameSpecifier:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)invalidateTimer;
-(void)notificationViewControllerViewDidMoveToWindow:(id)arg0 ;
-(void)notificationViewControllerWillDismiss:(id)arg0 ;


@end


#endif