// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIIMAGECACHECLIENT_H
#define TIIMAGECACHECLIENT_H

@class NSString, NSCache, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TIImageCacheClient : NSObject {
    NSString *_path;
    NSString *_imagePath;
    BOOL _hasLocalAccess;
    int _remoteQueryCount;
    BOOL _shouldIdleWhenDone;
    NSCache *_cache;
    NSString *_versionPath;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesBackground;
    NSObject<OS_dispatch_queue> *_serialQueueRemoveImagesDefault;
    NSObject<OS_dispatch_queue> *_storeImageQueue;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSXPCConnection *_connection;
}


@property (nonatomic) NSUInteger cacheItemLimit;
@property (readonly, nonatomic) int cacheVersion;
@property (nonatomic) BOOL lockOnRead; // ivar: _lockOnRead
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storeImageQueue;


-(*void)openAndMmap:(id)arg0 withInfo:(struct _img *)arg1 ;
-(BOOL)imageExistsForKey:(id)arg0 inGroup:(id)arg1 ;
-(NSUInteger)imageCount;
-(id)_versionPath;
-(id)imagePath;
-(id)initWithLocalAccess:(BOOL)arg0 ;
-(struct CGImage *)copyImageForKey:(id)arg0 inGroup:(id)arg1 ;
-(struct _img )_imgForItem:(id)arg0 ;
-(void)_createConnectionIfNecessary;
-(void)_idleIfNecessary:(BOOL)arg0 ;
-(void)_localStoreImageForKey:(id)arg0 inGroup:(id)arg1 withItem:(id)arg2 ;
-(void)_remoteStoreImageForKey:(id)arg0 inGroup:(id)arg1 withItem:(id)arg2 ;
-(void)dealloc;
-(void)idleAfter:(CGFloat)arg0 ;
-(void)purge;
-(void)purgeMemoryCache;
-(void)removeImagesInGroups:(id)arg0 completion:(id)arg1 ;
-(void)setIdleWhenDone;
-(void)storeImageDataForKey:(id)arg0 inGroup:(id)arg1 item:(id)arg2 ;


@end


#endif