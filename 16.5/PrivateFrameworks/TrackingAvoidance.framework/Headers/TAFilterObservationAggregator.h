// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAFILTEROBSERVATIONAGGREGATOR_H
#define TAFILTEROBSERVATIONAGGREGATOR_H


#import <Foundation/Foundation.h>


@interface TAFilterObservationAggregator : NSObject



+(id)aggregateObservationsThroughHistoryForDetectionResults:(id)arg0 visitSnapshotBuffer:(id)arg1 intervisitSnapshotBuffer:(id)arg2 clock:(id)arg3 ;
+(id)aggregateObservationsThroughHistoryForSingleDetection:(id)arg0 visitSnapshotBuffer:(id)arg1 intervisitSnapshotBuffer:(id)arg2 clock:(id)arg3 ;
+(id)location:(id)arg0 withAdvertisementTimestamp:(id)arg1 ;
+(void)attachAISInfo:(id)arg0 deviceRecord:(id)arg1 ;


@end


#endif