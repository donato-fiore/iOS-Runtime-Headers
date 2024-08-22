// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIFOCUSUPDATECONTEXT_H
#define UIFOCUSUPDATECONTEXT_H

@class NSString, NSArray;
@protocol UIFocusEnvironment, _UIFocusBehavior, UIFocusItem, _UIFocusUpdateRequesting;

#import <Foundation/Foundation.h>

#import "_UIFocusEnvironmentScrollableContainerTuple.h"
#import "_UIFocusItemInfo.h"
#import "_UIDynamicFocusGroupMap.h"
#import "_UIFocusMapSearchInfo.h"
#import "_UIFocusMovementInfo.h"
#import "UIFocusGuide.h"
#import "UIView.h"
#import "_UIDebugLogReport.h"
#import "UIImage.h"
#import "_UIDebugIssueReport.h"

@interface UIFocusUpdateContext : NSObject {
    ? _flags;
}


@property (readonly, weak, nonatomic, getter=_commonAncestorEnvironment) NSObject<UIFocusEnvironment> *commonAncestorEnvironment; // ivar: _commonAncestorEnvironment
@property (retain, nonatomic, getter=_commonEnvironmentScrollableContainer, setter=_setCommonEnvironmentScrollableContainer:) _UIFocusEnvironmentScrollableContainerTuple *commonEnvironmentScrollableContainer; // ivar: _commonEnvironmentScrollableContainer
@property (nonatomic, getter=_isDeferredUpdate, setter=_setDeferredUpdate:) BOOL deferredUpdate; // ivar: _deferredUpdate
@property (readonly, copy, nonatomic, getter=_destinationItemInfo) _UIFocusItemInfo *destinationItemInfo; // ivar: _destinationItemInfo
@property (nonatomic, getter=_destinationViewDistanceOffscreen, setter=_setDestinationViewDistanceOffscreen:) CGFloat destinationViewDistanceOffscreen; // ivar: _destinationViewDistanceOffscreen
@property (readonly, nonatomic) NSObject<_UIFocusBehavior> *focusBehavior; // ivar: _focusBehavior
@property (retain, nonatomic, getter=_focusGroupMap, setter=_setFocusGroupMap:) _UIDynamicFocusGroupMap *focusGroupMap; // ivar: _focusGroupMap
@property (readonly, nonatomic) NSUInteger focusHeading;
@property (retain, nonatomic, getter=_focusMapSearchInfo, setter=_setFocusMapSearchInfo:) _UIFocusMapSearchInfo *focusMapSearchInfo; // ivar: _focusMapSearchInfo
@property (readonly, nonatomic, getter=_focusMovement) _UIFocusMovementInfo *focusMovement; // ivar: _focusMovement
@property (readonly, nonatomic, getter=_focusRedirectedByGuide) BOOL focusRedirectedByGuide; // ivar: _focusRedirectedByGuide
@property (readonly, nonatomic, getter=_focusVelocity) CGVector focusVelocity;
@property (readonly, weak, nonatomic, getter=_focusedGuide) UIFocusGuide *focusedGuide; // ivar: _focusedGuide
@property (readonly, nonatomic, getter=_groupFilter) NSInteger groupFilter;
@property (readonly, weak, nonatomic, getter=_initialDestinationEnvironment) NSObject<UIFocusEnvironment> *initialDestinationEnvironment; // ivar: _initialDestinationEnvironment
@property (readonly, nonatomic, getter=_nextFocusedGroupIdentifier) NSString *nextFocusedGroupIdentifier; // ivar: _nextFocusedGroupIdentifier
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *nextFocusedItem;
@property (readonly, weak, nonatomic) UIView *nextFocusedView;
@property (retain, nonatomic, getter=_preferredFocusReport, setter=_setPreferredFocusReport:) _UIDebugLogReport *preferredFocusReport; // ivar: _preferredFocusReport
@property (readonly, nonatomic, getter=_previouslyFocusedGroupIdentifier) NSString *previouslyFocusedGroupIdentifier; // ivar: _previouslyFocusedGroupIdentifier
@property (readonly, weak, nonatomic) NSObject<UIFocusItem> *previouslyFocusedItem;
@property (readonly, weak, nonatomic) UIView *previouslyFocusedView;
@property (retain, nonatomic, getter=_regionMapSnapshots, setter=_setRegionMapSnapshots:) NSArray *regionMapSnapshots; // ivar: _regionMapSnapshots
@property (readonly, nonatomic, getter=_regionMapSnapshotsVisualRepresentation) UIImage *regionMapSnapshotsVisualRepresentation; // ivar: _regionMapSnapshotsVisualRepresentation
@property (readonly, nonatomic, getter=_request) NSObject<_UIFocusUpdateRequesting> *request; // ivar: _request
@property (readonly, copy, nonatomic, getter=_sourceItemInfo) _UIFocusItemInfo *sourceItemInfo; // ivar: _sourceItemInfo
@property (retain, nonatomic, getter=_validationReport, setter=_setValidationReport:) _UIDebugIssueReport *validationReport; // ivar: _validationReport


+(id)_defaultValidationReportFormatter;
-(BOOL)_isFilteredToGroup;
-(BOOL)_isValidInFocusSystem:(id)arg0 ;
-(BOOL)_validate;
-(id)_focusMapSnapshotDebugInfoArray;
-(id)_initWithContext:(id)arg0 ;
-(id)_initWithFocusMovementRequest:(id)arg0 nextFocusedItem:(id)arg1 ;
-(id)_initWithFocusUpdateRequest:(id)arg0 ;
-(id)_publicRegionMapSnapshots;
-(id)debugQuickLookObject;
-(id)description;
-(id)init;
-(void)_cacheFocusBehavior;
-(void)_didUpdateFocus;
-(void)_restoreRestrictedFocusMovementWithMovement:(id)arg0 ;
-(void)_updateDestinationItemIfNeeded;
-(void)_updateWithFocusGroupMap:(id)arg0 ;
-(void)_willUpdateFocusFromFocusedItem:(id)arg0 ;


@end


#endif