// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSTIMEFRAMERECORDUTILITIES_H
#define TPSTIMEFRAMERECORDUTILITIES_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TPSTimeframeRecordUtilities : NSObject

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) BOOL isAfternoon;
@property (readonly, nonatomic) BOOL isEvening;
@property (readonly, nonatomic) BOOL isFriday;
@property (readonly, nonatomic) BOOL isMonday;
@property (readonly, nonatomic) BOOL isMorning;
@property (readonly, nonatomic) BOOL isNight;
@property (readonly, nonatomic) BOOL isSaturday;
@property (readonly, nonatomic) BOOL isSunday;
@property (readonly, nonatomic) BOOL isThursday;
@property (readonly, nonatomic) BOOL isTuesday;
@property (readonly, nonatomic) BOOL isWednesday;
@property (readonly, nonatomic) BOOL isWeekday;
@property (readonly, nonatomic) BOOL isWeekend;


+(BOOL)supportsSecureCoding;
+(id)keyOrder;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)recordInfo;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif