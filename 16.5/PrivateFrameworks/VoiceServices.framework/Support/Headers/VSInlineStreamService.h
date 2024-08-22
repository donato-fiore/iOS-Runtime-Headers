// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSINLINESTREAMSERVICE_H
#define VSINLINESTREAMSERVICE_H

@class NSMutableSet, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VSInlineStreamService : NSObject

@property (nonatomic) _opaque_pthread_mutex_t lock; // ivar: _lock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue; // ivar: _notifyQueue
@property (retain, nonatomic) NSMutableSet *ongoingNotifications; // ivar: _ongoingNotifications
@property (retain, nonatomic) NSMutableDictionary *queuedNotification; // ivar: _queuedNotification
@property (nonatomic) _opaque_pthread_mutexattr_t recursiveLockAttr; // ivar: _recursiveLockAttr
@property (retain, nonatomic) NSMutableArray *streamRequestQueue; // ivar: _streamRequestQueue


+(id)sharedService;
-(BOOL)hasInlineStreamRequestForSpeakRequest:(id)arg0 ;
-(id)init;
-(id)popInlineStreamRequestForSpeakRequest:(id)arg0 ;
-(void)addInlineStreamRequest:(id)arg0 ;
-(void)dealloc;
-(void)enqueueStreamId:(id)arg0 withObject:(id)arg1 ;
-(void)removeStreamId:(id)arg0 ;
-(void)startStreamingWithId:(id)arg0 ;


@end


#endif