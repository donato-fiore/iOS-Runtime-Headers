// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSDISTRIBUTEDNOTIFICATIONCENTEROBSERVER_H
#define SSDISTRIBUTEDNOTIFICATIONCENTEROBSERVER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSDistributedNotificationCenterObserver : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) NSString *name; // ivar: _name


-(id)initWithName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)dealloc;


@end


#endif