// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLIVEFLOWPERF_H
#define SFLIVEFLOWPERF_H

@class NSManagedObject, NSNumber, NSString, NSDate;


#import "SFFlow.h"

@interface SFLiveFlowPerf : NSManagedObject

@property (copy, nonatomic) NSNumber *connAttempts;
@property (copy, nonatomic) NSNumber *connSuccesses;
@property (retain, nonatomic) SFFlow *hasFlow;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSNumber *overallTime;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *timesThresholded;
@property (copy, nonatomic) NSString *tmpID;
@property (copy, nonatomic) NSNumber *txFailPackets;
@property (copy, nonatomic) NSNumber *txPackets;
@property (copy, nonatomic) NSNumber *txReTxInterval;
@property (copy, nonatomic) NSNumber *txReTxPackets;
@property (copy, nonatomic) NSNumber *usecsEstabTime;


+(id)entityName;
+(id)fetchRequest;


@end


#endif