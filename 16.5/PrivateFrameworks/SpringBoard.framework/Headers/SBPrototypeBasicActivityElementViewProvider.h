// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROTOTYPEBASICACTIVITYELEMENTVIEWPROVIDER_H
#define SBPROTOTYPEBASICACTIVITYELEMENTVIEWPROVIDER_H

@class NSDate, NSDateComponentsFormatter, NSTimer, NSString, UIView, UIColor, FBScene;
@protocol SBSystemApertureContextProviding, SAElement, SBSystemApertureSuppressible, SAActivityBehavior, SAUIElementViewProviding, SAUILayoutSpecifying, SAActivityHosting, SAElementHosting, SAUILayoutHosting;

#import <Foundation/Foundation.h>


@interface SBPrototypeBasicActivityElementViewProvider : NSObject <SBSystemApertureContextProviding, SAElement, SBSystemApertureSuppressible, SAActivityBehavior, SAUIElementViewProviding, SAUILayoutSpecifying>

 {
    NSDate *_startTime;
    NSDateComponentsFormatter *_formatter;
    NSTimer *_timer;
}


@property (weak, nonatomic) NSObject<SAActivityHosting> *activityHost;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInteractiveDismissalEnabled) BOOL interactiveDismissalEnabled;
@property (readonly, nonatomic) UIColor *keyColor;
@property (nonatomic) NSUInteger layoutAxis;
@property (weak, nonatomic) NSObject<SAUILayoutHosting> *layoutHost; // ivar: _layoutHost
@property (readonly, nonatomic) NSInteger layoutMode; // ivar: _layoutMode
@property (readonly, nonatomic) UIView *leadingView; // ivar: _leadingView
@property (readonly, nonatomic) NSInteger maximumSupportedLayoutMode;
@property (readonly, nonatomic, getter=isMinimalPresentationPossible) BOOL minimalPresentationPossible;
@property (readonly, nonatomic) UIView *minimalView;
@property (readonly, nonatomic) NSInteger minimumSupportedLayoutMode;
@property (readonly, nonatomic) NSInteger preferredLayoutMode;
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) UIView *trailingView; // ivar: _trailingView


-(BOOL)_canShowWhileLocked;
-(BOOL)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)arg0 ofBundleId:(id)arg1 ;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)hasActivityBehavior;
-(BOOL)shouldSuppressElementWhilePresentingAppWithBundleId:(id)arg0 ;
-(id)init;
-(id)viewProvider;
-(void)_activateApplication;
-(void)_updateLabel;


@end


#endif