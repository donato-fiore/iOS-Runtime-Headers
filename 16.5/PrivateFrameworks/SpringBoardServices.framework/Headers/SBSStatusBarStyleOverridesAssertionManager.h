// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSSTATUSBARSTYLEOVERRIDESASSERTIONMANAGER_H
#define SBSSTATUSBARSTYLEOVERRIDESASSERTIONMANAGER_H

@class NSMutableDictionary, NSMapTable, NSString, NSXPCConnection;
@protocol BSDescriptionProviding, SBSStatusBarStyleOverridesAssertionClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SBSStatusBarStyleOverridesCoordinator.h"

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <BSDescriptionProviding, SBSStatusBarStyleOverridesAssertionClient>



@property (retain, nonatomic) NSMutableDictionary *acquisitionHandlerEntriesByIdentifier; // ivar: _acquisitionHandlerEntriesByIdentifier
@property (retain, nonatomic) NSMapTable *assertionsByIdentifier; // ivar: _assertionsByIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue; // ivar: _coordinatorCalloutQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (weak, nonatomic) SBSStatusBarStyleOverridesCoordinator *internalQueue_styleOverrideCoordinator; // ivar: _internalQueue_styleOverrideCoordinator
@property (retain, nonatomic) NSXPCConnection *sbXPCConnection; // ivar: _sbXPCConnection
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_handleXPCConnectionInvalidation;
-(void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg0 invalidate:(BOOL)arg1 ;
-(void)_internalQueue_updateRegistrationForCoordinator:(id)arg0 reply:(id)arg1 ;
-(void)_reactivateAssertions;
-(void)_registerStyleOverrideCoordinatorAfterInterruption;
// -(void)addStatusBarStyleOverridesAssertion:(id)arg0 withHandler:(id)arg1 onQueue:(unk)arg2  ;
-(void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg0 ;
-(void)removeStatusBarStyleOverridesAssertion:(id)arg0 ;
-(void)statusBarTappedWithContext:(id)arg0 reply:(id)arg1 ;
-(void)unregisterCoordinator;
-(void)updateRegistrationForCoordinator:(id)arg0 reply:(id)arg1 ;
-(void)updateStatusStringForAssertion:(id)arg0 ;


@end


#endif