// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LTPOWERLOGGER_H
#define _LTPOWERLOGGER_H

@class NSOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _LTPowerLogger : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // ivar: _loggerQueue
@property (retain) NSOrderedSet *requestTypeSet; // ivar: _requestTypeSet


+(id)sharedInstance;
-(BOOL)_shouldLogRequest:(NSInteger)arg0 ;
-(id)_maskForRequestType:(id)arg0 ;
-(id)init;
-(void)logTranslateRequestEvent:(id)arg0 requestType:(id)arg1 routeType:(NSInteger)arg2 ;


@end


#endif