// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDRUIDSOURCECONNECTION_H
#define _UIDRUIDSOURCECONNECTION_H

@class NSXPCConnection, NSString;
@protocol _DUIClientSource, _DUIClientSessionSource, _UIDruidSourceConnection, OS_dispatch_source, _DUIServerSessionSource;

#import <Foundation/Foundation.h>


@interface _UIDruidSourceConnection : NSObject <_DUIClientSource, _DUIClientSessionSource, _UIDruidSourceConnection>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_connectionWatchdogTimer;
    id<_DUIServerSessionSource> *_serverSession;
    BOOL _cancelled;
}


@property (copy, nonatomic) id *canHandOffCancelledItemsBlock; // ivar: _canHandOffCancelledItemsBlock
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) id *dataTransferFinishedBlock; // ivar: _dataTransferFinishedBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dragCompletionBlock; // ivar: _dragCompletionBlock
@property (copy, nonatomic) id *dragPreviewProviderBlock; // ivar: _dragPreviewProviderBlock
@property (copy, nonatomic) id *handOffCancelledItemsBlock; // ivar: _handOffCancelledItemsBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)addItems:(id)arg0 withOldItemCollection:(id)arg1 ;
-(id)init;
-(void)_internalDragFailed;
-(void)beginDragWithConfiguration:(id)arg0 completion:(id)arg1 ;
-(void)cancelDrag;
-(void)checkCanHandOffCancelledItems:(id)arg0 withReply:(id)arg1 ;
-(void)dataTransferSessionFinished;
-(void)dirtyItems:(id)arg0 ;
-(void)dragDidExitApp;
-(void)dragEndedWithOperation:(NSUInteger)arg0 ;
-(void)dragFailed;
-(void)handOffCancelledItems:(id)arg0 withFence:(id)arg1 ;
-(void)requestDragPreviewsForIndexSet:(id)arg0 reply:(id)arg1 ;
-(void)takeInsideAppSourceOperationMask:(NSUInteger)arg0 outsideAppSourceOperationMask:(NSUInteger)arg1 prefersFullSizePreview:(BOOL)arg2 ;


@end


#endif