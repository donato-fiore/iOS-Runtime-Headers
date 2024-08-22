// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSTIMINGDEFAULTS_H
#define SSMETRICSTIMINGDEFAULTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "SSCoalescingQueue.h"

@interface SSMetricsTimingDefaults : NSObject

@property (retain, nonatomic) NSDictionary *cachedValues; // ivar: _cachedValues
@property (nonatomic, getter=isRunningTests) BOOL runningTests; // ivar: _runningTests
@property (readonly) CGFloat samplingPercentageCachedResponsesLoadURL;
@property (readonly) CGFloat samplingPercentageUsersLoadURL;
@property (readonly) CGFloat samplingPercentageUsersPageRender;
@property (readonly) CGFloat sessionDurationLoadURL;
@property (readonly) CGFloat sessionDurationPageRender;
@property (retain, nonatomic) SSCoalescingQueue *updateQueue; // ivar: _updateQueue
@property (readonly) NSDictionary *values;


+(id)sharedInstance;
+(id)sharedInstanceWithSessionDelegate:(id)arg0 ;
-(id)initWithSessionDelegate:(id)arg0 ;
-(void)update;


@end


#endif