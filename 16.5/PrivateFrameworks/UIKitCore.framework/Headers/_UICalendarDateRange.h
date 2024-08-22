// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALENDARDATERANGE_H
#define _UICALENDARDATERANGE_H

@class NSDateComponents;

#import <Foundation/Foundation.h>


@interface _UICalendarDateRange : NSObject

@property (readonly, nonatomic) NSDateComponents *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDateComponents *startDate; // ivar: _startDate


-(id)allDatesInRangeForCalendar:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;


@end


#endif