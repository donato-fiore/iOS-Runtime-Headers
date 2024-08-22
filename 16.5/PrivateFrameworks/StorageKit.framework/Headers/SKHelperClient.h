// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKHELPERCLIENT_H
#define SKHELPERCLIENT_H

@class NSXPCConnection, NSMutableDictionary, NSString;
@protocol SKHelperClientProtocol, SKDaemonProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SKHelperClient : NSObject <SKHelperClientProtocol, SKDaemonProtocol>

 {
    NSXPCConnection *_connection;
    NSMutableDictionary *_progressBlockDictionary;
    NSMutableDictionary *_completionBlockDictionary;
    NSMutableDictionary *_errorBlockDictionary;
    id *_progressBlock;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL _isInvalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *recacheAbuseLimiterInfo; // ivar: _recacheAbuseLimiterInfo
@property (readonly) Class superclass;


+(id)sharedClient;
-(BOOL)_isRecachingDiskAbuse:(id)arg0 ;
-(id)_parameters:(id)arg0 valueAtIndex:(NSUInteger)arg1 ;
-(id)_xpcConnection;
-(id)diskNotificationQueue;
-(id)init;
-(id)remoteObjectWithUUID:(id)arg0 errorHandler:(id)arg1 ;
-(id)synchronousRemoteObjecUUID:(id)arg0 tWithErrorHandler:(id)arg1 ;
-(void)_markConnectionInvalidAndCallAllCallbacks;
-(void)_scheduleCompletionUUID:(id)arg0 forFunction:(char *)arg1 withBlock:(id)arg2 ;
// -(void)_setProgressHandler:(id)arg0 forUUID:(unk)arg1  ;
-(void)childDisksForWholeDisk:(id)arg0 withCallbackBlock:(id)arg1 ;
-(void)diskForPath:(id)arg0 withCallbackBlock:(id)arg1 ;
-(void)disksAppeared:(id)arg0 ;
-(void)disksChanged:(id)arg0 ;
-(void)disksDisappeared:(id)arg0 ;
-(void)ejectDisk:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)filesystemsWithCallbackBlock:(id)arg0 ;
-(void)initialPopulateComplete;
-(void)isBusy:(id)arg0 ;
-(void)managerResumed;
-(void)managerStalled;
-(void)mountDisk:(id)arg0 options:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)physicalStoresForAPFSVolume:(id)arg0 completionBlock:(id)arg1 ;
-(void)recacheDisk:(id)arg0 options:(NSUInteger)arg1 callbackBlock:(id)arg2 ;
-(void)renameDisk:(id)arg0 to:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)requestWithUUID:(id)arg0 didCompleteWithResult:(id)arg1 ;
-(void)setDaemonLanguage:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)syncAllDisksWithCompletionBlock:(id)arg0 ;
-(void)unmountDisk:(id)arg0 options:(id)arg1 withCompletionBlock:(id)arg2 ;
-(void)unmountDisk:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)updateUUID:(id)arg0 progress:(float)arg1 message:(id)arg2 ;
-(void)volumesForAPFSPS:(id)arg0 completionBlock:(id)arg1 ;
-(void)wholeDiskForDisk:(id)arg0 withCallbackBlock:(id)arg1 ;


@end


#endif