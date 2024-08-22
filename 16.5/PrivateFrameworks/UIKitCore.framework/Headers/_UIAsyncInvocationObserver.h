// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIASYNCINVOCATIONOBSERVER_H
#define _UIASYNCINVOCATIONOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIAsyncInvocationObserver : NSObject {
    NSObject<OS_dispatch_queue> *_postCompletionQueue;
    NSObject<OS_dispatch_queue> *_completionQueueManagementQueue;
    BOOL _suspendedPostCompletionQueue;
    BOOL _resumedPostCompletionQueue;
}




+(void)whenInvocationsCompleteForObservers:(id)arg0 do:(id)arg1 ;
-(id)init;
-(void)_didCompleteInvocation;
-(void)whenCompleteDo:(id)arg0 ;


@end


#endif