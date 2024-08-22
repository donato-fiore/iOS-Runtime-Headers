// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUSAGESTORAGEMONITOR_H
#define ICQUSAGESTORAGEMONITOR_H

@class UIBarButtonItem, UILabel, NSArray;

#import <Foundation/Foundation.h>

#import "ICQUsageStorageCache.h"

@interface ICQUsageStorageMonitor : NSObject {
    UIBarButtonItem *_footerItem;
    UILabel *_footerLabel;
    NSArray *_footerItems;
    NSInteger _storageClientCount;
    ICQUsageStorageCache *_cache;
}


@property (readonly, nonatomic) float availableSize; // ivar: _availableSize
@property (readonly, nonatomic) NSArray *footerItems;
@property (nonatomic) float usedSize; // ivar: _usedSize


+(id)sharedMonitor;
-(id)init;
-(id)mediaCollectionForKey:(id)arg0 ;
-(void)_setAvailable:(float)arg0 ;
-(void)clearUsageDataCache;
-(void)deregisterUsageStorageClient;
-(void)fetchSystemSizeStrings;
-(void)flushViews;
-(void)populateUsageDataWithProgressBlock:(id)arg0 ;
-(void)registerUsageStorageClient;
-(void)removeMediaCollectionCacheForKey:(id)arg0 ;


@end


#endif