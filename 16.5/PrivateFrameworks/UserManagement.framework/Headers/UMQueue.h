// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UMQUEUE_H
#define UMQUEUE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface UMQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)client;
+(id)server;
+(id)userList;
// -(void)_executeWithSelf:(id)arg0 block:(id)arg1 synchronously:(unk)arg2  ;
-(void)executeWithSelf:(id)arg0 asynchronously:(id)arg1 ;
-(void)executeWithSelf:(id)arg0 synchronously:(id)arg1 ;


@end


#endif