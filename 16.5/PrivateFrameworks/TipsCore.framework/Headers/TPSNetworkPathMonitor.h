// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSNETWORKPATHMONITOR_H
#define TPSNETWORKPATHMONITOR_H

@class NSMapTable;
@protocol OS_nw_path, OS_dispatch_queue, OS_dispatch_source, OS_nw_path_monitor;

#import <Foundation/Foundation.h>


@interface TPSNetworkPathMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_nw_path> *currentPath; // ivar: _currentPath
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // ivar: _monitorQueue
@property (nonatomic, getter=isNetworkConstrained) BOOL networkConstrained; // ivar: _networkConstrained
@property (nonatomic, getter=isNetworkExpensive) BOOL networkExpensive; // ivar: _networkExpensive
@property (nonatomic) BOOL networkPathMonitorActive; // ivar: _networkPathMonitorActive
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable; // ivar: _networkReachable
@property (retain, nonatomic) NSObject<OS_dispatch_source> *notifyTimer; // ivar: _notifyTimer
@property (retain, nonatomic) NSMapTable *observers; // ivar: _observers
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *pathMonitor; // ivar: _pathMonitor
@property (nonatomic) BOOL shouldNotify; // ivar: _shouldNotify


+(id)sharedMonitor;
-(BOOL)isNetworkError:(id)arg0 ;
-(BOOL)usesCellularConnection;
-(BOOL)usesWifiConnection;
-(id)description;
-(id)init;
-(void)_cancelPendingNotifications;
-(void)_initializeMonitor;
-(void)_initializeMonitorIfNeeded;
-(void)_networkPathUpdated:(id)arg0 ;
-(void)_notifyObserversWithDelay:(CGFloat)arg0 usingBlock:(id)arg1 ;
-(void)_uninitializeMonitor;
-(void)addObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif