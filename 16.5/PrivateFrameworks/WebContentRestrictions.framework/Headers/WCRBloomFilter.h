// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCRBLOOMFILTER_H
#define WCRBLOOMFILTER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WCRAppleAllowList.h"
#import "WCRAutoAssetClient.h"
#import "_TtC22WebContentRestrictions15BloomFilterShim.h"

@interface WCRBloomFilter : NSObject

@property (retain) WCRAppleAllowList *appleAllowList; // ivar: _appleAllowList
@property (retain, nonatomic) WCRAutoAssetClient *autoAsset; // ivar: _autoAsset
@property (retain) _TtC22WebContentRestrictions15BloomFilterShim *bloomFilter; // ivar: _bloomFilter
@property (retain, nonatomic) NSString *localPath; // ivar: _localPath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadAssetQueue; // ivar: _reloadAssetQueue


+(BOOL)_shouldBlock:(id)arg0 withBloomFilter:(id)arg1 ;
+(id)_matchingStringsForDomain:(id)arg0 ;
+(id)_matchingStringsForURL:(id)arg0 ;
+(id)_nameOfNewestFile:(id)arg0 ;
+(void)reportAnalyticsBloomFilterBlocked;
+(void)reportAnalyticsBloomFilterVersion:(id)arg0 withAppleAllowListVersion:(id)arg1 ;
-(BOOL)shouldBlock:(id)arg0 ;
-(id)init;
-(id)initFromFile:(id)arg0 ;
-(void)_loadAssets;
-(void)_loadFallbackAssets;
-(void)_loadMobileAssets;


@end


#endif