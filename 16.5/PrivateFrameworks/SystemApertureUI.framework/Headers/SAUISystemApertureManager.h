// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAUISYSTEMAPERTUREMANAGER_H
#define SAUISYSTEMAPERTUREMANAGER_H

@class NSMapTable, NSMutableSet, NSPointerArray, NSArray, UIViewController<SAUIElementViewControlling>, NSString;
@protocol SAElementHosting, SAAlertingConfiguring, SAUILayoutHostingPrivate, SAUILayoutSpecifyingOverridingParticipant, SAUIElementViewControllingObserving, SAElementRegistering, SAElementConsidering, SAUISystemApertureManagerDelegate;

#import <Foundation/Foundation.h>


@interface SAUISystemApertureManager : NSObject <SAElementHosting, SAAlertingConfiguring, SAUILayoutHostingPrivate, SAUILayoutSpecifyingOverridingParticipant, SAUIElementViewControllingObserving, SAElementRegistering>

 {
    id<SAElementConsidering> *_elementAuthority;
    NSMapTable *_elementsToElementViewControllers;
    NSMutableSet *_removedElementViewControllers;
    NSPointerArray *_elements;
    NSMapTable *_elementsToAssertions;
    NSMapTable *_elementsToInvalidatedAssertions;
    NSArray *_temporallyOrderedElements;
    NSPointerArray *_mostPromotedElements;
    UIViewController<SAUIElementViewControlling> *_indicatorElementViewController;
    BOOL _promotedStateIsValid;
}


@property (readonly, nonatomic) NSInteger behaviorOverridingRole;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SAUISystemApertureManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController<SAUIElementViewControlling> *indicatorElementViewController;
@property (readonly, copy, nonatomic) NSArray *orderedElementViewControllers; // ivar: _orderedElementViewControllers
@property (readonly, copy, nonatomic) NSArray *registeredElements;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_axLayoutSpecifierRequestsCollapseIfExpandedByUserInteraction:(id)arg0 ;
-(BOOL)viewProviderShouldAvoidAppearanceTransitionInitialization:(id)arg0 ;
-(BOOL)viewProviderShouldMakeSensorShadowVisible:(id)arg0 ;
-(CGFloat)alertingDurationForHost:(id)arg0 ;
-(CGFloat)concentricPaddingForProvidedView:(id)arg0 fromViewProvider:(id)arg1 ;
-(CGFloat)viewProviderSensorShadowOpacityFactor:(id)arg0 ;
-(NSUInteger)_maximumNumberOfSimultaneouslyVisibleElements;
-(id)_assertionForElement:(id)arg0 ;
-(id)_assertionForElementCreatingIfNecessary:(id)arg0 ;
-(id)_elementViewControllerForElement:(id)arg0 creatingIfNecessary:(BOOL)arg1 ;
-(id)_invalidatedAssertionForElement:(id)arg0 ;
-(id)_temporallyOrderedVisibleAlertAndActivityElements;
-(id)elementAssertionForElement:(id)arg0 ;
-(id)elementViewControllerForElement:(id)arg0 ;
-(id)initWithElementAuthority:(id)arg0 ;
-(id)registerElement:(id)arg0 ;
-(struct CGRect )interSensorRegionInContentView:(id)arg0 ;
-(struct CGRect )sensorRegionInContentView:(id)arg0 fromViewProvider:(id)arg1 ;
-(struct CGRect )sensorRegionObstructingViewProvider:(id)arg0 inContentView:(id)arg1 ;
-(struct NSDirectionalEdgeInsets )edgeOutsetsForSize:(struct CGSize )arg0 ;
-(void)_addInvalidatedAssertion:(id)arg0 forElement:(id)arg1 ;
-(void)_axLayoutSpecifierRequestsDiminishment:(id)arg0 ;
-(void)_compactElements;
-(void)_elementAssertionDidInvalidate:(id)arg0 ;
-(void)_invalidatePromotedState;
-(void)_invalidateTemporallyOrderedElements;
-(void)_purgeRemovedElementViewControllers;
-(void)_reevaluatePromotedElements;
-(void)_removeAssertionForElement:(id)arg0 ;
-(void)_removeElementViewController:(id)arg0 ;
-(void)_removeInvalidatedAssertionForElement:(id)arg0 ;
-(void)_requestHostNeedsLayout;
-(void)elementRequestsNegativeResponse:(id)arg0 ;
-(void)elementRequestsSignificantUpdateTransition:(id)arg0 ;
-(void)elementViewControllingDidDisappear:(id)arg0 ;
-(void)hostWillPerformLayout;
-(void)invalidatePromotedElements;
-(void)menuPresentationRequestDidChangeForLayoutSpecifier:(id)arg0 ;
-(void)preferredEdgeOutsetsDidInvalidateForLayoutSpecifier:(id)arg0 ;
-(void)preferredLayoutModeDidInvalidateForLayoutSpecifier:(id)arg0 ;
-(void)setLayoutMode:(NSInteger)arg0 reason:(NSInteger)arg1 forTargetWithOverrider:(id)arg2 ;


@end


#endif