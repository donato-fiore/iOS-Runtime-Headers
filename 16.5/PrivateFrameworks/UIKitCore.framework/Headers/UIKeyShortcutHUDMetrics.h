// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKEYSHORTCUTHUDMETRICS_H
#define UIKEYSHORTCUTHUDMETRICS_H

@class UIFont, NSMutableArray, NSDictionary, NSMapTable;

#import <Foundation/Foundation.h>

#import "_UIKeyShortcutHUDMenu.h"
#import "_UIKeyShortcutHUDClientTraits.h"
#import "_UIKeyShortcutHUDShortcutColumnMetrics.h"
#import "UIColor.h"
#import "UIVisualEffect.h"
#import "UIView.h"
#import "_UIKeyShortcutHUDToolbarSearchCell.h"
#import "_UIKeyShortcutHUDShortcutCell.h"
#import "_UIKeyShortcutHUDToolbarCategoryCell.h"
#import "UITraitCollection.h"

@interface UIKeyShortcutHUDMetrics : NSObject

@property (nonatomic) CGFloat availableVerticalSpace; // ivar: _availableVerticalSpace
@property (weak, nonatomic) _UIKeyShortcutHUDMenu *baseMenu; // ivar: _baseMenu
@property (readonly, nonatomic) NSUInteger baseNumberOfVisibleColumns;
@property (readonly, nonatomic) UIFont *cancelButtonFont;
@property (readonly, nonatomic) UIFont *categoryHeaderFont;
@property (readonly, nonatomic) CGFloat categoryHeaderVerticalTextAdjustment;
@property (readonly, nonatomic) CGFloat cellFlashDuration;
@property (weak, nonatomic) _UIKeyShortcutHUDClientTraits *clientTraits; // ivar: _clientTraits
@property (readonly, nonatomic, getter=areShortcutAndAlternateColumnWidthsCombined) BOOL combinedShortcutAndAlternateColumnWidths; // ivar: _combinedShortcutAndAlternateColumnWidths
@property (nonatomic) CGFloat computedHUDWidthForBaseMenu; // ivar: _computedHUDWidthForBaseMenu
@property (readonly, nonatomic) NSUInteger contentSizeAdjustedMaxNumberOfCellsPerColumn;
@property (readonly, nonatomic) _UIKeyShortcutHUDMenu *displayedMenu; // ivar: _displayedMenu
@property (retain, nonatomic) NSMutableArray *displayedMenuCategoryOffsets; // ivar: _displayedMenuCategoryOffsets
@property (retain, nonatomic) NSMutableArray *displayedMenuColumnMetrics; // ivar: _displayedMenuColumnMetrics
@property (readonly, nonatomic) CGFloat displayedMenuContentWidth; // ivar: _displayedMenuContentWidth
@property (retain, nonatomic) _UIKeyShortcutHUDShortcutColumnMetrics *displayedSearchColumnMetrics; // ivar: _displayedSearchColumnMetrics
@property (readonly, nonatomic) CGFloat emptyColumnWidth;
@property (readonly, nonatomic) CGFloat hiddenMenuPanelHeight;
@property (readonly, nonatomic) CGFloat hiddenMenuPanelWidth;
@property (readonly, nonatomic) NSInteger hudBlurStyle;
@property (readonly, nonatomic, getter=isHUDShrunkToFitHorizontally) BOOL hudShrunkToFitHorizontally;
@property (readonly, nonatomic) UIFont *keyShortcutInputCharacterFont;
@property (readonly, nonatomic) UIFont *keyShortcutInputSymbolFont;
@property (readonly, nonatomic) UIFont *keyShortcutInputWordFont;
@property (readonly, nonatomic) UIFont *keyShortcutModifiersFont;
@property (readonly, nonatomic) NSUInteger maxNumberOfCellsInSearchResults;
@property (readonly, nonatomic) NSUInteger maxNumberOfCellsPerColumn;
@property (readonly, nonatomic) CGFloat maxShortcutCellWidth;
@property (readonly, nonatomic) CGFloat menuBaseVerticalContentInset;
@property (readonly, nonatomic) CGFloat menuBottomContentInset;
@property (readonly, nonatomic) CGFloat menuCellCornerRadius;
@property (readonly, nonatomic) CGFloat menuCellHeight;
@property (readonly, nonatomic) CGFloat menuCellHorizontalContentMargin;
@property (readonly, nonatomic) CGFloat menuColumnSpacing;
@property (readonly, nonatomic) CGFloat menuHorizontalContentInset;
@property (readonly, nonatomic) NSUInteger menuPanelCornerMask;
@property (readonly, nonatomic) CGFloat menuPanelStrokeWidth;
@property (readonly, nonatomic) CGFloat menuPlatterCornerRadius;
@property (readonly, nonatomic) UIColor *menuSeparatorColor;
@property (readonly, nonatomic) CGFloat menuSeparatorHorizontalMargin;
@property (readonly, nonatomic) UIVisualEffect *menuSeparatorVisualEffect;
@property (readonly, nonatomic) CGFloat menuTopContentInset;
@property (readonly, nonatomic) CGFloat minShortcutCellWidth;
@property (readonly, nonatomic) CGFloat minShortcutNameKeyCombinationSpacing;
@property (readonly, nonatomic) CGFloat minimumBottomScreenEdgeDistance;
@property (readonly, nonatomic) CGFloat minimumScreenEdgeDistance;
@property (readonly, nonatomic) NSUInteger numCellsPerColumn; // ivar: _numCellsPerColumn
@property (readonly, nonatomic) NSDictionary *platterSeparatedOptions;
@property (readonly, nonatomic) CGFloat platterShadowOpacity;
@property (readonly, nonatomic) CGFloat platterShadowRadius;
@property (readonly, nonatomic) UIColor *platterStrokeColor;
@property (readonly, nonatomic) UIVisualEffect *platterVisualEffect;
@property (readonly, nonatomic) CGFloat platterZPosition;
@property (readonly, nonatomic) CGFloat searchButtonWidth; // ivar: _searchButtonWidth
@property (readonly, nonatomic) UIColor *searchHUDTextColor;
@property (readonly, nonatomic) CGFloat searchModeMaximumMenuPanelHeight;
@property (readonly, nonatomic) CGFloat searchModeMenuBaseVerticalContentInset;
@property (readonly, nonatomic) CGFloat searchModeMenuBottomContentInset;
@property (readonly, nonatomic) CGFloat searchModeMenuTopContentInset;
@property (readonly, nonatomic) CGFloat searchModePreferredMenuPanelHeight; // ivar: _searchModePreferredMenuPanelHeight
@property (readonly, nonatomic) CGFloat searchModePreferredMenuPanelWidth;
@property (readonly, nonatomic) CGFloat searchModeStandardHUDWidth;
@property (readonly, nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (weak, nonatomic) UIView *selfSizingPlayground; // ivar: _selfSizingPlayground
@property (readonly, nonatomic) _UIKeyShortcutHUDToolbarSearchCell *selfSizingSearchCell; // ivar: _selfSizingSearchCell
@property (readonly, nonatomic) _UIKeyShortcutHUDShortcutCell *selfSizingShortcutCell; // ivar: _selfSizingShortcutCell
@property (readonly, nonatomic) _UIKeyShortcutHUDToolbarCategoryCell *selfSizingToolbarCategoryCell; // ivar: _selfSizingToolbarCategoryCell
@property (readonly, nonatomic) CGFloat separatorWidth;
@property (retain, nonatomic) NSMapTable *shortcutCellIndexPathsMap; // ivar: _shortcutCellIndexPathsMap
@property (retain, nonatomic) NSMapTable *shortcutCellMetricsMap; // ivar: _shortcutCellMetricsMap
@property (readonly, nonatomic) UIFont *shortcutSubtitleFont;
@property (readonly, nonatomic) UIColor *shortcutSubtitleTextColor;
@property (readonly, nonatomic) CGFloat shortcutTitleToSubtitleVerticalPadding;
@property (readonly, nonatomic) BOOL shouldAlignShortcutModifiersAndInputInColumn;
@property (readonly, nonatomic) BOOL shouldDisplayEscShortcutAlternative; // ivar: _shouldDisplayEscShortcutAlternative
@property (readonly, nonatomic) BOOL shouldDisplayGlobeModiferAsGlobeSymbol; // ivar: _shouldDisplayGlobeModiferAsGlobeSymbol
@property (readonly, nonatomic) BOOL shouldExtendToolbarThroughSafeArea;
@property (readonly, nonatomic) BOOL shouldMirrorShortcutInputs; // ivar: _shouldMirrorShortcutInputs
@property (readonly, nonatomic) UIFont *standardHUDFont;
@property (readonly, nonatomic) UIColor *standardHUDTextColor;
@property (readonly, nonatomic) CGFloat standardHUDWidth;
@property (readonly, nonatomic) CGFloat standardMenuPadding;
@property (readonly, nonatomic) CGFloat standardMenuPanelHeight;
@property (readonly, nonatomic) CGFloat standardMenuToolbarSpacing;
@property (readonly, nonatomic) CGFloat standardPlatterStrokeWidth;
@property (readonly, nonatomic) CGFloat standardShortcutInputReservedWidth;
@property (readonly, nonatomic) CGFloat standardShortcutModifierInputMinimumSpacing;
@property (readonly, nonatomic) CGFloat standardToolbarContentHeight;
@property (readonly, nonatomic) UIFont *toolbarCategoryRegularFont;
@property (readonly, nonatomic) UIFont *toolbarCategoryVisibleFont;
@property (readonly, nonatomic) CGFloat toolbarCellCornerRadius;
@property (readonly, nonatomic) CGFloat toolbarContentInset;
@property (readonly, nonatomic) NSUInteger toolbarPanelCornerMask;
@property (readonly, nonatomic) CGFloat toolbarPanelStrokeWidth;
@property (readonly, nonatomic) CGFloat toolbarPlatterCornerRadius;
@property (readonly, nonatomic) UIColor *toolbarSeparatorColor;
@property (readonly, nonatomic) CGFloat toolbarSeparatorVerticalMargin;
@property (readonly, nonatomic) UIVisualEffect *toolbarSeparatorVisualEffect;
@property (readonly, nonatomic) BOOL toolbarStylesCategoriesAsPageControl;
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (readonly, nonatomic) CGFloat widestToolbarCategoryCellWidth; // ivar: _widestToolbarCategoryCellWidth


+(id)currentMetrics;
+(void)setCurrentMetrics:(id)arg0 ;
-(CGFloat)_computedWidthForCategoryAtIndex:(NSUInteger)arg0 ;
-(CGFloat)_shortcutWidthAdjustmentForMetrics:(id)arg0 shortcutWidth:(CGFloat)arg1 ;
-(CGFloat)_toolbarContentToWindowBottomEdgeSpacing;
-(CGFloat)_toolbarDistanceFromBottomOfWindow;
-(CGFloat)_toolbarHeight;
-(CGFloat)cellWidthForShortcut:(id)arg0 ;
-(CGFloat)contentSizeScaledMetric:(CGFloat)arg0 ;
-(CGFloat)headerWidthForCategory:(id)arg0 ;
-(CGFloat)horizontalOffsetForCategoryAtIndex:(NSUInteger)arg0 ;
-(CGFloat)inputWidthForShortcut:(id)arg0 ;
-(CGFloat)modifiersWidthForShortcut:(id)arg0 ;
-(NSUInteger)categoryIndexAtHorizontalOffset:(CGFloat)arg0 ;
-(void)_computeAndStoreCellMetricsForShortcut:(id)arg0 indexPath:(id)arg1 ;
-(void)_updateBaseMenuMetrics;
-(void)_updateDisplayedMenuMetrics;
-(void)_updateDisplayedSearchMenuMetrics;
-(void)_updateDisplayedStandardMenuMetrics;
-(void)computeOneTimeMetrics;


@end


#endif