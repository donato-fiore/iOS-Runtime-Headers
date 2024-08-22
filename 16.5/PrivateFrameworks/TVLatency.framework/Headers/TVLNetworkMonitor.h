// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVLNETWORKMONITOR_H
#define TVLNETWORKMONITOR_H

@class NSNetServiceBrowser, NSString;
@protocol NSNetServiceBrowserDelegate, OS_nw_path_monitor, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TVLNetworkInterface.h"

@interface TVLNetworkMonitor : NSObject <NSNetServiceBrowserDelegate>



@property (retain, nonatomic) TVLNetworkInterface *awdl; // ivar: _awdl
@property (retain, nonatomic) NSNetServiceBrowser *awdlServiceBrowser; // ivar: _awdlServiceBrowser
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *awdl_monitor; // ivar: _awdl_monitor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TVLNetworkInterface *ethernet; // ivar: _ethernet
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *ethernet_monitor; // ivar: _ethernet_monitor
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // ivar: _monitorQueue
@property (nonatomic, getter=isMonitoring) BOOL monitoring; // ivar: _monitoring
@property (nonatomic) NSUInteger monitoringOptions; // ivar: _monitoringOptions
@property (readonly) Class superclass;
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (retain, nonatomic) TVLNetworkInterface *wifi; // ivar: _wifi
@property (retain, nonatomic) NSObject<OS_nw_path_monitor> *wifi_monitor; // ivar: _wifi_monitor


-(id)init;
-(void)dealloc;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)startMonitoringForInterfaceTypes:(NSUInteger)arg0 updateHandler:(id)arg1 ;
-(void)stopMonitoring;


@end


#endif