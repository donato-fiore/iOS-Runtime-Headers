// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPTIMERANGE_H
#define TVPTIMERANGE_H


#import <Foundation/Foundation.h>


@interface TVPTimeRange : NSObject

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat endTime;
@property (nonatomic) CGFloat startTime; // ivar: _startTime


+(struct ? )forwardmostCMTimeRangeInCMTimeRanges:(id)arg0 ;
-(BOOL)containsTime:(CGFloat)arg0 ;
-(id)description;
-(id)initWithCMTimeRange:(struct ? )arg0 ;
-(id)initWithStartTime:(CGFloat)arg0 duration:(CGFloat)arg1 ;
-(id)initWithStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 ;
-(id)intersectTimeRange:(id)arg0 ;


@end


#endif