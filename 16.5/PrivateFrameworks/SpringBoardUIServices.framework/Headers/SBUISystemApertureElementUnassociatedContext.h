// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUISYSTEMAPERTUREELEMENTUNASSOCIATEDCONTEXT_H
#define SBUISYSTEMAPERTUREELEMENTUNASSOCIATEDCONTEXT_H

@class NSString;
@protocol SBUISystemApertureElementContext;

#import <Foundation/Foundation.h>

#import "SBUISystemApertureElementTransitionContext.h"

@interface SBUISystemApertureElementUnassociatedContext : NSObject <SBUISystemApertureElementContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFallbackContext) BOOL fallbackContext;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBUISystemApertureElementTransitionContext *transitionContext; // ivar: transitionContext


+(id)unassociatedContext;
-(id)requestAlertingAssertion;
-(void)_logErrorForSelectorIfNeeded:(SEL)arg0 ;
-(void)elementDidDismissMenu;
-(void)elementWillPresentMenu;
-(void)requestNegativeResponseAnimation;
-(void)requestTransitionToMaximumSupportedLayoutMode;
-(void)requestTransitionToPreferredLayoutMode;
-(void)setElementNeedsLayoutUpdateWithOptions:(NSUInteger)arg0 coordinatedAnimations:(id)arg1 ;
-(void)setElementNeedsUpdate;
-(void)setElementNeedsUpdateWithCoordinatedAnimations:(id)arg0 ;


@end


#endif