// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLTIMELINEEXTENDOPERATION_H
#define TLTIMELINEEXTENDOPERATION_H

@class NSDate, NSError, NSArray;


#import "TLTimelineOperation.h"

@interface TLTimelineExtendOperation : TLTimelineOperation

@property (readonly, nonatomic) NSDate *afterDate; // ivar: _afterDate
@property (retain) NSError *extendError; // ivar: _extendError
@property (readonly, nonatomic) NSUInteger limit; // ivar: _limit
@property (copy) id *operationCompletionBlock;
@property (retain) NSArray *timelineEntries; // ivar: _timelineEntries
@property (copy) id *timelineOperationCompletionBlock;
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


+(NSUInteger)relativePriority;
-(id)error;
-(id)initWithIdentifiable:(id)arg0 afterDate:(id)arg1 timeout:(CGFloat)arg2 entryLimit:(NSUInteger)arg3 ;
-(void)main;


@end


#endif