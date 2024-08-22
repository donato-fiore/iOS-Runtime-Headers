// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBUTTONBARBUTTONVISUALPROVIDERIOS_H
#define _UIBUTTONBARBUTTONVISUALPROVIDERIOS_H

@class UIButtonBarButtonVisualProvider, NSMutableDictionary, NSArray, NSLayoutConstraint;
@protocol _UIButtonBarAppearanceDelegate;


#import "UIButton.h"
#import "_UIBackButtonMaskView.h"
#import "_UIModernBarButton.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "UITapGestureRecognizer.h"

@interface _UIButtonBarButtonVisualProviderIOS : UIButtonBarButtonVisualProvider {
    NSMutableDictionary *_currentConstraints;
    NSMutableDictionary *_oldConstraints;
    UIButton *_backIndicatorButton;
    _UIBackButtonMaskView *_backButtonMask;
    _UIModernBarButton *_titleButton;
    _UIModernBarButton *_imageButton;
    UIImageView *_backgroundView;
    id<_UIButtonBarAppearanceDelegate> *_appearanceDelegate;
    NSArray *_barButtonTitleAttributes;
    NSArray *_finalTitleAttributes;
    UIColor *_tintColor;
    NSMutableDictionary *_backgroundImages;
    NSArray *_titleContent;
    NSMutableDictionary *_titleLookup;
    NSLayoutConstraint *_backButtonTitleMaxWidthConstraint;
    UITapGestureRecognizer *_pressTapRecognizer;
    id *_menuProvider;
    NSInteger _systemItem;
    ? _flags;
}




