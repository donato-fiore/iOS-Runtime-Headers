// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISOQUOTACLIENT_H
#define ISOQUOTACLIENT_H


#import <Foundation/Foundation.h>


@interface ISOQuotaClient : NSObject



+(id)shared;
-(id)failsafeDelayedOfferJsonContext;
-(id)parseDelayedOffer:(id)arg0 ;
-(id)parseDelayedOfferFromJson:(id)arg0 ;
-(id)parseNotification:(id)arg0 ;
-(void)clearNotificationState:(id)arg0 ;
-(void)isNotificationPending:(id)arg0 ;
-(void)logFailsafeEvent:(id)arg0 ;
-(void)newOffer:(id)arg0 andCallback:(id)arg1 ;


@end


#endif