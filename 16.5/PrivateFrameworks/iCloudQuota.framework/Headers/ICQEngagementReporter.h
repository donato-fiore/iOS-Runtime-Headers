// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQENGAGEMENTREPORTER_H
#define ICQENGAGEMENTREPORTER_H


#import <Foundation/Foundation.h>


@interface ICQEngagementReporter : NSObject



+(id)_createOpportunityBubbleFrom:(id)arg0 bundleID:(id)arg1 ;
+(id)_eventNameForEngagementType:(NSInteger)arg0 ;
+(id)_placementDictionary;
+(void)_sendBubbleDisplayedEventFor:(id)arg0 ;
+(void)_sendImpressionEventWithName:(id)arg0 bundleID:(id)arg1 ;
+(void)_sendSubscriptionChangedEvent;
+(void)fetchBubbleContentWithBundleID:(id)arg0 completion:(id)arg1 ;
+(void)sendEventFor:(NSInteger)arg0 withBundleID:(id)arg1 link:(id)arg2 ;
+(void)shouldShowOpportunityBubbleWithBundleID:(id)arg0 completion:(id)arg1 ;


@end


#endif