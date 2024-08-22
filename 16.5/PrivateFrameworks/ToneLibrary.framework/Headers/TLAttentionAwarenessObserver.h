// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLATTENTIONAWARENESSOBSERVER_H
#define TLATTENTIONAWARENESSOBSERVER_H

@class NSString, NSMutableDictionary, AWAttentionAwarenessClient;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TLAttentionAwarenessObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_pollingForAttentionEventHandlers;
    BOOL _isFullyInitialized;
    BOOL _isPollingForAttention;
    AWAttentionAwarenessClient *_attentionAwarenessClient;
    NSObject<OS_dispatch_queue> *_attentionAwarenessClientQueue;
}




+(BOOL)supportsAttenuatingTonesForAttentionDetected;
+(id)sharedAttentionAwarenessObserver;
-(id)init;
-(id)pollForAttentionWithEventHandler:(id)arg0 ;
-(void)_assertNotRunningOnAccessQueue;
-(void)_assertRunningOnAccessQueue;
-(void)_beginPollingForAttention;
-(void)_didCompleteInitialization;
-(void)_didReceiveAttentionPollingEventOfType:(NSUInteger)arg0 attentionEvent:(id)arg1 ;
-(void)_endPollingForAttention;
-(void)_invokePollingForAttentionEventHandlers:(id)arg0 eventType:(NSInteger)arg1 ;
-(void)cancelPollForAttentionWithToken:(id)arg0 ;
-(void)dealloc;


@end


#endif