// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWCELLPROMISEREGION_H
#define _UICOLLECTIONVIEWCELLPROMISEREGION_H

@class NSString, NSArray;
@protocol UIFocusItem, _UIFocusItemContainerPrivate, _UIFocusRegionContainer, _UILegacyFocusRegion, UICoordinateSpace, UIFocusItemContainer, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "UICollectionView.h"
#import "UIFocusEffect.h"
#import "UICollectionViewLayoutAttributes.h"
#import "UIScrollView.h"
#import "UIView.h"

@interface _UICollectionViewCellPromiseRegion : NSObject <UIFocusItem, _UIFocusItemContainerPrivate, _UIFocusRegionContainer, _UILegacyFocusRegion>



@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, nonatomic) BOOL canBecomeFocused;
@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (readonly, copy, nonatomic) UIFocusEffect *focusEffect;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSInteger focusGroupPriority;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly, nonatomic) CGRect frame;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isTransparentFocusItem;
@property (retain, nonatomic) UICollectionViewLayoutAttributes *layoutAttributes; // ivar: _layoutAttributes
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (weak, nonatomic) UIScrollView *parentScrollView; // ivar: _parentScrollView
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly) Class superclass;


-(BOOL)_isLazyFocusItemContainer;
-(BOOL)_isPromiseFocusRegion;
-(BOOL)_isTransparentFocusRegion;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_childFocusRegionsInRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;
-(id)_focusDebugOverlayParentView;
-(id)_focusRegionFocusSystem;
-(id)_focusRegionGuides;
-(id)_focusRegionView;
-(id)_fulfillPromisedFocusRegion;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)createPromiseRegion;
-(id)focusItemsInRect:(struct CGRect )arg0 ;
-(struct CGRect )_focusRegionFrame;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif