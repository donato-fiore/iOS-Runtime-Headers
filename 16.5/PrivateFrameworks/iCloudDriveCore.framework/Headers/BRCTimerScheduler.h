// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCTIMERSCHEDULER_H
#define BRCTIMERSCHEDULER_H

@class NSString;
@protocol BRCLifeCycle, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "BRCAccountSessionFPFS.h"

@interface BRCTimerScheduler : NSObject <BRCLifeCycle>

 {
    BRCAccountSessionFPFS *_session;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _suspended;
    NSString *_name;
    NSString *_sqlTable;
    NSString *_field;
    id *_handler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly) Class superclass;


-(id)initWithAccountSession:(id)arg0 timerName:(id)arg1 sqlTable:(id)arg2 field:(id)arg3 timerHandler:(id)arg4 ;
-(void)cancel;
-(void)close;
-(void)reschedule;
-(void)resume;


@end


#endif