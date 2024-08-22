// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBPROTOTYPEADVANCEDACTIVITYELEMENTVIEWPROVIDER_H
#define SBPROTOTYPEADVANCEDACTIVITYELEMENTVIEWPROVIDER_H

@class NSString, UIView, UIColor, FBScene;
@protocol SBSystemApertureContextProviding, SAElement, SAActivityBehavior, SAUIElementViewProviding, SAUIContentTransitioning, SAUILayoutSpecifying, SAActivityHosting, SAElementHosting, SAUILayoutHosting;

#import <Foundation/Foundation.h>


@interface SBPrototypeAdvancedActivityElementViewProvider : NSObject <SBSystemApertureContextProviding, SAElement, SAActivityBehavior, SAUIElementViewProviding, SAUIContentTransitioning, SAUILayoutSpecifying>



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
@property (readonly, nonatomic) NSInteger preferredLayoutMode; // ivar: _preferredLayoutMode
@property (readonly, nonatomic) BOOL prefersAlertKeyLineStyle;
@property (readonly, nonatomic, getter=isRequestingMenuPresentation) BOOL requestingMenuPresentation;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *trailingView; // ivar: _trailingView


-(BOOL)_canShowWhileLocked;
-(BOOL)handleElementViewEvent:(NSInteger)arg0 ;
-(BOOL)hasActivityBehavior;
-(id)_newTrailingLabel;
-(id)init;
-(id)viewProvider;
-(struct CGSize )sizeThatFitsSize:(struct CGSize )arg0 forProvidedView:(id)arg1 inLayoutMode:(NSInteger)arg2 ;
-(struct NSDirectionalEdgeInsets )preferredEdgeOutsetsForLayoutMode:(NSInteger)arg0 suggestedOutsets:(struct NSDirectionalEdgeInsets )arg1 maximumOutsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)_decrementLayoutMode;
-(void)_incrementLayoutMode;
-(void)_updateLabel;
-(void)_updateLabel:(id)arg0 forLayoutMode:(NSInteger)arg1 ;
-(void)contentProviderWillTransitionToSize:(struct CGSize )arg0 inContainerView:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)layoutHostContainerViewWillLayoutSubviews:(id)arg0 ;


@end


#endif