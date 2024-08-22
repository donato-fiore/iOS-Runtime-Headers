// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHWIDGETCONFIGURATIONINTERACTION_H
#define SBHWIDGETCONFIGURATIONINTERACTION_H

@class UIView, MTMaterialView, INIntent, WFWidgetConfigurationOptions, WFWidgetConfigurationViewController, UIViewController, NSString, UITapGestureRecognizer, CHSWidgetDescriptor;
@protocol SBHViewControllerTransitionDelegate, SBHWidgetConfigurationAnimationContext, WFWidgetConfigurationViewControllerDelegate, SBHIconViewConfigurationInteraction, SBLeafIconDataSource, SBHIconViewConfigurationInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SBIconView.h"
#import "SBHViewControllerTransition.h"
#import "SBHWidgetSettings.h"

@interface SBHWidgetConfigurationInteraction : NSObject <SBHViewControllerTransitionDelegate, SBHWidgetConfigurationAnimationContext, WFWidgetConfigurationViewControllerDelegate, SBHIconViewConfigurationInteraction>



@property (retain, nonatomic) UIView *backgroundTintView; // ivar: _backgroundTintView
@property (retain, nonatomic) MTMaterialView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) INIntent *configuration; // ivar: _configuration
@property (readonly, nonatomic) WFWidgetConfigurationOptions *configurationOptions; // ivar: _configurationOptions
@property (retain, nonatomic) WFWidgetConfigurationViewController *configurationViewController; // ivar: _configurationViewController
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *configuredDataSource; // ivar: _configuredDataSource
@property (readonly, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIViewController *containerViewController; // ivar: _containerViewController
@property (nonatomic) CGRect contentBoundingRect; // ivar: _contentBoundingRect
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHIconViewConfigurationInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *homeScreenContentView; // ivar: _homeScreenContentView
@property (retain, nonatomic) SBIconView *referenceView; // ivar: _referenceView
@property (nonatomic) CGRect sourceContentFrame; // ivar: _sourceContentFrame
@property (retain, nonatomic) SBIconView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapToPresentGesture; // ivar: _tapToPresentGesture
@property (nonatomic) CGRect targetContentFrame; // ivar: _targetContentFrame
@property (readonly, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIView *touchBlockingView; // ivar: _touchBlockingView
@property (retain, nonatomic) SBHViewControllerTransition *transition; // ivar: _transition
@property (readonly, copy, nonatomic) CHSWidgetDescriptor *widgetDescriptor; // ivar: _widgetDescriptor
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings; // ivar: _widgetSettings


-(id)animatorForTransition:(id)arg0 ;
-(id)initWithWidgetDescriptor:(id)arg0 gridSizeClass:(NSUInteger)arg1 intent:(id)arg2 configuredDataSource:(id)arg3 ;
-(void)_endConfigurationImmediately:(BOOL)arg0 ;
-(void)_handleTapToDismiss:(id)arg0 ;
-(void)_handleTapToPresent:(id)arg0 ;
-(void)_setUpMatchMoveAnimationForBackgroundView:(id)arg0 ;
-(void)beginConfiguration;
-(void)endConfiguration;
-(void)endConfigurationImmediately;
-(void)popConfiguration;
-(void)prepareTransition:(id)arg0 ;
-(void)transitionDidProgressToEndState:(id)arg0 ;
-(void)transitionDidReturnToBeginningState:(id)arg0 ;
-(void)transitionWillProgressToEndState:(id)arg0 ;
-(void)transitionWillReturnToBeginningState:(id)arg0 ;
-(void)widgetConfigurationViewController:(id)arg0 didFinishWithIntent:(id)arg1 ;
-(void)widgetConfigurationViewControllerPreferredCardSizeDidChange:(id)arg0 ;


@end


#endif