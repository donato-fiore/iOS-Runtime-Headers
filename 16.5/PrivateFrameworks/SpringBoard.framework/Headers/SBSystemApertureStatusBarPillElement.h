// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTURESTATUSBARPILLELEMENT_H
#define SBSYSTEMAPERTURESTATUSBARPILLELEMENT_H

@class NSString, UIColor, NSSet, UIView, FBScene;
@protocol SBSystemApertureContextProviding, SAUILayoutSpecifying, SAElement, SBSystemApertureSuppressible, SBSystemApertureStatusBarStyleOverridesRepresenting, SAActivityBehavior, SAUIElementViewProviding, SAActivityHosting, SAElementHosting, SAUILayoutHosting;

#import <Foundation/Foundation.h>


@interface SBSystemApertureStatusBarPillElement : NSObject <SBSystemApertureContextProviding, SAUILayoutSpecifying, SAElement, SBSystemApertureSuppressible, SBSystemApertureStatusBarStyleOverridesRepresenting, SAActivityBehavior, SAUIElementViewProviding>



@property (readonly, nonatomic) NSString *activeSymbolName;
@property (readonly, nonatomic) UIColor *activeTintColor;
@property (weak, nonatomic) NSObject<SAActivityHosting> *activityHost;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (copy, nonatomic) NSSet *associatedApplications; // ivar: _associatedApplications
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) id *clientStorage; // ivar: _clientStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *detachedMinimalView;
@property (readonly, weak, nonatomic) NSObject<SAElement> *element;
@property (weak, nonatomic) NSObject<SAElementHosting> *elementHost;
@property (readonly, copy, nonatomic) NSString *elementIdentifier; // ivar: _elementIdentifier
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
@property (readonly, nonatomic) NSUInteger representedStatusBarStyleOverrides; // ivar: _representedStatusBarStyleOverrides
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressed) BOOL suppressed;
@property (readonly, nonatomic) UIView *trailingView; // ivar: _trailingView


+(NSUInteger)statusBarOverridesThatIgnoreSystemChromeSuppression;
-(BOOL)_canShowWhileLocked;
-(BOOL)_isAssociatedWithApplicationWithBundleIdentifier:(id)arg0 ;
-(BOOL)acceptsFullScreenTransitionFromSceneWithIdentifier:(id)arg0 ofBundleId:(id)arg1 ;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)hasActivityBehavior;
-(BOOL)shouldIgnoreSystemChromeSuppression;
-(BOOL)shouldSuppressElementWhileOnCoversheet;
-(BOOL)shouldSuppressElementWhilePresentingAppWithBundleId:(id)arg0 ;
-(id)_accessibilityLabel;
-(id)_imageName;
-(id)_packageNameForStyleOverrides:(NSUInteger)arg0 ;
-(id)_viewWithImageName:(id)arg0 systemApertureSize:(struct CGSize )arg1 tintColor:(id)arg2 ;
-(id)_viewWithPackageName:(id)arg0 ;
-(id)_viewWithSymbolName:(id)arg0 tintColor:(id)arg1 ;
-(id)initWithStatusBarStyleOverrides:(NSUInteger)arg0 ;
-(id)viewProvider;
-(struct CGSize )_sizeForPillWithImageName;


@end


#endif