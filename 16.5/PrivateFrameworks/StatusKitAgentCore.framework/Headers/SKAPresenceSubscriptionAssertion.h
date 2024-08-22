// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAPRESENCESUBSCRIPTIONASSERTION_H
#define SKAPRESENCESUBSCRIPTIONASSERTION_H

@class NSString;
@protocol OS_os_activity;

#import <Foundation/Foundation.h>


@interface SKAPresenceSubscriptionAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity; // ivar: _osActivity
@property (readonly, copy, nonatomic) NSString *subscriptionIdentifier; // ivar: _subscriptionIdentifier


+(id)logger;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPresenceSubscription:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithSubscriptionIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif