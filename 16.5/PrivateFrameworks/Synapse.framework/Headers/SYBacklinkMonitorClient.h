// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYBACKLINKMONITORCLIENT_H
#define SYBACKLINKMONITORCLIENT_H

@class NSXPCConnection, NSMutableSet, NSString;
@protocol SYBacklinkMonitorClientProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SYBacklinkFilterCache.h"

@interface SYBacklinkMonitorClient : NSObject <SYBacklinkMonitorClientProtocol>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_clientQueue; // ivar: __clientQueue
@property (retain, nonatomic) NSXPCConnection *_connection; // ivar: __connection
@property (retain, nonatomic) SYBacklinkFilterCache *_filterCache; // ivar: __filterCache
@property (readonly, nonatomic) NSMutableSet *_pendingCompletionBlocks; // ivar: __pendingCompletionBlocks
@property (nonatomic) BOOL _previousFilterCacheMatched; // ivar: __previousFilterCacheMatched
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_configureConnectionAndResume;
-(void)_createConnectionIfNeeded;
-(void)_invalidateConnection;
-(void)_processNotifyActiveUserActivityDidChange:(id)arg0 context:(id)arg1 serviceProxy:(id)arg2 completion:(id)arg3 ;
-(void)createConnectionWithEndpoint:(id)arg0 ;
-(void)dealloc;
-(void)notifyActiveUserActivityDidChange:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)updateWithFilterCache:(id)arg0 ;


@end


#endif