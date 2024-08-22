// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQCLOUDSTORAGESUMMARYCACHE_H
#define ICQCLOUDSTORAGESUMMARYCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICQCloudStorageSummaryCache : NSObject {
    NSMutableDictionary *_summaryCache;
    os_unfair_lock_s _cacheLock;
    id *_quotaChangeNotificationObserver;
    id *_quotaInfoChangeNotificationObserver;
    id *_cloudSubscriptionFeaturesObserver;
}




+(id)sharedInstance;
-(id)init;
-(id)storageSummaryForAltDSID:(id)arg0 ;
-(void)_cleanupCacheForPrimaryAccount;
-(void)_startObservingCloudSubscriptionFeaturesNotifications;
-(void)_startObservingQuotaChangeNotifications;
-(void)_stopObservingCloudSubscriptionFeaturesNotifications;
-(void)_stopObservingQuotaChangeNotifications;
-(void)dealloc;
-(void)setStorageSummary:(id)arg0 forAltDSID:(id)arg1 ;


@end


#endif