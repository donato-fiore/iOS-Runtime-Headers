// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RWIPROTOCOLCONSOLEDOMAINEVENTDISPATCHER_H
#define RWIPROTOCOLCONSOLEDOMAINEVENTDISPATCHER_H


#import <Foundation/Foundation.h>


@interface RWIProtocolConsoleDomainEventDispatcher : NSObject {
    *AugmentableInspectorController _controller;
}




-(id)initWithController:(struct AugmentableInspectorController *)arg0 ;
-(void)heapSnapshotWithTimestamp:(CGFloat)arg0 snapshotData:(id)arg1 title:(*id)arg2 ;
-(void)messageAddedWithMessage:(id)arg0 ;
-(void)messageRepeatCountUpdatedWithCount:(int)arg0 timestamp:(*CGFloat)arg1 ;
-(void)messagesClearedWithReason:(NSInteger)arg0 ;


@end


#endif