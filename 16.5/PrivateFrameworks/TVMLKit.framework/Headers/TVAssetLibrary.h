// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVASSETLIBRARY_H
#define TVASSETLIBRARY_H

@class NSString, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TVAssetLibrary : NSObject {
    NSObject<OS_dispatch_queue> *assetWriteQueue;
    NSObject<OS_dispatch_queue> *assetAccessQueue;
}


@property (copy, nonatomic) NSString *cachePath; // ivar: _cachePath
@property (retain, nonatomic) NSMutableArray *registeredGroups; // ivar: _registeredGroups


+(id)sharedInstance;
+(void)_initializeAssetLibraryWithCachePath:(id)arg0 screensaverCache:(BOOL)arg1 purgeCacheOnLoad:(BOOL)arg2 ;
+(void)initializeAssetLibraryWithCachePath:(id)arg0 ;
+(void)initializeAssetLibraryWithCachePath:(id)arg0 purgeCacheOnLoad:(BOOL)arg1 ;
+(void)intializeScreensaverSharedAssetLibrary;
-(id)assetExpiryDateForKey:(id)arg0 inGroupOfType:(NSInteger)arg1 ;
-(id)assetForKey:(id)arg0 inGroupOfType:(NSInteger)arg1 ;
-(id)assetPathForKey:(id)arg0 inGroupOfType:(NSInteger)arg1 ;
-(id)assetPathsForGroupOfType:(NSInteger)arg0 ;
-(id)cachePathForGroupOfType:(NSInteger)arg0 ;
-(id)groupWithGroupType:(NSInteger)arg0 ;
-(id)initWithCachePath:(id)arg0 screensaverCache:(BOOL)arg1 purgeCacheOnLoad:(BOOL)arg2 ;
-(id)keyForAssetWithTags:(id)arg0 inGroupOfType:(NSInteger)arg1 ;
-(void)_setImageAsset:(id)arg0 forKey:(id)arg1 inGroupOfType:(NSInteger)arg2 expiryDate:(id)arg3 overWrite:(BOOL)arg4 tags:(id)arg5 ;
-(void)purgeAssetsInGroupOfType:(NSInteger)arg0 ;
-(void)registerGroup:(id)arg0 ;
-(void)removeAssetForKey:(id)arg0 inGroupOfType:(NSInteger)arg1 ;
-(void)setImageAsset:(id)arg0 forKey:(id)arg1 inGroupOfType:(NSInteger)arg2 expiryDate:(id)arg3 ;
-(void)setImageAsset:(id)arg0 forKey:(id)arg1 inGroupOfType:(NSInteger)arg2 expiryDate:(id)arg3 overWrite:(BOOL)arg4 ;
-(void)setImageAsset:(id)arg0 forKey:(id)arg1 inGroupOfType:(NSInteger)arg2 expiryDate:(id)arg3 tags:(id)arg4 ;
-(void)setImageAssetFromPath:(id)arg0 forKey:(id)arg1 inGroupOfType:(NSInteger)arg2 expiryDate:(id)arg3 ;
-(void)setImageAssetFromPath:(id)arg0 forKey:(id)arg1 inGroupOfType:(NSInteger)arg2 expiryDate:(id)arg3 tags:(id)arg4 ;
-(void)unRegisterGroup:(NSInteger)arg0 ;
-(void)updateAssetsInGroupOfType:(NSInteger)arg0 ;


@end


#endif