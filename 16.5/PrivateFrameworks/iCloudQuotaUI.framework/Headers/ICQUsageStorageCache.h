// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUSAGESTORAGECACHE_H
#define ICQUSAGESTORAGECACHE_H

@class PSUsageBundleManager, NSMutableDictionary, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICQUsageStorageCache : NSObject {
    PSUsageBundleManager *_usageBundlesManager;
    NSMutableDictionary *_mediaCache;
    NSMutableArray *_appsCache;
    NSArray *_usageBundlesCache;
    NSObject<OS_dispatch_queue> *_cache_operation_queue;
    BOOL _cacheUpdateCancelled;
}




-(float)sizeForMediaQuery:(id)arg0 withGroupingType:(NSInteger)arg1 storingInCache:(id)arg2 withKey:(id)arg3 ;
-(float)specialStorageUsageForBundleID:(id)arg0 ;
-(id)checkAndFixUpVersion:(id)arg0 ;
-(id)init;
-(id)mediaCollectionForKey:(id)arg0 ;
-(void)cancelUsageDataPopulation;
-(void)populateMediaCache;
-(void)populateUsageAppsCacheWithHandler:(id)arg0 ;
-(void)populateUsageBundlesCacheWithHandler:(id)arg0 ;
-(void)populateUsageDataWithProgressBlock:(id)arg0 ;
-(void)removeMediaCollectionCacheForKey:(id)arg0 ;


@end


#endif