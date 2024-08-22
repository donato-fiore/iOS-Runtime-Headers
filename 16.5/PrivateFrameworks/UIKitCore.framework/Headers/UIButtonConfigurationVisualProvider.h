// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIBUTTONCONFIGURATIONVISUALPROVIDER_H
#define UIBUTTONCONFIGURATIONVISUALPROVIDER_H

@class NSString;
@protocol UIButtonModernVisualProvider;

#import <Foundation/Foundation.h>

#import "UIImageView.h"
#import "UIActivityIndicatorView.h"
#import "UILabel.h"
#import "_UISystemBackgroundView.h"
#import "UIButton.h"

@interface UIButtonConfigurationVisualProvider : NSObject <UIButtonModernVisualProvider>

 {
    UIImageView *_imageView;
    UIImageView *_indicatorView;
    UIActivityIndicatorView *_progressIndicatorView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    ? _layoutData;
    NSUInteger _accessibilityButtonShapesChangedToken;
    ? _flags;
    _UISystemBackgroundView *_backgroundView;
}


@property (nonatomic) UIButton *button; // ivar: _button
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBaseline;
@property (readonly, nonatomic) BOOL hasMultilineText;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat previousFirstBaselineOffsetForAttributeLowering; // ivar: _previousFirstBaselineOffsetForAttributeLowering
@property (nonatomic) CGFloat previousLastBaselineOffsetForAttributeLowering; // ivar: _previousLastBaselineOffsetForAttributeLowering
@property (readonly) Class superclass;
@property (nonatomic) BOOL vendsBaselineInformationToAutoLayout; // ivar: _vendsBaselineInformationToAutoLayout
@property (nonatomic) CGFloat widthForMultilineTextLayout; // ivar: _widthForMultilineTextLayout


+(BOOL)requiresNewVisualProviderForChanges;
+(BOOL)shouldUpdateContextMenuEnabledOnMenuChanges;
+(BOOL)wantsConfigurationUpdateForButtonShapes;
+(id)visualProviderForButton:(id)arg0 ;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)canBecomeFocused;
-(BOOL)isOn;
-(BOOL)useTitleForSelectedIndicatorBounds;
-(id)backgroundViewCreateIfNeeded:(BOOL)arg0 ;
-(id)contentBackdropView;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForDismissingMenuWithConfiguration:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)defaultFocusEffect;
-(id)effectiveContentView;
-(id)imageViewCreateIfNeeded:(BOOL)arg0 ;
-(id)init;
-(id)pointerEffectPreviewParameters;
-(id)pointerEffectWithPreview:(id)arg0 ;
-(id)pointerShapeInContainer:(id)arg0 proposal:(id)arg1 ;
-(id)preferredConfigurationForFocusAnimation:(NSInteger)arg0 inContext:(id)arg1 ;
-(id)selectionIndicatorView;
-(id)subtitleViewCreateIfNeeded:(BOOL)arg0 ;
-(id)titleViewCreateIfNeeded:(BOOL)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct ? )_debugLayoutData;
-(struct ? )_layoutDataInBounds:(struct CGRect )arg0 ;
-(struct ? )_layoutDataInBounds:(struct CGRect )arg0 forConfiguration:(id)arg1 ;
-(struct ? )_layoutDataUpdatingIfNecessary;
-(struct ? )baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(struct CGRect )_layoutBounds;
-(struct CGRect )contentRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )imageRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )titleRectForContentRect:(struct CGRect )arg0 ;
-(struct CGRect )visualBoundsWithCornerRadius:(*CGFloat)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_accessibilityButtonShapesChangedNotification:(id)arg0 ;
-(void)_applyButtonValuesToConfiguration:(id)arg0 ;
-(void)_layoutContent;
-(void)_updateBackgroundViewWithConfiguration:(id)arg0 ;
-(void)_updateImageViewWithConfiguration:(id)arg0 ;
-(void)_updateIndicatorWithConfiguration:(id)arg0 ;
-(void)_updateProgressIndicatorWithConfiguration:(id)arg0 ;
-(void)_updateSubtitleLabelWithConfiguration:(id)arg0 ;
-(void)_updateTitleLabelWithConfiguration:(id)arg0 ;
-(void)applyConfiguration;
-(void)automaticallyUpdateConfigurationIfNecessary:(id)arg0 ;
-(void)cleanupForVisualProvider:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 updateStyleForMenuWithConfiguration:(id)arg1 style:(id)arg2 ;
-(void)dealloc;
-(void)didChangeFromIdiom:(NSInteger)arg0 onScreen:(id)arg1 traverseHierarchy:(BOOL)arg2 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)invalidateLayoutData;
-(void)layoutSubviews;
-(void)pointerWillEnter:(id)arg0 ;
-(void)pointerWillExit:(id)arg0 ;
-(void)setAttributedTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setContentHorizontalAlignment:(NSInteger)arg0 ;
-(void)setContentHuggingPriorities:(struct CGSize )arg0 ;
-(void)setContentVerticalAlignment:(NSInteger)arg0 ;
-(void)setContextMenuIsPrimary:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setMenu:(id)arg0 ;
-(void)setMenuProvider:(id)arg0 ;
-(void)setNeedsUpdateConfiguration;
-(void)setOn:(BOOL)arg0 ;
-(void)setPreferredSymbolConfiguration:(id)arg0 forImageInState:(NSUInteger)arg1 ;
-(void)setReversesTitleShadowWhenHighlighted:(BOOL)arg0 ;
-(void)setRole:(NSInteger)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSemanticContentAttribute:(NSInteger)arg0 ;
-(void)setShowsTouchWhenHighlighted:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBaselineInformationDependentOnBounds;
-(void)updateConfigurationIfNecessary;
-(void)updateConstraints;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif