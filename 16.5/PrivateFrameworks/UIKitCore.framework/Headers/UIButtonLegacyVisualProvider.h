// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBUTTONLEGACYVISUALPROVIDER_H
#define UIBUTTONLEGACYVISUALPROVIDER_H

@class CALayer, NSArray, NSString;
@protocol _UIFloatingContentViewDelegate, _UIButtonMaskAnimationViewDelegate, UIButtonVisualProvider, UIButtonArchivingVisualProvider, UIButtonVisualEffectSupportingVisualProvider, UIButtonDeprecatedAPISupportingVisualProvider, UIButtonDeprecatedSPISupportingVisualProvider;

#import <Foundation/Foundation.h>

#import "UIImageView.h"
#import "_UIFloatingContentView.h"
#import "UIVisualEffectView.h"
#import "UILabel.h"
#import "UIView.h"
#import "_UIButtonMaskAnimationView.h"
#import "UIButton.h"

@interface UIButtonLegacyVisualProvider : NSObject <_UIFloatingContentViewDelegate, _UIButtonMaskAnimationViewDelegate, UIButtonVisualProvider, UIButtonArchivingVisualProvider, UIButtonVisualEffectSupportingVisualProvider, UIButtonDeprecatedAPISupportingVisualProvider, UIButtonDeprecatedSPISupportingVisualProvider>

 {
    UIImageView *_backgroundView;
    _UIFloatingContentView *_floatingContentView;
    UIVisualEffectView *_contentBackdropView;
    UIImageView *_imageView;
    UILabel *_titleView;
    UIView *_selectionView;
    CALayer *_highlightLayer;
    _UIButtonMaskAnimationView *_maskAnimationView;
    UIView *_effectiveContentView;
}


@property (copy, nonatomic, setter=_setContentConstraints:) NSArray *_contentConstraints; // ivar: _contentConstraints
@property (nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)requiresNewVisualProviderForChanges;
+(BOOL)shouldUpdateContextMenuEnabledOnMenuChanges;
+(NSInteger)_NSTextAlignmentForUIControlContentHorizontalAlignment:(NSInteger)arg0 ;
+(id)_selectedIndicatorImage;
+(id)visualProviderForButton:(id)arg0 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(BOOL)_highlightsBackgroundImage;
-(BOOL)_imageNeedsCompositingModeWhenSelected;
-(BOOL)_isExternalRoundedRectButtonWithPressednessState;
-(BOOL)_shouldDefaultToTemplatesForImageViewBackground:(BOOL)arg0 ;
-(BOOL)_shouldUpdatePressedness;
-(BOOL)_textNeedsCompositingModeWhenSelected;
-(BOOL)_wantsContentBackdropView;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)canBecomeFocused;
-(BOOL)deferToLazyTitleFont;
-(BOOL)fontIsDefaultForIdiom;
-(BOOL)isOn;
-(BOOL)useTitleForSelectedIndicatorBounds;
-(CGFloat)_borderWidthForState:(NSUInteger)arg0 bounds:(struct CGRect )arg1 ;
-(CGFloat)_intrinsicWidthForAttributedTitle:(id)arg0 ;
-(NSInteger)lineBreakMode;
-(id)_createPreparedImageViewWithFrame:(struct CGRect )arg0 ;
-(id)_fadeOutAnimationWithKeyPath:(id)arg0 ;
-(id)_floatingContentView;
-(id)_newImageViewWithFrame:(struct CGRect )arg0 ;
-(id)_newLabelWithFrame:(struct CGRect )arg0 ;
-(id)_setupBackgroundView;
-(id)_titleOrImageViewForBaselineLayout;
-(id)_transitionAnimationWithKeyPath:(id)arg0 ;
-(id)_viewForBaselineLayout;
-(id)backgroundViewCreateIfNeeded:(BOOL)arg0 ;
-(id)contentBackdropView;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)currentImageWithResolvedConfiguration;
-(id)defaultFocusEffect;
-(id)effectiveContentView;
-(id)encodableSubviews;
-(id)font;
-(id)imageViewCreateIfNeeded:(BOOL)arg0 ;
-(id)pointerEffectPreviewParameters;
-(id)pointerEffectWithPreview:(id)arg0 ;
-(id)pointerShapeInContainer:(id)arg0 proposal:(id)arg1 ;
-(id)preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)selectionIndicatorView;
-(id)titleViewCreateIfNeeded:(BOOL)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct ? )baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(struct CGRect )_highlightBoundsForDrawingStyle;
-(struct CGRect )_highlightRectForImageRect:(struct CGRect )arg0 ;
-(struct CGRect )_highlightRectForTextRect:(struct CGRect )arg0 ;
-(struct CGRect )_selectedIndicatorBounds;
-(struct CGRect )_titleRectForContentRect:(struct CGRect )arg0 calculatePositionForEmptyTitle:(BOOL)arg1 ;
-(struct CGRect )_visualBoundsWithCornerRadius:(*CGFloat)arg0 hasProposal:(BOOL)arg1 shouldUseProposal:(*BOOL)arg2 ;
-(struct CGRect )backgroundRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )contentRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )highlightBounds;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )visualBoundsWithCornerRadius:(*CGFloat)arg0 ;
-(struct CGSize )_intrinsicSizeForTitle:(id)arg0 attributedTitle:(id)arg1 image:(id)arg2 backgroundImage:(id)arg3 titlePaddingInsets:(struct UIEdgeInsets *)arg4 ;
-(struct CGSize )intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )titleShadowOffset;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_applyAppropriateTouchInsetsForButton;
-(void)_beginTitleAnimation;
-(void)_deriveTitleRect:(struct CGRect *)arg0 imageRect:(struct CGRect *)arg1 fromContentRect:(struct CGRect )arg2 calculatePositionForEmptyTitle:(BOOL)arg3 ;
-(void)_invalidateContentConstraints;
-(void)_layoutBackgroundImageView;
-(void)_layoutContentBackdropView;
-(void)_layoutHighlightLayer;
-(void)_layoutImageAndTitleViews;
-(void)_prepareMaskAnimationViewIfNecessary;
-(void)_reducedTransparencyDidChange:(id)arg0 ;
-(void)_setupDrawingStyleForState:(NSUInteger)arg0 ;
-(void)_setupImageView;
-(void)_setupPressednessForState:(NSUInteger)arg0 ;
-(void)_setupTitleView;
-(void)_setupTitleViewRequestingLayout:(BOOL)arg0 ;
-(void)_updateBackgroundImageView;
-(void)_updateContentBackdropView;
-(void)_updateEffectsForImageView:(id)arg0 background:(BOOL)arg1 ;
-(void)_updateImageView;
-(void)_updateMaskState;
-(void)_updateSelectionViewForState:(NSUInteger)arg0 ;
-(void)_updateTitleView;
-(void)_updateTitleViewStyleEffectConfiguration;
-(void)cleanupForVisualProvider:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 updateStyleForMenuWithConfiguration:(id)arg1 style:(id)arg2 ;
-(void)dealloc;
-(void)didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)floatingContentView:(id)arg0 isTransitioningFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)layoutSubviews;
-(void)pointerWillEnter:(id)arg0 ;
-(void)pointerWillExit:(id)arg0 ;
-(void)populateArchivedSubviews:(id)arg0 ;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setBlurEnabled:(BOOL)arg0 ;
-(void)setContentHorizontalAlignment:(NSInteger)arg0 ;
-(void)setContentHuggingPriorities:(struct CGSize )arg0 ;
-(void)setContentVerticalAlignment:(NSInteger)arg0 ;
-(void)setContextMenuIsPrimary:(BOOL)arg0 ;
-(void)setDrawingStroke:(CGFloat)arg0 forState:(NSUInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setExternalFlatEdge:(NSUInteger)arg0 ;
-(void)setFont:(id)arg0 isDefaultForIdiom:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setImageContentMode:(NSInteger)arg0 ;
-(void)setLineBreakMode:(NSInteger)arg0 ;
-(void)setMenu:(id)arg0 ;
-(void)setMenuProvider:(id)arg0 ;
-(void)setOn:(BOOL)arg0 ;
-(void)setPreferredSymbolConfiguration:(id)arg0 forImageInState:(NSUInteger)arg1 ;
-(void)setReversesTitleShadowWhenHighlighted:(BOOL)arg0 ;
-(void)setRole:(NSInteger)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setShowsTouchWhenHighlighted:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setTitleShadowOffset:(struct CGSize )arg0 ;
-(void)setVisualEffectViewEnabled:(BOOL)arg0 backgroundColor:(id)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif