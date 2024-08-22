// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUABSTRACTSCREENTIMEOBSERVER_H
#define TUABSTRACTSCREENTIMEOBSERVER_H

@class TUDelegateController<TUAbstractScreenTimeObserverDelegate>;
@protocol TUNotifyObserver, TUScreenTimeStateDataSource;

#import <Foundation/Foundation.h>


@interface TUAbstractScreenTimeObserver : NSObject

@property (readonly, nonatomic) os_unfair_lock_s accessorLock; // ivar: _accessorLock
@property (readonly, nonatomic) TUDelegateController<TUAbstractScreenTimeObserverDelegate> *delegateController; // ivar: _delegateController
@property (readonly, nonatomic) NSObject<TUNotifyObserver> *notifyObserver; // ivar: _notifyObserver
@property (readonly, nonatomic) NSObject<TUScreenTimeStateDataSource> *screenTimeDataSource; // ivar: _screenTimeDataSource
@property (nonatomic, getter=isScreenTimeEnabled) BOOL screenTimeEnabled; // ivar: _screenTimeEnabled


-(id)initWithQueue:(id)arg0 dataSource:(id)arg1 notificationName:(id)arg2 ;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeDelegate:(id)arg0 ;
-(void)updateScreenTimeEnabled;


@end


#endif