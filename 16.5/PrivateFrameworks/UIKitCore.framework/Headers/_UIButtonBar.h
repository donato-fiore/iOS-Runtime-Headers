// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBUTTONBAR_H
#define _UIBUTTONBAR_H

@class NSLayoutDimension, NSLayoutConstraint, NSMutableArray, NSMapTable, UIView<UIPointerInteractionDelegate>, NSArray, NSString;
@protocol UIPointerInteractionDelegate, _UIButtonBarGroupOrderOwner, _UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding, _UIButtonBarAppearanceDelegate, _UIButtonBarDelegate;

#import <Foundation/Foundation.h>

#import "_UIButtonBarStackView.h"
#import "UIView.h"
#import "_UIButtonBarLayoutMetrics.h"
#import "_UIPointerInteractionAssistant.h"
#import "_UIBarButtonItemData.h"
#import "_UIButtonBarGroupOrderer.h"
#import "UIBarButtonItem.h"

@interface _UIButtonBar : NSObject <UIPointerInteractionDelegate, _UIButtonBarGroupOrderOwner, _UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding>

 {
    _UIButtonBarStackView *_stackView;
    NSLayoutDimension *_flexibleSpaceEqualSizeAnchor;
    NSLayoutDimension *_minimumInterItemSpaceAnchor;
    NSLayoutConstraint *_minimumInterItemSpaceConstraint;
    UIView *_centeredView;
    NSLayoutConstraint *_centeringConstraint;
    _UIButtonBarLayoutMetrics *_layoutMetrics;
    NSMutableArray *_groupLayouts;
    NSMutableArray *_effectiveLayout;
    NSMapTable *_groupLayoutMap;
    NSMutableArray *_layoutViews;
    NSMutableArray *_layoutGuides;
    NSMutableArray *_layoutActiveConstraints;
    NSMapTable *_senderActionMap;
    ? _buttonBarFlags;
}


@property (weak, nonatomic) NSObject<_UIButtonBarAppearanceDelegate> *_appearanceDelegate; // ivar: __appearanceDelegate
@property (readonly, nonatomic) UIView *_viewForOverlayRects;
@property (nonatomic) BOOL allowsViewWrappers;
@property (weak, nonatomic) _UIPointerInteractionAssistant *assistant; // ivar: _assistant
@property (readonly, nonatomic) UIView<UIPointerInteractionDelegate> *assistantView;
@property (copy, nonatomic) NSArray *barButtonGroups; // ivar: _barButtonGroups
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id *defaultActionFilter; // ivar: _defaultActionFilter
@property (weak, nonatomic) NSObject<_UIButtonBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIBarButtonItemData *doneItemAppearance; // ivar: _doneItemAppearance
@property (readonly, nonatomic) BOOL doneItemAppearanceNeedsUpdate;
@property (readonly, copy, nonatomic) NSArray *elementsForOverflowMenu;
@property (readonly, copy, nonatomic) NSArray *elementsRepresentingOrderedGroups;
@property (copy, nonatomic) NSArray *fixedLeadingGroups; // ivar: _fixedLeadingGroups
@property (copy, nonatomic) NSArray *fixedTrailingGroups; // ivar: _fixedTrailingGroups
@property (nonatomic) BOOL forceFixedSpacing; // ivar: _forceFixedSpacing
@property (retain, nonatomic) _UIButtonBarGroupOrderer *groupOrderer; // ivar: _groupOrderer
@property (readonly, copy, nonatomic) NSArray *groupRealizedOrder;
@property (readonly, nonatomic) BOOL hasAlwaysOverflowGroups;
@property (readonly, nonatomic) BOOL hasVisibleContent;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSDirectionalEdgeInsets hitTestDirectionalInsets;
@property (nonatomic) UIEdgeInsets hitTestInsets;
@property (nonatomic) NSInteger itemDistribution;
@property (nonatomic) BOOL itemsInGroupUseSameSize; // ivar: _itemsInGroupUseSameSize
@property (readonly, nonatomic) UIBarButtonItem *leadingVisibleItem;
@property (nonatomic) CGFloat minimumInterItemSpace; // ivar: _minimumInterItemSpace
@property (readonly, nonatomic) BOOL needsLeadingSpacer;
@property (readonly, nonatomic) BOOL needsTrailingSpacer;
@property (retain, nonatomic) _UIBarButtonItemData *plainItemAppearance; // ivar: _plainItemAppearance
@property (readonly, nonatomic) BOOL plainItemAppearanceNeedsUpdate;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAlwaysOverflowGroups; // ivar: _supportsAlwaysOverflowGroups
@property (nonatomic) BOOL supportsOverflow; // ivar: _supportsOverflow
@property (nonatomic) CGFloat targetLayoutWidth; // ivar: _targetLayoutWidth
@property (readonly, nonatomic) UIBarButtonItem *trailingClippingItem;
@property (readonly, nonatomic) UIBarButtonItem *trailingVisibleItem;
@property (readonly, nonatomic) UIView *view;
@property (copy, nonatomic) id *viewUpdater; // ivar: _viewUpdater
@property (readonly, nonatomic) ? widthInfo;


-(BOOL)_itemDidUpdateMenu:(id)arg0 fromMenu:(id)arg1 ;
-(id)_groupOrdererGroups:(id)arg0 ;
-(id)_layoutForGroup:(id)arg0 ;
-(id)_targetActionForBarButtonItem:(id)arg0 ;
-(id)_updatedViewForBarButtonItem:(id)arg0 withView:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)itemAtPoint:(struct CGPoint )arg0 inView:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_appearanceChanged;
-(void)_buttonBarStackViewDidLayoutSubviews:(id)arg0 ;
-(void)_confirmOwnershipOfFixedGroups;
-(void)_disablePointerInteractions;
-(void)_enablePointerInteractions;
-(void)_enumerateAllGroups:(id)arg0 ;
-(void)_enumerateLayoutGroups:(id)arg0 ;
-(void)_groupDidUpdateItems:(id)arg0 removedItems:(id)arg1 ;
-(void)_groupDidUpdateRepresentative:(id)arg0 fromRepresentative:(id)arg1 ;
-(void)_groupDidUpdateVisibility:(id)arg0 ;
-(void)_groupOrdererDidUpdate:(id)arg0 ;
-(void)_invalidateAssistant:(id)arg0 ;
-(void)_itemCustomViewDidChange:(id)arg0 fromView:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg0 ;
-(void)_itemDidChangeHiddenState:(id)arg0 ;
-(void)_itemDidChangeSelectionState:(id)arg0 ;
-(void)_itemDidChangeWidth:(id)arg0 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg0 ;
-(void)_layoutBar;
-(void)_setNeedsAppearanceUpdate;
-(void)_setNeedsVisualUpdate;
-(void)_updateForTraitCollectionChange:(id)arg0 ;
-(void)_updateHitRects;
-(void)_validateAllItems;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pointerInteraction:(id)arg0 willEnterRegion:(id)arg1 animator:(id)arg2 ;
-(void)pointerInteraction:(id)arg0 willExitRegion:(id)arg1 animator:(id)arg2 ;
-(void)setNeedsHitTestUpdate;


@end


#endif