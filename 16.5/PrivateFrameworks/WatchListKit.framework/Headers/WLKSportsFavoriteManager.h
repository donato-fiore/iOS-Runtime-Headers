// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKSPORTSFAVORITEMANAGER_H
#define WLKSPORTSFAVORITEMANAGER_H

@class NSXPCConnection;
@protocol OS_dispatch_queue, WLKSportsFavoriteCaching;

#import <Foundation/Foundation.h>


@interface WLKSportsFavoriteManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    int _favoritesCacheSyncNotificationToken;
    int _sportsFavoriteSyncSettingChangedNotificationToken;
    NSXPCConnection *_connection;
    os_unfair_lock_s _xpcLock;
}


@property (retain) NSObject<WLKSportsFavoriteCaching> *_cache; // ivar: __cache


+(BOOL)isOptOutAvailable;
+(id)defaultManager;
-(id)_connection;
-(id)caller;
-(id)initWithCache:(id)arg0 ;
-(void)_getFavoritesIgnoringCache:(BOOL)arg0 overrideLastModifiedDate:(BOOL)arg1 completion:(id)arg2 ;
-(void)_invalidationHandler;
-(void)_perform:(id)arg0 completion:(id)arg1 ;
-(void)_performAction:(NSUInteger)arg0 withIDs:(id)arg1 caller:(id)arg2 completion:(id)arg3 ;
-(void)_performUserSettingsAction:(NSUInteger)arg0 setFavoritesSyncEnabled:(BOOL)arg1 caller:(id)arg2 completion:(id)arg3 ;
-(void)_performUserSettingsOperation:(id)arg0 completion:(id)arg1 ;
-(void)addFavorites:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)favoritesWithCompletion:(id)arg0 ;
-(void)getFavoritesIgnoringCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)getFavoritesWithCompletion:(id)arg0 ;
-(void)handleRefreshCacheNotification;
-(void)handleSyncSettingChangedNotification;
-(void)isOnboarded:(id)arg0 ;
-(void)removeFavorites:(id)arg0 completion:(id)arg1 ;
-(void)setOptInStatus:(BOOL)arg0 completion:(id)arg1 ;
-(void)watchlistd_performAction:(NSUInteger)arg0 withIDs:(id)arg1 caller:(id)arg2 overrideLastModifiedDate:(BOOL)arg3 completion:(id)arg4 ;
-(void)watchlistd_performUserSettingsAction:(NSUInteger)arg0 setFavoritesSyncEnabled:(BOOL)arg1 caller:(id)arg2 overrideLastModifiedDate:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif