// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIALERTCONTROLLERACTIONVIEW_H
#define _UIALERTCONTROLLERACTIONVIEW_H

@class NSLayoutConstraint, NSArray, NSString;
@protocol UIGestureRecognizerDelegate, UIAlertActionViewRepresentation_Internal;


#import "UIView.h"
#import "UILabel.h"
#import "UIImageView.h"
#import "UIAlertAction.h"
#import "_UIAlertControllerActionViewMetrics.h"
#import "UIAlertController.h"
#import "UIAlertControllerVisualStyle.h"

@interface _UIAlertControllerActionView : UIView <UIGestureRecognizerDelegate, UIAlertActionViewRepresentation_Internal>

 {
    BOOL _highlighted;
    UIView *_labelContainerView;
    UILabel *_label;
    NSLayoutConstraint *_axLabelContainerWidthConstraint;
    NSLayoutConstraint *_labelContainerLeadingConstraint;
    NSLayoutConstraint *_labelContainerTrailingConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
    NSLayoutConstraint *_labelCenterLeadingConstraint;
    UIView *_contentViewControllerContainerView;
    NSArray *_contentViewControllerConstraints;
    UILabel *_descriptiveLabel;
    NSArray *_havingDescriptiveLabelConstraints;
    NSArray *_notHavingDescriptiveLabelConstraints;
    NSLayoutConstraint *_descriptiveLabelWidthConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToLabelLeadingLabelConstraint;
    NSLayoutConstraint *_descriptiveLabelTrailingToContainerCenterConstraint;
    UIImageView *_checkView;
    NSLayoutConstraint *_checkToMarginConstraint;
    UIImageView *_imageView;
    NSLayoutConstraint *_marginToImageConstraint;
    NSLayoutConstraint *_imageViewBaselineOrCenterYConstraint;
    NSLayoutConstraint *_imageViewTopConstraint;
    NSLayoutConstraint *_imageViewBottomConstraint;
    NSLayoutConstraint *_minimumHeightConstraint;
    UIAlertAction *_action;
    _UIAlertControllerActionViewMetrics *_metrics;
    BOOL _hasDescriptiveText;
    CGFloat _axEnforcedWidth;
}


@property (copy, nonatomic) UIAlertAction *action;
@property (weak, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (readonly) CGFloat currentDescriptiveLabelTextWidth;
@property (readonly) CGFloat currentLabelTextWidth;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain) NSLayoutConstraint *labelContainerCenterXConstraint; // ivar: _labelContainerCenterXConstraint
@property (retain) NSLayoutConstraint *labelContainerLeadingPinConstraint; // ivar: _labelContainerLeadingPinConstraint
@property (retain) NSLayoutConstraint *labelContainerTrailingPinConstraint; // ivar: _labelContainerTrailingPinConstraint
@property (readonly) Class superclass;
@property (weak, nonatomic) UIAlertControllerVisualStyle *visualStyle; // ivar: _visualStyle


-(BOOL)hasActiveMinimumSizeConstraintsWithSize:(struct CGSize )arg0 ;
-(BOOL)hasLayoutHeightConstraintsIdenticalToInterfaceActionCustomView:(id)arg0 ;
-(NSInteger)_effectiveTitleTextAlignment;
-(NSInteger)_focusItemDeferralMode;
-(id)_interfaceActionViewState;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_action:(id)arg0 changedToBePreferred:(BOOL)arg1 ;
-(void)_action:(id)arg0 changedToChecked:(BOOL)arg1 ;
-(void)_action:(id)arg0 changedToEnabled:(BOOL)arg1 ;
-(void)_action:(id)arg0 changedToTitle:(id)arg1 ;
-(void)_action:(id)arg0 changedToTitleTextAlignment:(NSInteger)arg1 ;
-(void)_action:(id)arg0 updatedImageTintColor:(id)arg1 ;
-(void)_action:(id)arg0 updatedTitleTextColor:(id)arg1 ;
-(void)_buildCheckViewConstraints;
-(void)_buildConstraints;
-(void)_buildContentViewControllerContainerConstraints;
-(void)_buildHavingDescriptiveLabelConstraints;
-(void)_buildImageViewConstraints;
-(void)_buildNotHavingDescriptiveLabelConstraints;
-(void)_contentSizeChanged;
-(void)_loadCheckView;
-(void)_loadContentViewControllerContainerViewIfNecessary;
-(void)_loadContentViewControllerView;
-(void)_loadDescriptiveLabel;
-(void)_loadImageView;
-(void)_prepareConstraintsForHavingDescriptiveText:(BOOL)arg0 ;
-(void)_prepareConstraintsForImage:(id)arg0 ;
-(void)_recomputeColors;
-(void)_removeContentViewControllerContainerViewSubviews;
-(void)_updateCheckImageView;
-(void)_updateContentViewControllerContainerViewConstraints;
-(void)_updateDescriptiveText;
-(void)_updateHavingDescriptiveLabelConstraints;
-(void)_updateImageMargins;
-(void)_updateImageView;
-(void)_updateImageViewAttributes;
-(void)_updateLabelAttributes;
-(void)_updateLabelContainerConstraints;
-(void)_updateMinimumHeight;
-(void)_updateStyle;
-(void)_updateTextAlignmentForHavingDescriptiveText:(BOOL)arg0 titleTextAlignment:(NSInteger)arg1 ;
-(void)applyMetrics:(id)arg0 ;
-(void)dealloc;
-(void)tintColorDidChange;
-(void)underlyingInterfaceActionRepresentationDidChange;
-(void)updateHeightUsingAXEnforcedWidth:(CGFloat)arg0 ;


@end


#endif