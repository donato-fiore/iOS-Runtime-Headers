// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUNOTIFYOBSERVER_H
#define TUNOTIFYOBSERVER_H

@class NSString;
@protocol TUNotifyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TUNotifyObserver : NSObject <TUNotifyObserver>



@property (copy, nonatomic) id *callback; // ivar: _callback
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (copy, nonatomic) NSString *notificationName; // ivar: _notificationName
@property (readonly, nonatomic, getter=isObserving) BOOL observing;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger state;
@property (readonly) Class superclass;
@property (nonatomic) int token; // ivar: _token


-(id)initWithNotificationName:(id)arg0 queue:(id)arg1 ;
-(id)initWithNotificationName:(id)arg0 queue:(id)arg1 callback:(id)arg2 ;
-(void)_endObserving;
-(void)beginObserving;
-(void)dealloc;
-(void)endObserving;


@end


#endif