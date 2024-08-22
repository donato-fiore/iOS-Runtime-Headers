// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLECONSTANTS_IOS_H
#define UITABLECONSTANTS_IOS_H

@class NSString;
@protocol UITableConstants;

#import <Foundation/Foundation.h>


@interface UITableConstants_IOS : NSObject <UITableConstants>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedConstants;
-(BOOL)defaultLabelAllowsTighteningForTruncationForSidebar:(BOOL)arg0 traitCollection:(id)arg1 ;
-(BOOL)defaultRowHeightDependsOnCellStyle;
-(BOOL)imageViewOffsetByLayoutMarginsForCell:(id)arg0 inTableView:(id)arg1 ;
-(BOOL)reorderingCellWantsShadows;
-(BOOL)shouldAnimatePropertyInContentViewWithKey:(id)arg0 ;
-(BOOL)shouldUppercaseHeaderFooterTextForTableStyle:(NSInteger)arg0 isHeader:(BOOL)arg1 ;
-(BOOL)shouldUseDefaultTableLayoutMarginsAsContentInsets;
-(BOOL)supportsUserInterfaceStyles;
-(BOOL)useChromelessSectionHeadersAndFootersForTableStyle:(NSInteger)arg0 ;
-(CGFloat)_defaultMarginWidthForTableView:(id)arg0 canUseLayoutMargins:(BOOL)arg1 ;
-(CGFloat)defaultAlphaForDraggingCell:(id)arg0 inTableView:(id)arg1 ;
-(CGFloat)defaultAlphaForReorderingCell;
-(CGFloat)defaultCellContentLeadingPaddingForSidebar:(BOOL)arg0 ;
-(CGFloat)defaultCellContentTrailingPadding;
-(CGFloat)defaultCellCornerRadius;
-(CGFloat)defaultContentAccessoryPadding;
-(CGFloat)defaultContentEditPaddingForCell:(id)arg0 inTableView:(id)arg1 ;
-(CGFloat)defaultContentReorderPaddingForCell:(id)arg0 inTableView:(id)arg1 ;
-(CGFloat)defaultDetailTextLabelFontSizeForCellStyle:(NSInteger)arg0 ;
-(CGFloat)defaultDisclosureLayoutWidthForView:(id)arg0 ;
-(CGFloat)defaultEditAndUpdateAnimationDuration;
-(CGFloat)defaultEditControlPaddingForCell:(id)arg0 inTableView:(id)arg1 ;
-(CGFloat)defaultFocusedHorizontalOutsetForTableView:(id)arg0 ;
-(CGFloat)defaultFocusedShadowRadiusForTableView:(id)arg0 ;
-(CGFloat)defaultImageToTextPaddingForSidebar:(BOOL)arg0 ;
-(CGFloat)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(BOOL)arg0 traitCollection:(id)arg1 ;
-(CGFloat)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg0 ;
-(CGFloat)defaultIndentationWidthForSidebarStyle:(BOOL)arg0 ;
-(CGFloat)defaultInterAccessoryPaddingForCell:(id)arg0 trailingAccessoryGroup:(BOOL)arg1 ;
-(CGFloat)defaultLabelMinimumScaleFactorForSidebar:(BOOL)arg0 traitCollection:(id)arg1 ;
-(CGFloat)defaultLeadingCellMarginWidthForTableView:(id)arg0 ;
-(CGFloat)defaultMarginWidthForTableView:(id)arg0 ;
-(CGFloat)defaultMaskGradientHeightForTableView:(id)arg0 ;
-(CGFloat)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(NSInteger)arg0 ;
-(CGFloat)defaultPaddingAboveSectionHeadersForTableStyle:(NSInteger)arg0 ;
-(CGFloat)defaultPaddingBetweenHeaderAndRows;
-(CGFloat)defaultPaddingBetweenRows;
-(CGFloat)defaultPaddingBetweenRowsForTableStyle:(NSInteger)arg0 ;
-(CGFloat)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg0 ;
-(CGFloat)defaultPlainHeaderLabelYPositionForTableView:(id)arg0 headerBounds:(struct CGRect )arg1 textRect:(struct CGRect )arg2 isHeader:(BOOL)arg3 ;
-(CGFloat)defaultRowHeightForTableView:(id)arg0 ;
-(CGFloat)defaultRowHeightForTableView:(id)arg0 cellStyle:(NSInteger)arg1 ;
-(CGFloat)defaultSectionFooterHeightForTableView:(id)arg0 ;
-(CGFloat)defaultSectionFooterHeightForTableViewStyle:(NSInteger)arg0 screen:(id)arg1 ;
-(CGFloat)defaultSectionHeaderHeightForTableView:(id)arg0 ;
-(CGFloat)defaultSectionHeaderHeightForTableViewStyle:(NSInteger)arg0 screen:(id)arg1 ;
-(CGFloat)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(NSInteger)arg0 ;
-(CGFloat)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg0 inTableView:(id)arg1 ;
-(CGFloat)defaultTextLabelFontSizeForCellStyle:(NSInteger)arg0 ;
-(CGFloat)defaultTextToSubtitlePaddingForCellStyle:(NSInteger)arg0 ;
-(CGFloat)defaultTrailingCellMarginWidthForTableView:(id)arg0 ;
-(CGFloat)interspaceBetweenInnerAccessoryIdentifier:(id)arg0 outerAccessoryIdentifier:(id)arg1 forCell:(id)arg2 trailingAccessoryGroup:(BOOL)arg3 ;
-(CGFloat)minimumContentViewHeightForFont:(id)arg0 traitCollection:(id)arg1 ;
-(NSInteger)defaultHeaderFooterPinningBehaviorForTableStyle:(NSInteger)arg0 ;
-(NSInteger)defaultLabelNumberOfLinesForSidebar:(BOOL)arg0 traitCollection:(id)arg1 ;
-(NSInteger)defaultSeparatorStyleForTableViewStyle:(NSInteger)arg0 ;
-(id)_accessoryTintColorForAccessoryBaseColor:(id)arg0 ;
-(id)_defaultAccessoryTintColor;
-(id)_defaultCircleDisclosureImageForTraitCollection:(id)arg0 ;
-(id)_defaultDisclosureImageForTraitCollection:(id)arg0 ;
-(id)_symbolImageNamed:(id)arg0 withTextStyle:(id)arg1 scale:(NSInteger)arg2 ;
-(id)defaultAccessoryBackgroundColorForAccessorySystemType:(NSInteger)arg0 header:(BOOL)arg1 sidebarStyle:(BOOL)arg2 cellConfigurationState:(id)arg3 traitCollection:(id)arg4 ;
-(id)defaultAccessoryTintColorForAccessorySystemType:(NSInteger)arg0 header:(BOOL)arg1 sidebarStyle:(BOOL)arg2 cellConfigurationState:(id)arg3 traitCollection:(id)arg4 inheritedTintColor:(id)arg5 ;
-(id)defaultBackgroundColorForTableViewStyle:(NSInteger)arg0 ;
-(id)defaultBackgroundEffectsForTableViewStyle:(NSInteger)arg0 ;
-(id)defaultCheckmarkImageForCell:(id)arg0 ;
-(id)defaultDeleteImageForCell:(id)arg0 ;
-(id)defaultDeleteImageWithTintColor:(id)arg0 backgroundColor:(id)arg1 ;
-(id)defaultDetailTextColorForCellStyle:(NSInteger)arg0 traitCollection:(id)arg1 state:(id)arg2 ;
-(id)defaultDetailTextFontForCellStyle:(NSInteger)arg0 ;
-(id)defaultDisclosureImageForCell:(id)arg0 withAccessoryBaseColor:(id)arg1 ;
-(id)defaultFooterFontForTableViewStyle:(NSInteger)arg0 ;
-(id)defaultFooterTextColorForTableViewStyle:(NSInteger)arg0 focused:(BOOL)arg1 ;
-(id)defaultHeaderFontForTableViewStyle:(NSInteger)arg0 ;
-(id)defaultHeaderTextColorForTableViewStyle:(NSInteger)arg0 focused:(BOOL)arg1 ;
-(id)defaultImageSymbolConfigurationForTraitCollection:(id)arg0 ;
-(id)defaultImageTintColorForState:(id)arg0 ;
-(id)defaultInsertImageForCell:(id)arg0 ;
-(id)defaultInsertImageWithTintColor:(id)arg0 backgroundColor:(id)arg1 ;
-(id)defaultInsetGroupedHeaderFontForExtraProminentStyle:(BOOL)arg0 secondaryText:(BOOL)arg1 ;
-(id)defaultMultiSelectBackgroundColorForCell:(id)arg0 inTableView:(id)arg1 ;
-(id)defaultMultiSelectNotSelectedImageForCellStyle:(NSInteger)arg0 traitCollection:(id)arg1 accessoryBaseColor:(id)arg2 ;
-(id)defaultMultiSelectSelectedImageForCellStyle:(NSInteger)arg0 traitCollection:(id)arg1 checkmarkColor:(id)arg2 backgroundColor:(id)arg3 ;
-(id)defaultOutlineDisclosureImageForView:(id)arg0 ;
-(id)defaultPlainHeaderFooterFont;
-(id)defaultPopUpMenuIndicatorImageForTraitCollection:(id)arg0 ;
-(id)defaultReorderControlImageForTraitCollection:(id)arg0 withAccessoryBaseColor:(id)arg1 ;
-(id)defaultSeparatorColorForTableViewStyle:(NSInteger)arg0 ;
-(id)defaultSidebarHeaderFont;
-(id)defaultSidebarPlainMultiSelectSeparatorColor;
-(id)defaultTextColorForCellStyle:(NSInteger)arg0 traitCollection:(id)arg1 tintColor:(id)arg2 state:(id)arg3 ;
-(id)defaultTextLabelFontForCellStyle:(NSInteger)arg0 ;
-(id)sidebarVariant;
-(id)variantForActive:(BOOL)arg0 ;
-(struct CGRect )defaultDeleteMinusRectForCell:(id)arg0 inTableView:(id)arg1 ;
-(struct CGSize )defaultEditControlSizeForCell:(id)arg0 inTableView:(id)arg1 ;
-(struct CGSize )defaultReorderControlSizeForCell:(id)arg0 withAccessoryBaseColor:(id)arg1 ;
-(struct NSDirectionalEdgeInsets )defaultInsetGroupedHeaderLayoutMarginsForExtraProminentStyle:(BOOL)arg0 ;
-(struct UIEdgeInsets )defaultCellLayoutMarginsForStyle:(NSInteger)arg0 textLabelFont:(id)arg1 rawLayoutMargins:(struct UIEdgeInsets )arg2 ;
-(struct UIEdgeInsets )defaultHeaderFooterLayoutMarginsForTableViewStyle:(NSInteger)arg0 isHeader:(BOOL)arg1 isFirstSection:(BOOL)arg2 ;
-(struct UIEdgeInsets )defaultLayoutMarginsForCell:(id)arg0 inTableView:(id)arg1 ;
-(struct UIEdgeInsets )defaultLayoutMarginsForTableView:(id)arg0 ;
-(struct UIEdgeInsets )defaultLayoutMarginsInsideSectionForSize:(struct CGSize )arg0 tableStyle:(NSInteger)arg1 ;
-(struct UIEdgeInsets )defaultSectionContentInsetsForTableStyle:(NSInteger)arg0 ;
-(struct UIEdgeInsets )defaultSidebarLayoutMarginsForElementsInsideSection;
-(struct UIEdgeInsets )defaultTableLayoutMarginsForScreen:(id)arg0 size:(struct CGSize )arg1 tableStyle:(NSInteger)arg2 ;
-(struct _UITableConstantsBackgroundProperties )defaultCellBackgroundPropertiesForTableViewStyle:(NSInteger)arg0 state:(id)arg1 ;
-(struct _UITableConstantsBackgroundProperties )defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(NSInteger)arg0 cellConfigurationState:(id)arg1 traitCollection:(id)arg2 floating:(BOOL)arg3 ;
-(struct _UITableConstantsBackgroundProperties )defaultSidebarCellBackgroundPropertiesWithState:(id)arg0 traitCollection:(id)arg1 isAccompanied:(BOOL)arg2 ;
-(struct _UITableConstantsBackgroundProperties )defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg0 traitCollection:(id)arg1 ;


@end


#endif