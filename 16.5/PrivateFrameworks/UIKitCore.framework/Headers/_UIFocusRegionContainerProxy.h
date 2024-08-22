// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSREGIONCONTAINERPROXY_H
#define _UIFOCUSREGIONCONTAINERPROXY_H

@class NSString, NSArray;
@protocol _UIFocusRegionContainer, UIFocusItemContainer, UIFocusEnvironment;

#import <Foundation/Foundation.h>

#import "_UIFocusEnvironmentContainerTuple.h"
#import "UIView.h"

@interface _UIFocusRegionContainerProxy : NSObject <_UIFocusRegionContainer>



@property (nonatomic) BOOL allowsLazyLoading; // ivar: _allowsLazyLoading
@property (nonatomic) BOOL areChildrenFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_isEligibleForFocusInteraction) BOOL eligibleForFocusInteraction;
@property (readonly, nonatomic, getter=_isEligibleForFocusOcclusion) BOOL eligibleForFocusOcclusion;
@property (retain, nonatomic) _UIFocusEnvironmentContainerTuple *environmentContainer; // ivar: _environmentContainer
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic, getter=_linearFocusMovementSequences) NSArray *linearFocusMovementSequences;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, nonatomic, getter=_preferredFocusMovementStyle) NSInteger preferredFocusMovementStyle;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (nonatomic) BOOL shouldCreateRegionForGuideBehavior; // ivar: _shouldCreateRegionForGuideBehavior
@property (nonatomic) BOOL shouldCreateRegionForOwningItem; // ivar: _shouldCreateRegionForOwningItem
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)_itemContainer;
-(id)_owningEnvironment;
-(id)_preferredFocusRegionCoordinateSpace;
-(id)initWithEnvironmentContainer:(id)arg0 ;
-(id)initWithOwningEnvironment:(id)arg0 itemContainer:(id)arg1 ;
-(void)_searchForFocusRegionsInContext:(id)arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setNeedsFocusUpdate;
-(void)updateFocusIfNeeded;


@end


#endif