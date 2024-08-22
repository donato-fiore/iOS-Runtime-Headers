// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBWINDOW_H
#define SBWINDOW_H

@class SBFWindow, SBUICoronaAnimationController, NSMutableSet, NSString, UIView, SBFTraitsParticipant;
@protocol SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving, SBWindowLayoutStrategy;


#import "SBRecycledViewsContainer.h"

@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving>

 {
    SBUICoronaAnimationController *_coronaAnimationController;
    SBRecycledViewsContainer *_recycledViewsContainerView;
    BOOL _requestedHiddenValue;
    NSMutableSet *_additionalHiddenReasons;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSInteger activeInterfaceOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SBWindowLayoutStrategy> *layoutStrategy; // ivar: _layoutStrategy
@property (readonly, copy, nonatomic) NSString *orientationSourceDescription;
@property (readonly, nonatomic) CGFloat orientationSourceLevel;
@property (readonly, nonatomic) UIView *recycledViewsContainer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBFTraitsParticipant *traitsParticipant; // ivar: _traitsParticipant


+(BOOL)sb_autorotates;
+(BOOL)sb_disableStatusBarHeightChanges;
+(id)defaultLayoutStrategy;
-(BOOL)_shouldResizeWithScene;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithWindowScene:(id)arg0 layoutStrategy:(id)arg1 role:(id)arg2 debugName:(id)arg3 ;
-(id)initWithWindowScene:(id)arg0 role:(id)arg1 debugName:(id)arg2 ;
-(id)initWithWindowScene:(id)arg0 rootViewController:(id)arg1 layoutStrategy:(id)arg2 role:(id)arg3 debugName:(id)arg4 ;
-(id)initWithWindowScene:(id)arg0 rootViewController:(id)arg1 role:(id)arg2 debugName:(id)arg3 ;
-(id)sb_coronaAnimationController;
-(void)_addHiddenReason:(id)arg0 ;
-(void)_didDisableSecureRendering:(id)arg0 ;
-(void)_removeHiddenReason:(id)arg0 ;
-(void)_sb_updateAutorotatesFlagAndForceInterfaceOrientationUpdate:(BOOL)arg0 ;
-(void)_updateHidingForSecureRendering:(BOOL)arg0 ;
-(void)_updateRealIsHidden;
-(void)_willEnableSecureRendering:(id)arg0 ;
-(void)dealloc;
-(void)handleStatusBarChangeFromHeight:(CGFloat)arg0 toHeight:(CGFloat)arg1 ;
-(void)layoutStrategyFrameOnScreenDidChange:(id)arg0 ;
-(void)makeKeyAndVisible;
-(void)moveToWindowSceneIfNeeded:(id)arg0 ;
-(void)sb_updateAutorotatesFlag;
-(void)setAlphaAndObeyBecauseIAmTheWindowManager:(CGFloat)arg0 ;
-(void)setAutorotates:(BOOL)arg0 forceUpdateInterfaceOrientation:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif