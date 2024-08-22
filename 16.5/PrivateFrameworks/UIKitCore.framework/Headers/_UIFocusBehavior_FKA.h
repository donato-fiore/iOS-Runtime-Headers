// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFOCUSBEHAVIOR_FKA_H
#define _UIFOCUSBEHAVIOR_FKA_H

@class NSString;
@protocol _UIFocusBehavior;

#import <Foundation/Foundation.h>


@interface _UIFocusBehavior_FKA : NSObject <_UIFocusBehavior>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)controlCanBecomeFocused:(id)arg0 ;
-(BOOL)defaultValueForSelectionFollowsFocusInCollectionView:(id)arg0 ;
-(BOOL)defaultValueForSelectionFollowsFocusInTableView:(id)arg0 ;
-(BOOL)enforcesStrictTargetContentOffsetAdjustmentBehavior;
-(BOOL)honorsFocusSystemEnabledInfoPlistKey;
-(BOOL)ignoresKeyWindowStatusWhenRestoringFocus;
-(BOOL)includesContentScrollViewInPreferredFocusEnvironments;
-(BOOL)isContainerEligibleForFocusUpdateSearchRoot:(id)arg0 ;
-(BOOL)preventsCellFocusabilityWhileEditing;
-(BOOL)refinesIndexBarTargetContentOffset;
-(BOOL)searchBarTextFieldCanBecomeFocused;
-(BOOL)shouldCallAccessibilityOverrides;
-(BOOL)shouldConvertIndirectTapsIntoArrowKeys;
-(BOOL)shouldEnableFocusOnSelect;
-(BOOL)shouldSupressIndirectMovementOnSelect;
-(BOOL)shouldUseAccessibilityCompareForItemGeometry;
-(BOOL)showsFocusRingForItem:(id)arg0 ;
-(BOOL)supportViewTransparencyAndMultipleWindows;
-(BOOL)supportsArrowKeys;
-(BOOL)supportsClipToBounds;
-(BOOL)supportsGameControllers;
-(BOOL)supportsIndirectPanningMovement;
-(BOOL)supportsIndirectRotaryMovement;
-(BOOL)supportsLinearMovementDebugOverlay;
-(BOOL)supportsParentFocusRings;
-(BOOL)supportsTabKey;
-(BOOL)syncsFocusAndResponder;
-(BOOL)tabBarButtonCanBecomeFocused;
-(BOOL)tabBarCanBecomeFocused;
-(BOOL)tabBasedMovementLoops;
-(BOOL)textViewCanBecomeFocused:(id)arg0 ;
-(BOOL)throttlesProgrammaticFocusUpdates;
-(BOOL)treatFirstAndLastHeadingsAsGlobal;
-(BOOL)useDifferentialScrollTrigger;
-(BOOL)wantsFocusSystemForScene:(id)arg0 ;
-(BOOL)wantsTreeLocking;
-(CGFloat)stabilizedLinearFocusMovementTimeout;
-(NSInteger)buttonSelectionMode;
-(NSInteger)cellFocusability;
-(NSInteger)deliverKeyEventsToFocusEngine;
-(NSInteger)focusCastingMode;
-(NSInteger)focusDeferral;
-(NSInteger)focusRingVisibility;
-(NSInteger)indirectMovementPriority;
-(NSInteger)pageButtonScrollingStyle;
-(NSInteger)requiredInputDevices;
-(NSInteger)scrollingMode;
-(NSInteger)skipKeyCommandsForKeyEvents;
-(NSUInteger)focusGroupContainmentBehavior;
-(NSUInteger)focusGroupMovementBehavior;


@end


#endif