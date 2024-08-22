// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHADDWIDGETDETAILSSHEETPAGEVIEWCONTROLLER_H
#define SBHADDWIDGETDETAILSSHEETPAGEVIEWCONTROLLER_H

@class UIViewController, NSString, UILayoutGuide, UIView;
@protocol SBHWidgetWrapperViewControllerDelegate, SBHAddWidgetDetailsSheetPageViewControllerDelegate, SBHWidgetDragHandling;


#import "SBHWidgetWrapperViewController.h"

@interface SBHAddWidgetDetailsSheetPageViewController : UIViewController <SBHWidgetWrapperViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHAddWidgetDetailsSheetPageViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isJumpAnimationInProgress) BOOL jumpAnimationInProgress;
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (retain, nonatomic) UIView *referenceView; // ivar: _referenceView
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<SBHWidgetDragHandling> *widgetDragHandler;
@property (readonly, nonatomic) SBHWidgetWrapperViewController *widgetWrapperViewController; // ivar: _widgetWrapperViewController
@property (readonly, nonatomic) CGAffineTransform wrapperViewTransform;


-(id)backgroundViewMatchingMaterialBeneathWrapperViewController:(id)arg0 ;
-(id)initWithWidgetWrapperViewController:(id)arg0 ;
-(void)_createConstraints;
-(void)_createSizeConstraintsForWrapperView:(id)arg0 ;
-(void)_createViews;
-(void)_pauseLayer:(id)arg0 ;
-(void)_resumeLayer:(id)arg0 ;
-(void)_updateWidgetScale;
-(void)configureBackgroundView:(id)arg0 matchingMaterialBeneathWrapperViewController:(id)arg1 ;
-(void)loadView;
-(void)updateParallaxEffectInReferenceView:(id)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif