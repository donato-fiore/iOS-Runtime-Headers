// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WCRAUTOASSETCLIENT_H
#define WCRAUTOASSETCLIENT_H

@class MAAutoAssetSelector;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WCRAutoAssetClient : NSObject

@property (copy, nonatomic) id *assetDidChangeHandler; // ivar: _assetDidChangeHandler
@property (retain, nonatomic) MAAutoAssetSelector *currentAssetSelector; // ivar: _currentAssetSelector
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue


-(BOOL)_createInterestInAssetType:(id)arg0 withAssetSpecifier:(id)arg1 withError:(*id)arg2 ;
-(id)_lockLocalAsset;
-(id)initWithError:(*id)arg0 ;
-(id)startUsingLocalAsset;
-(void)_endLocalAssetLocks;
-(void)_handleAssetChangedNotification;
-(void)_registerForNotificationsForAssetType:(id)arg0 andAssetSpecifier:(id)arg1 ;
-(void)_removeInterestInAssetType:(id)arg0 withAssetSpecifier:(id)arg1 withError:(*id)arg2 ;
-(void)registerForAssetChangedNotificationsWithBlock:(id)arg0 ;
-(void)stopUsingLocalAsset;


@end


#endif