// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBTABGROUPSYNCAGENT_H
#define WBTABGROUPSYNCAGENT_H

@class NSString;
@protocol WBTabGroupSyncAgentProtocol;

#import <Foundation/Foundation.h>

#import "WBCollectionConfiguration.h"
#import "WBTabCollection.h"

@interface WBTabGroupSyncAgent : NSObject <WBTabGroupSyncAgentProtocol>



@property (readonly, nonatomic) WBCollectionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WBTabCollection *tabCollection; // ivar: _tabCollection


-(id)deviceIdentifier;
-(id)initWithConfiguration:(id)arg0 ;
-(void)acceptShareForURL:(id)arg0 invitationTokenData:(id)arg1 completionHandler:(id)arg2 ;
-(void)addSyncObserver:(id)arg0 ;
-(void)beginSharingTabGroupWithUUID:(id)arg0 completionHandler:(id)arg1 ;
-(void)movePresenceForParticipantToTabWithUUID:(id)arg0 ;
-(void)removeSyncObserver:(id)arg0 ;
-(void)scheduleSyncIfNeeded;
-(void)userDidAcceptCloudKitShareWithMetadata:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif