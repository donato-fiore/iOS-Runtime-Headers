// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NCNOTIFICATIONLISTSUPPLEMENTARYHOSTINGVIEW_H
#define NCNOTIFICATIONLISTSUPPLEMENTARYHOSTINGVIEW_H

@class UIView, NSArray, NSString, UIColor, PLPlatterView;
@protocol UIGestureRecognizerDelegate, NCAuxiliaryOptionsSupporting, NCMaterialDisplaying, PLContentSizeCategoryAdjusting, NCNotificationListSupplementaryHostingViewDelegate;


#import "NCDimmableView.h"
#import "NCNotificationListStackBackgroundDimmingView.h"
#import "NCAuxiliaryOptionsView.h"

@interface NCNotificationListSupplementaryHostingView : NCDimmableView <UIGestureRecognizerDelegate, NCAuxiliaryOptionsSupporting, NCMaterialDisplaying, PLContentSizeCategoryAdjusting>

 {
    NCNotificationListStackBackgroundDimmingView *_backgroundTintView;
    UIView *_viewToBlockOutOfProcessUIInteractions;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // ivar: _adjustsFontForContentSizeCategory
@property (retain, nonatomic) NSArray *auxiliaryOptionActions; // ivar: _auxiliaryOptionActions
@property (readonly, nonatomic) NSArray *auxiliaryOptionButtons;
@property (copy, nonatomic) NSString *auxiliaryOptionsSummaryText; // ivar: _auxiliaryOptionsSummaryText
@property (copy, nonatomic) UIColor *auxiliaryOptionsTextColor; // ivar: _auxiliaryOptionsTextColor
@property (readonly, nonatomic) NCAuxiliaryOptionsView *auxiliaryOptionsView; // ivar: _auxiliaryOptionsView
@property (nonatomic) BOOL auxiliaryOptionsVisible;
@property (readonly, nonatomic, getter=hasContentForAuxiliaryOptions) BOOL contentForAuxiliaryOptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCNotificationListSupplementaryHostingViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *hostedView; // ivar: _hostedView
@property (nonatomic, getter=isHostedViewUserInteractionEnabled) BOOL hostedViewUserInteractionEnabled; // ivar: _hostedViewUserInteractionEnabled
@property (copy, nonatomic) NSString *materialGroupNameBase; // ivar: _materialGroupNameBase
@property (nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (copy, nonatomic) UIColor *materialTintColor; // ivar: _materialTintColor
@property (readonly, nonatomic) PLPlatterView *platterView; // ivar: _platterView
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;


-(BOOL)adjustForContentSizeCategoryChange;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_blockOutOfProcessUIInteractions:(BOOL)arg0 ;
-(void)_configureAuxiliaryOptionsViewIfNecessary;
-(void)_configureBackgroundTintViewIfNecessary;
-(void)_configurePlatterViewIfNecessary;
-(void)_configureViewToBlockOutOfProcessUIInteractionsIfNecessary;
-(void)_layoutAuxiliaryOptionsView;
-(void)_layoutHostedView;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_tapGestureRecognized:(id)arg0 ;
-(void)layoutSubviews;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;


@end


#endif