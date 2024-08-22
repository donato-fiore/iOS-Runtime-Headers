// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICOLLECTIONVIEWLISTCELL_H
#define UICOLLECTIONVIEWLISTCELL_H

@class NSDictionary, NSArray, NSLayoutConstraint, NSString;
@protocol _UICollectionViewListCellReorderControlDelegate, UITableConstantsCellProviding, UIFocusItem, UITableConstants;


#import "UICollectionViewCell.h"
#import "_UICollectionViewListCellVisualProvider.h"
#import "UILayoutGuide.h"
#import "UICellAccessoryManager.h"
#import "UIView.h"

@interface UICollectionViewListCell : UICollectionViewCell <_UICollectionViewListCellReorderControlDelegate, UITableConstantsCellProviding>

 {
    ? _listCellFlags;
    _UICollectionViewListCellVisualProvider *_visualProvider;
    NSDictionary *_accessoriesByIdentifier;
    CGFloat _extraLeadingLayoutMarginForIndentation;
    NSArray *_contentViewConstraints;
    NSLayoutConstraint *_separatorLayoutGuideHeightConstraint;
    NSLayoutConstraint *_separatorLayoutGuideLeadingConstraint;
    NSLayoutConstraint *_separatorLayoutGuideTrailingConstraint;
    UILayoutGuide *_separatorLayoutGuide;
    NSDirectionalEdgeInsets _sectionSeparatorInsets;
    CGFloat _lastPreferredLeadingSeparatorInsetFromContentView;
    CGFloat _lastPreferredTrailingSeparatorInsetFromContentView;
}


@property (copy, nonatomic, setter=_setDisclosureActionHandler:) id *_disclosureActionHandler; // ivar: __disclosureActionHandler
@property (nonatomic, getter=_expanded, setter=_setExpanded:) BOOL _expanded;
@property (weak, nonatomic, setter=_setParentFocusItem:) NSObject<UIFocusItem> *_parentFocusItem; // ivar: __parentFocusItem
@property (copy, nonatomic) NSArray *accessories; // ivar: _accessories
@property (readonly, nonatomic, getter=_accessoryManager) UICellAccessoryManager *accessoryManager; // ivar: _accessoryManager
@property (readonly, nonatomic, getter=_cellStyle) NSInteger cellStyle;
@property (readonly, nonatomic, getter=_constants) NSObject<UITableConstants> *constants; // ivar: _constants
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_defaultIndentationLevel, setter=_setDefaultIndentationLevel:) NSInteger defaultIndentationLevel; // ivar: _defaultIndentationLevel
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger indentationLevel; // ivar: _indentationLevel
@property (nonatomic) CGFloat indentationWidth; // ivar: _indentationWidth
@property (nonatomic) BOOL indentsAccessories;
@property (retain, nonatomic, getter=_itemIdentifier, setter=_setItemIdentifier:) id *itemIdentifier; // ivar: _itemIdentifier
@property (copy, nonatomic) NSArray *leadingAccessoryConfigurations; // ivar: _leadingAccessoryConfigurations
@property (copy, nonatomic) NSArray *leadingEditingAccessoryConfigurations; // ivar: _leadingEditingAccessoryConfigurations
@property (readonly, nonatomic, getter=_minimumCellAccessoryMargin) CGFloat minimumCellAccessoryMargin;
@property (readonly, nonatomic, getter=_owningViewForSeparatorLayoutGuide) UIView *owningViewForSeparatorLayoutGuide;
@property (readonly, nonatomic) UILayoutGuide *separatorLayoutGuide;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *trailingAccessoryConfigurations; // ivar: _trailingAccessoryConfigurations
@property (copy, nonatomic) NSArray *trailingEditingAccessoryConfigurations; // ivar: _trailingEditingAccessoryConfigurations


+(Class)_contentViewClass;
+(id)_createDefaultContentViewWithFrame:(struct CGRect )arg0 ;
+(id)_createVisualProviderForCell:(id)arg0 ;
-(BOOL)_canFocusProgrammatically;
-(BOOL)_canPerformActionForKey:(id)arg0 ;
-(BOOL)_cellSelectionTogglesExpansionState;
-(BOOL)_contentViewShouldBeIndented;
-(BOOL)_hasCustomSelectionAction;
-(BOOL)_isAccompaniedSidebar;
-(BOOL)_isFocusableWhenStyledAsHeader;
-(BOOL)_performActionForKey:(id)arg0 ;
-(BOOL)_removesHighlightedAndSelectedStatesForBackground;
-(BOOL)_reorderControlShouldBeginReordering:(id)arg0 ;
-(BOOL)_shouldIncreaseCellLeadingLayoutMarginForIndentation;
-(BOOL)canBeEdited;
-(CGFloat)_contentView:(id)arg0 inset:(CGFloat)arg1 convertedToCellInsetOnEdge:(NSUInteger)arg2 ;
-(CGFloat)_leadingIndentation;
-(NSInteger)_defaultFocusStyle;
-(NSInteger)_tableStyle;
-(NSInteger)selectionStyle;
-(NSUInteger)_validatedDisclosureActionForKey:(id)arg0 ;
-(id)_cellAccessoriesForConfigurations:(id)arg0 isLeadingEdge:(BOOL)arg1 ;
-(id)_cellAccessoryForConfiguration:(id)arg0 isLeadingEdge:(BOOL)arg1 usingState:(id)arg2 ;
-(id)_createSystemTypeAccessoryViewWithCellAccessory:(id)arg0 orConfiguration:(id)arg1 ;
-(id)_defaultBackgroundConfiguration;
-(id)_defaultBackgroundView;
-(id)_defaultSelectedBackgroundView;
-(id)_editingControlTintColorForStyle:(NSInteger)arg0 ;
-(id)_internalAccessoriesForCellAccessories:(id)arg0 usingState:(id)arg1 ;
-(id)_popUpMenuAccessory;
-(id)_popUpMenuAccessoryForCustomSelectionAction;
-(id)_preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(id)_viewForMultiSelectAccessory;
-(id)configurationState;
-(id)defaultBackgroundConfiguration;
-(id)defaultContentConfiguration;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct NSDirectionalEdgeInsets )_preferredSeparatorInsetsForProposedInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(struct NSDirectionalEdgeInsets )_preferredSeparatorInsetsFromContentViewWithDefaultInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(struct NSDirectionalEdgeInsets )_separatorInsetsFromLayoutGuide;
-(struct NSDirectionalEdgeInsets )_separatorInsetsFromPrimaryTextLayoutFrameWithDefaultInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(struct UIEdgeInsets )_adjustedRawLayoutMargins:(struct UIEdgeInsets )arg0 withLeadingLayoutMarginAdjustment:(CGFloat)arg1 ;
-(struct UIEdgeInsets )_contentViewInset;
-(void)_applyCellAccessoriesToNormalConfiguration:(id)arg0 editingConfiguration:(id)arg1 ;
-(void)_clearChangeHandlersForOldContentView:(id)arg0 ;
-(void)_configureFocusedFloatingContentView:(id)arg0 ;
-(void)_createAccessoryManager;
-(void)_deleteAccessoryTriggered;
-(void)_invalidatePreferredSeparatorInsetsFromContentView;
-(void)_layoutAccessoriesAndContentView;
-(void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets )arg0 ;
-(void)_performCustomSelectionAction;
-(void)_presentPopUpMenuForAccessory:(id)arg0 ;
-(void)_reorderControl:(id)arg0 didUpdateWithOffset:(struct CGPoint )arg1 ;
-(void)_reorderControlDidBeginReordering:(id)arg0 ;
-(void)_reorderControlDidEndReordering:(id)arg0 cancelled:(BOOL)arg1 ;
-(void)_resetRawLayoutMargins;
-(void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets )arg0 ;
-(void)_setContentView:(id)arg0 addToHierarchy:(BOOL)arg1 ;
-(void)_setLayoutAttributes:(id)arg0 ;
-(void)_setNeedsUpdateAccessories;
-(void)_setRawLayoutMargins:(struct UIEdgeInsets )arg0 ;
-(void)_setupChangeHandlersForNewContentView:(id)arg0 ;
-(void)_systemAccessoriesChanged;
-(void)_toggleExpansionState;
-(void)_updateAccessoriesIfNeeded;
-(void)_updateAccessoryLayoutMetrics;
-(void)_updateCellSelectionTogglesExpansionState;
-(void)_updateConfigurationUsingState:(id)arg0 ;
-(void)_updateConstants;
-(void)_updateContentViewConstraintsIfNeeded;
-(void)_updateCurrentSystemTypeAccessoryViewsUsingState:(id)arg0 ;
-(void)_updateDefaultIndentationWidth;
-(void)_updateLeadingLayoutMarginForIndentation;
-(void)_updateSeparatorConfigurationForPreferredAttributes:(id)arg0 bounds:(struct CGRect )arg1 ;
-(void)_updateSeparatorLayoutGuideForSectionSeparatorInsets:(struct NSDirectionalEdgeInsets )arg0 ;
-(void)_updateSeparatorLayoutGuideHeight;
-(void)_updateSystemTypeAccessoryView:(id)arg0 withCellAccessory:(id)arg1 orConfiguration:(id)arg2 usingState:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setEditing:(BOOL)arg0 ;
-(void)setSelectionStyle:(NSInteger)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif