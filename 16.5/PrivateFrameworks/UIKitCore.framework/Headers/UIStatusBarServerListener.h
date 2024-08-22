// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARSERVERLISTENER_H
#define UISTATUSBARSERVERLISTENER_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_workloop, OS_dispatch_mach;

#import <Foundation/Foundation.h>


@interface UIStatusBarServerListener : NSObject {
    NSMutableArray *_clientPorts;
    NSMutableArray *_publishers;
    NSObject<OS_dispatch_workloop> *_workloop;
    NSObject<OS_dispatch_mach> *_channel;
    os_unfair_lock_s _publishersLock;
    ? _overrides;
}


@property (readonly, copy, nonatomic) NSArray *allPublishers;


+(id)sharedInstance;
-(BOOL)_permanentizeStatusBarOverrideData;
-(NSUInteger)_styleOverrides;
-(id)_publisherForPort:(unsigned int)arg0 ;
-(id)init;
-(struct ? *)_statusBarOverrideData;
-(void)_addClient:(unsigned int)arg0 ;
-(void)_addStatusBarItem:(int)arg0 forPublisher:(id)arg1 ;
-(void)_addStyleOverrides:(NSUInteger)arg0 forPublisher:(id)arg1 broadcasting:(BOOL)arg2 ;
-(void)_broadcastStyleOverrides;
-(void)_postStatusBarOverrideData:(struct ? *)arg0 ;
-(void)_removeClient:(struct __CFMachPort *)arg0 ;
-(void)_removePublisher:(struct __CFMachPort *)arg0 ;
-(void)_removeStatusBarItem:(int)arg0 forPublisher:(id)arg1 ;
-(void)_removeStyleOverrides:(NSUInteger)arg0 forPublisher:(id)arg1 broadcasting:(BOOL)arg2 ;
-(void)async:(id)arg0 ;


@end


#endif