// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMODALWIDGETINTRODUCTIONVIEWCONTROLLER_H
#define SBMODALWIDGETINTRODUCTIONVIEWCONTROLLER_H

@class UIViewController, UIButton, NSLayoutConstraint, NSMutableArray, UIView, UIImageView, NSArray;


#import "SBModalWidgetIntroductionBackgroundDescriptionView.h"
#import "SBModalWidgetIntroductionHomeScreenPreview.h"

@interface SBModalWidgetIntroductionViewController : UIViewController

@property (nonatomic) CATransform3D appliedSublayerTransform; // ivar: _appliedSublayerTransform
@property (retain, nonatomic) SBModalWidgetIntroductionBackgroundDescriptionView *backgroundDescriptionView; // ivar: _backgroundDescriptionView
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (retain, nonatomic) NSLayoutConstraint *continueButtonTopAnchorConstraint; // ivar: _continueButtonTopAnchorConstraint
@property (retain, nonatomic) NSMutableArray *dismissCompletions; // ivar: _dismissCompletions
@property (nonatomic) CATransform3D homeScreenPreviewSublayerTransform; // ivar: _homeScreenPreviewSublayerTransform
@property (retain, nonatomic) SBModalWidgetIntroductionHomeScreenPreview *homescreenPreview; // ivar: _homescreenPreview
@property (retain, nonatomic) UIView *homescreenPreviewContainer; // ivar: _homescreenPreviewContainer
@property (retain, nonatomic) UIImageView *homescreenPreviewSnapshot; // ivar: _homescreenPreviewSnapshot
@property (nonatomic) CGRect onboardingFallingWidgetBounds; // ivar: _onboardingFallingWidgetBounds
@property (nonatomic) CGPoint onboardingFallingWidgetCenterPoint; // ivar: _onboardingFallingWidgetCenterPoint
@property (retain, nonatomic) UIView *onboardingFallingWidgetPreviewBottom; // ivar: _onboardingFallingWidgetPreviewBottom
@property (retain, nonatomic) UIView *onboardingFallingWidgetPreviewMiddle; // ivar: _onboardingFallingWidgetPreviewMiddle
@property (nonatomic) CATransform3D onboardingFallingWidgetPreviewSublayerTransformBottom; // ivar: _onboardingFallingWidgetPreviewSublayerTransformBottom
@property (nonatomic) CATransform3D onboardingFallingWidgetPreviewSublayerTransformMiddle; // ivar: _onboardingFallingWidgetPreviewSublayerTransformMiddle
@property (nonatomic) CATransform3D onboardingFallingWidgetPreviewSublayerTransformTop; // ivar: _onboardingFallingWidgetPreviewSublayerTransformTop
@property (retain, nonatomic) UIView *onboardingFallingWidgetPreviewTop; // ivar: _onboardingFallingWidgetPreviewTop
@property (retain, nonatomic) NSArray *onboardingFallingWidgetPreviews; // ivar: _onboardingFallingWidgetPreviews
@property (nonatomic) CGRect onboardingStaticWidgetBounds; // ivar: _onboardingStaticWidgetBounds
@property (nonatomic) CGPoint onboardingStaticWidgetCenterPoint; // ivar: _onboardingStaticWidgetCenterPoint
@property (retain, nonatomic) UIView *onboardingStaticWidgetPreview; // ivar: _onboardingStaticWidgetPreview
@property (retain, nonatomic) NSArray *onboardingStaticWidgetPreviews; // ivar: _onboardingStaticWidgetPreviews
@property (retain, nonatomic) UIView *onboardingWidgetPreviewsContainer; // ivar: _onboardingWidgetPreviewsContainer


-(void)addContinueButton;
-(void)appendDismissCompletion:(id)arg0 ;
-(void)cleanUpForViewControllerDismissal;
-(void)continueButtonTapped:(id)arg0 ;
-(void)dismissPreviewAndButton;
-(void)displayPreviewAndButton;
-(void)loadPreviewSnapshot;
-(void)loadView;
-(void)setHomeScreenPreview:(id)arg0 ;
-(void)setupSublayerDismissPreviewTransformForView:(id)arg0 withTransform:(struct CATransform3D )arg1 ;
-(void)setupSublayerDisplayPreviewTransformForView:(id)arg0 withTransform:(struct CATransform3D )arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;


@end


#endif