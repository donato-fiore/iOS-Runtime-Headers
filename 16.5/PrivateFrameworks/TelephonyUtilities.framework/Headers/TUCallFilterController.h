// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUCALLFILTERCONTROLLER_H
#define TUCALLFILTERCONTROLLER_H

@protocol TUCallFilterControllerActions, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUCallFilterController : NSObject

@property (readonly, weak, nonatomic) NSObject<TUCallFilterControllerActions> *actionsDelegate; // ivar: _actionsDelegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) BOOL silenceUnknownCallersEnabled;
@property (readonly, nonatomic) BOOL silenceUnknownFaceTimeCallersEnabled;


-(BOOL)containsRestrictedHandle:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)containsRestrictedHandle:(id)arg0 forBundleIdentifier:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)isUnknownAddress:(id)arg0 normalizedAddress:(id)arg1 forBundleIdentifier:(id)arg2 ;
-(BOOL)isUnknownHandle:(id)arg0 ;
-(BOOL)shouldRestrictAddresses:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(BOOL)shouldRestrictAddresses:(id)arg0 forBundleIdentifier:(id)arg1 performSynchronously:(BOOL)arg2 ;
-(BOOL)shouldRestrictAddresses:(id)arg0 performSynchronously:(BOOL)arg1 ;
-(BOOL)shouldRestrictConversation:(id)arg0 performSynchronously:(BOOL)arg1 ;
-(BOOL)shouldRestrictDialRequest:(id)arg0 ;
-(BOOL)shouldRestrictDialRequest:(id)arg0 performSynchronously:(BOOL)arg1 ;
-(BOOL)shouldRestrictJoinConversationRequest:(id)arg0 performSynchronously:(BOOL)arg1 ;
-(BOOL)willRestrictAddresses:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(NSUInteger)callFilterStatusForDialRequest:(id)arg0 ;
-(id)addressesToCheckForRestrictionsInConversation:(id)arg0 ;
-(id)bundleIdentifierForCallProvider:(id)arg0 ;
-(id)initWithActionsDelegate:(id)arg0 serialQueue:(id)arg1 ;
-(id)policyForAddresses:(id)arg0 forBundleIdentifier:(id)arg1 ;
-(id)restrictedContacts:(id)arg0 callProvider:(id)arg1 ;


@end


#endif