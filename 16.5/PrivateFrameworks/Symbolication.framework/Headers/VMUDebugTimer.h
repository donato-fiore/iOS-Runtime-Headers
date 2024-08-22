// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VMUDEBUGTIMER_H
#define VMUDEBUGTIMER_H

@class NSDate, NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface VMUDebugTimer : NSObject {
    NSDate *_programStartTime;
    NSDate *_eventStartTime;
    NSString *_eventMessage;
    NSString *_categoryMessage;
}


@property (readonly) NSObject<OS_os_log> *logHandle; // ivar: _logHandle
@property (readonly) NSUInteger signpostID; // ivar: _signpostID


+(id)sharedTimer;
+(id)sharedTimerIfCreated;
-(id)init;
-(void)endEvent:(char *)arg0 ;
-(void)startWithCategory:(char *)arg0 message:(char *)arg1 ;
-(void)startWithMessage:(char *)arg0 ;
-(void)stop;


@end


#endif