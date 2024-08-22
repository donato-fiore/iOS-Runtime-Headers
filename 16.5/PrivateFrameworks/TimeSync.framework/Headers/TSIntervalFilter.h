// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSINTERVALFILTER_H
#define TSINTERVALFILTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSIntervalFilter : NSObject {
    NSUInteger _expectedInterval;
    unsigned int _multiIntervalCount;
    NSUInteger _filterCount;
    *NSUInteger _filteredTimestamps;
    unsigned int _timestampIndex;
    NSUInteger _timestampCount;
    NSUInteger _timestampIntervals;
    NSInteger _validEntry;
    NSObject<OS_dispatch_queue> *_syncQueue;
    unsigned char _filterSize;
    NSUInteger _filterOffset;
    IOTS_U128 _filteredSnapshot;
    IOTS_U128 _filteredOffset;
}


@property (readonly, nonatomic) NSUInteger filterCount;
@property (readonly, nonatomic) NSUInteger multiIntervalTime;


-(NSUInteger)_calculateNewTimestamp:(NSUInteger)arg0 ;
-(NSUInteger)addTimestamp:(NSUInteger)arg0 ;
-(NSUInteger)addTimestamp:(NSUInteger)arg0 entry:(*NSInteger)arg1 ;
-(NSUInteger)filterCountForEntry:(NSInteger)arg0 ;
-(NSUInteger)multiIntervalTimeForEntry:(NSInteger)arg0 ;
-(id)initWithExpectedInterval:(NSUInteger)arg0 multiIntervalCount:(unsigned int)arg1 filterSize:(unsigned char)arg2 ;
-(void)changeToNewFilterSize:(unsigned char)arg0 ;
-(void)dealloc;
-(void)resetFilter;
-(void)resetFilterWithNewExpectedInterval:(NSUInteger)arg0 ;
-(void)resetFilterWithNewExpectedInterval:(NSUInteger)arg0 multiIntervalCount:(unsigned int)arg1 ;


@end


#endif