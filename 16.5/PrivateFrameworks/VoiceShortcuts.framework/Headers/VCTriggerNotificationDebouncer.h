// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCTRIGGERNOTIFICATIONDEBOUNCER_H
#define VCTRIGGERNOTIFICATIONDEBOUNCER_H

@class NSMutableDictionary;
@protocol VCTriggerNotificationDebouncerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCTriggerNotificationDebouncer : NSObject

@property (weak, nonatomic) NSObject<VCTriggerNotificationDebouncerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMutableDictionary *notificationItemTable; // ivar: _notificationItemTable
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)addEventsWithIdentifiers:(id)arg0 configuredTrigger:(id)arg1 workflowReference:(id)arg2 ;
-(void)debouncerDidFire:(id)arg0 ;


@end


#endif