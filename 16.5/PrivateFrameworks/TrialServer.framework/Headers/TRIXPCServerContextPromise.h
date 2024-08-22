// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIXPCSERVERCONTEXTPROMISE_H
#define TRIXPCSERVERCONTEXTPROMISE_H

@protocol OS_dispatch_queue, TRITaskQueuing;

#import <Foundation/Foundation.h>

#import "TRIServerContext.h"

@interface TRIXPCServerContextPromise : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *fullfillmentQueue; // ivar: _fullfillmentQueue
@property (retain, nonatomic) TRIServerContext *serverContext; // ivar: _serverContext
@property (retain, nonatomic) NSObject<TRITaskQueuing> *taskQueue; // ivar: _taskQueue


-(id)init;
-(void)addBlockToExecuteAfterPromiseFullfillment:(id)arg0 ;
-(void)fullfillWithContext:(id)arg0 taskQueue:(id)arg1 ;
-(void)reject;


@end


#endif