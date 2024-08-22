// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVSUBSCRIPTIONENTITLEMENTSCOORDINATOR_H
#define SSVSUBSCRIPTIONENTITLEMENTSCOORDINATOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSVSubscriptionEntitlements.h"
#import "SSXPCConnection.h"

@interface SSVSubscriptionEntitlementsCoordinator : NSObject {
    SSVSubscriptionEntitlements *_cachedEntitlements;
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}




+(id)sharedCoordinator;
-(id)_cachedSubscriptionEntitlements;
-(id)_connection;
-(id)_loadSubscriptionEntitlementsIgnoreCaches:(BOOL)arg0 error:(*id)arg1 ;
-(id)init;
-(void)_setCachedSubscriptionEntitlements:(id)arg0 ;
-(void)dealloc;
-(void)getSubscriptionEntitlements:(id)arg0 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg0 entitlementsBlock:(id)arg1 ;


@end


#endif