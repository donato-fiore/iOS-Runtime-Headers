// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMACHINEDATAACTIONHANDLER_H
#define ICMACHINEDATAACTIONHANDLER_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ICMachineDataActionHandler : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_operationQueue;
}




+(id)sharedHandler;
-(id)init;
-(void)processAction:(id)arg0 data:(id)arg1 withRequestContext:(id)arg2 version:(NSInteger)arg3 withCompletionHandler:(id)arg4 ;
-(void)processActionFromResponse:(id)arg0 withRequestContext:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif