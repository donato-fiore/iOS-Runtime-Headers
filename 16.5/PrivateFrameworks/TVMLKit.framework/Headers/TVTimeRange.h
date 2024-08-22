// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVTIMERANGE_H
#define TVTIMERANGE_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TVTimeRange : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (nonatomic) CGFloat endTime; // ivar: _endTime
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) CGFloat startTime; // ivar: _startTime




@end


#endif