-(BOOL)backButtonMaskEnabled;
-(BOOL)buttonSelectionState:(id)arg0 forRequestedState:(BOOL)arg1 ;
-(BOOL)canUpdateMenuInPlace;
-(BOOL)shouldLift;
-(BOOL)supportsBackButtons;
-(CGFloat)_defaultBackIndicatorBaselineInsetCompact:(BOOL)arg0 ;
-(CGFloat)_defaultPaddingForInsets:(struct UIEdgeInsets )arg0 ;
-(CGFloat)contentButtonTrailingOffset:(CGFloat)arg0 ;
-(Class)buttonControlClass;
-(id)_backIndicatorImageForCompact:(BOOL)arg0 ;
-(id)_backIndicatorMaskForCompact:(BOOL)arg0 ;
-(id)_backIndicatorMaskSymbolConfigurationForCompact:(BOOL)arg0 ;
-(id)_backIndicatorSymbolConfigurationForCompact:(BOOL)arg0 ;
-(id)_titleContentForTitle:(id)arg0 ;
-(id)alignmentViewForStaticNavBarButtonLeading;
-(id)alignmentViewForStaticNavBarButtonTrailing;
-(id)backButtonBackgroundImageForState:(NSUInteger)arg0 compact:(BOOL)arg1 ;
-(id)backIndicatorView;
-(id)backgroundImageForState:(NSUInteger)arg0 compact:(BOOL)arg1 ;
-(id)backgroundImageView;
-(id)buttonContextMenuInteractionConfiguration;
-(id)buttonContextMenuStyleFromDefaultStyle:(id)arg0 ;
-(id)buttonContextMenuTargetedPreview;
-(id)buttonSpringLoadedInteractionEffect;
-(id)contentView;
-(id)imageButton;
-(id)matchingPointerShapeForView:(id)arg0 rect:(struct CGRect )arg1 inContainer:(id)arg2 ;
-(id)pointerPreviewParameters;
-(id)pointerShapeInContainer:(id)arg0 ;
-(id)symbolConfigurationCompact:(BOOL)arg0 ;
-(id)textButton;
-(id)tintColor;
-(struct CGPoint )menuAnchorPoint;
-(struct CGSize )buttonImageViewSize:(id)arg0 ;
-(struct UIEdgeInsets )_imageInsetsForBarButtonItem:(id)arg0 compact:(BOOL)arg1 isBackButton:(BOOL)arg2 ;
-(struct UIEdgeInsets )_insetsForCompact:(BOOL)arg0 ;
-(struct UIOffset )backButtonBackgroundVerticalAdjustmentForCompact:(BOOL)arg0 ;
-(struct UIOffset )backButtonTitlePositionOffsetForCompact:(BOOL)arg0 ;
-(struct UIOffset )backgroundVerticalAdjustmentForCompact:(BOOL)arg0 ;
-(struct UIOffset )titlePositionOffsetForCompact:(BOOL)arg0 ;
-(void)_addConstraintsForBackgroundViewWithOffset:(CGFloat)arg0 isBackButton:(BOOL)arg1 resizesImage:(BOOL)arg2 ;
-(void)_addHorizontalConstraintsForContentButton:(id)arg0 titleOffset:(CGFloat)arg1 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets )arg2 ;
-(void)_addHorizontalConstraintsForImageWithInsets:(struct UIEdgeInsets )arg0 paddingEdges:(NSUInteger)arg1 additionalPadding:(CGFloat)arg2 ;
-(void)_addHorizontalConstraintsForTextWithOffset:(CGFloat)arg0 additionalPadding:(struct UIEdgeInsets )arg1 ;
-(void)_addVerticalConstraintsForBackIndicatorWithTitleOffset:(CGFloat)arg0 bottomOffset:(CGFloat)arg1 useBaselineAlignment:(BOOL)arg2 ;
-(void)_addVerticalConstraintsForImageWithInsets:(struct UIEdgeInsets )arg0 ;
-(void)_addVerticalConstraintsForTextWithOffset:(CGFloat)arg0 ;
-(void)_computeTextAttributes;
-(void)_computeTextAttributesForBarButtonItem:(id)arg0 ;
-(void)_configureBackButtonMask;
-(void)_configureBackButtonWithBackButtonLayoutInsets:(struct NSDirectionalEdgeInsets )arg0 useBaselineAlignment:(BOOL)arg1 ;
-(void)_configureImageBackButtonWithImageInsets:(struct UIEdgeInsets )arg0 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets )arg1 useBaselineAlignment:(BOOL)arg2 ;
-(void)_configureImageOrTitleCompact:(BOOL)arg0 ;
-(void)_configureImageWithInsets:(struct UIEdgeInsets )arg0 paddingEdges:(NSUInteger)arg1 additionalPadding:(CGFloat)arg2 ;
-(void)_configureTextBackButtonWithTitlePositionAdjustment:(struct UIOffset )arg0 backButtonLayoutInsets:(struct NSDirectionalEdgeInsets )arg1 useBaselineAlignment:(BOOL)arg2 ;
-(void)_configureTextWithOffset:(struct UIOffset )arg0 additionalPadding:(struct UIEdgeInsets )arg1 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_prepareBackgroundViewFromBarButtonItem:(id)arg0 isBackButton:(BOOL)arg1 ;
-(void)_removeTitleButton;
-(void)_setTitle:(id)arg0 ;
-(void)_setupAlternateTitles;
-(void)_updateViewsForMaskingEnabled;
-(void)activateHeightMinimizer;
-(void)activateWidthMinimizer;
-(void)addActiveConstraint:(id)arg0 named:(id)arg1 ;
-(void)buttonLayoutSubviews:(id)arg0 baseImplementation:(id)arg1 ;
-(void)configureButton:(id)arg0 fromBarButtonItem:(id)arg1 ;
-(void)configureButton:(id)arg0 withAppearanceDelegate:(id)arg1 fromBarItem:(id)arg2 ;
-(void)resetButtonHasHighlighted;
-(void)setBackButtonMaskEnabled:(BOOL)arg0 ;
-(void)traitCollectionChangedInSubtreeFrom:(id)arg0 to:(id)arg1 ;
-(void)updateActiveConstraints:(id)arg0 ;
-(void)updateButton:(id)arg0 appearance:(id)arg1 ;
-(void)updateButton:(id)arg0 forEnabledState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 forHighlightedState:(BOOL)arg1 ;
-(void)updateButton:(id)arg0 forSelectedState:(BOOL)arg1 ;
-(void)updateMenu;


@end


#endif