// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKASTATUSSUBSCRIPTIONMANAGER_H
#define SKASTATUSSUBSCRIPTIONMANAGER_H

@class NSMapTable, NSString;
@protocol SKAStatusSubscriptionManaging, SKAChannelManaging, SKADatabaseManaging, OS_dispatch_queue, SKAPushManaging;

#import <Foundation/Foundation.h>


@interface SKAStatusSubscriptionManager : NSObject <SKAStatusSubscriptionManaging>



@property (retain, nonatomic) NSMapTable *activePresenceSubscriptionsByClient; // ivar: _activePresenceSubscriptionsByClient
@property (retain, nonatomic) NSMapTable *activeTransientSubscriptionsByClient; // ivar: _activeTransientSubscriptionsByClient
@property (retain, nonatomic) NSObject<SKAChannelManaging> *channelManager; // ivar: _channelManager
@property (retain, nonatomic) NSObject<SKADatabaseManaging> *databaseManager; // ivar: _databaseManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue; // ivar: _internalWorkQueue
@property (retain, nonatomic) NSObject<SKAPushManaging> *pushManager; // ivar: _pushManager
@property (readonly) Class superclass;


+(id)_tooManySubscriptionsError;
+(id)logger;
-(BOOL)_activePresenceAssertionsExist;
-(BOOL)_activeTransientAssertionsExist;
-(BOOL)_addPresenceSubscriptionAssertionForClient:(id)arg0 subscriptionIdentifier:(id)arg1 ;
-(BOOL)_addTransientSubscriptionAssertionForClient:(id)arg0 subscriptionIdentifier:(id)arg1 ;
-(BOOL)_removePresenceSubscriptionAssertionForClient:(id)arg0 subscriptionIdentifier:(id)arg1 ;
-(BOOL)_removeTransientSubscriptionAssertionForClient:(id)arg0 subscriptionIdentifier:(id)arg1 ;
-(BOOL)activePresenceSubscriptionAssertionsExistForChannelIdentifier:(id)arg0 ;
-(CGFloat)_subscriptionTTL;
-(NSInteger)_hardMaxSubscriptionCount;
-(NSInteger)_maxPresenceSubscriptionCacheCount;
-(NSInteger)_maxSubscriptionCacheCount;
-(id)_activePresenceSubscriptionsForClient:(id)arg0 ;
-(id)_activeTransientSubscriptionsForClient:(id)arg0 ;
-(id)_allPersonalChannelIdentifiersRequiringSelfSubscriptionWithDatabaseContext:(id)arg0 ;
-(id)_enforceSubscriptionsHardCapOnSubscriptionIdentifiers:(id)arg0 ;
-(id)_fetchAllActivePresenceSubscriptions;
-(id)_fetchAllActiveSubscriptionAssertionsWithCache;
-(id)_fetchAllClientActiveSubscriptionAssertions;
-(id)_filterSubscriptionIdentifierToPresence:(id)arg0 ;
-(id)_filterSubscriptionIdentifierToStatus:(id)arg0 ;
-(id)_recentlyReleasedTransientSubscriptionAssertionIdentifiersExcludingSubscriptionIdentifiers:(id)arg0 count:(NSInteger)arg1 presenceCount:(NSInteger)arg2 databaseContext:(id)arg3 ;
-(id)_sortAndDedupeSubscriptionIdentifiers:(id)arg0 ;
-(id)_statusTypeIdentifiersRequiringSelfSubscription;
-(id)initWithDatabaseManager:(id)arg0 channelManager:(id)arg1 pushManager:(id)arg2 ;
-(void)_markCacheSubscriptionDateForChannelIdentifier:(id)arg0 ;
-(void)allStatusSubscriptionIdentifiersWithActiveSubscriptionsWithCompletion:(id)arg0 ;
-(void)allSubscriptionIdentifiersWithActiveAssertionsForStatusTypeIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)releaseAllPresenceSubscriptionAssertionsAssociatedWithClient:(id)arg0 completion:(id)arg1 ;
-(void)releaseAllTransientSubscriptionAssertionsAssociatedWithClient:(id)arg0 completion:(id)arg1 ;
-(void)releasePersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)releasePresenceSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 client:(id)arg1 completion:(id)arg2 ;
-(void)releaseTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 client:(id)arg2 completion:(id)arg3 ;
-(void)retainPersistentSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 applicationIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)retainPresenceSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 client:(id)arg1 completion:(id)arg2 ;
-(void)retainTransientSubscriptionAssertionForSubscriptionIdentifier:(id)arg0 statusTypeIdentifier:(id)arg1 client:(id)arg2 completion:(id)arg3 ;
-(void)updateRegisteredSubscriptionsForActiveAssertionsWithCompletion:(id)arg0 ;


@end


#endif