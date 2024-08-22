// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBRINGERHUDVIEWCONTROLLER_H
#define SBRINGERHUDVIEWCONTROLLER_H

@class UIViewController, NSString, NSTimer;
@protocol BNPresentable, SBRingerNoticeUICoordinating, SBRingerHUDViewControllerDelegate, BNPresentableContext;


#import "SBRingerPillView.h"

@interface SBRingerHUDViewController : UIViewController <BNPresentable, SBRingerNoticeUICoordinating>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBRingerHUDViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *dismissalTimer; // ivar: _dismissalTimer
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL lastEventIsAVolumeChange; // ivar: _lastEventIsAVolumeChange
@property (nonatomic) CGFloat overshoot; // ivar: _overshoot
@property (retain, nonatomic) SBRingerPillView *pillView; // ivar: _pillView
@property (nonatomic, getter=isPresentableAppearingOrAppeared) BOOL presentableAppearingOrAppeared; // ivar: _presentableAppearingOrAppeared
@property (readonly, nonatomic) NSInteger presentableBehavior;
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (readonly, copy, nonatomic) NSString *requestIdentifier;
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (nonatomic, getter=isRingerSilent) BOOL ringerSilent; // ivar: _ringerSilent
@property (nonatomic) BOOL shouldExtendDismissalTimerUponDidAppear; // ivar: _shouldExtendDismissalTimerUponDidAppear
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;
@property (nonatomic) float volume; // ivar: _volume


-(BOOL)_canShowWhileLocked;
-(id)presentableDescription;
-(void)_dismiss;
-(void)_extendDismissalTimer;
-(void)_layoutPillView;
-(void)_updateStateAnimated:(BOOL)arg0 invert:(BOOL)arg1 ;
-(void)_updateVolumeSliderAnimated:(BOOL)arg0 ;
-(void)buttonReleased;
-(void)nudgeUp:(BOOL)arg0 ;
-(void)presentForMuteSwitch:(BOOL)arg0 ;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableDidDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif