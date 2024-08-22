// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERCALENDARDATECOMPONENT_H
#define _UIDATEPICKERCALENDARDATECOMPONENT_H

@class NSDate, NSCalendar, NSDateComponents;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIDatePickerCalendarDateComponent : NSObject <NSCopying>

 {
    NSDate *_date;
}


@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSDateComponents *components; // ivar: _components
@property (readonly, nonatomic) NSDate *date;


+(NSUInteger)representedCalendarUnits;
+(id)inlineDescriptionForComponents:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDate:(id)arg0 calendar:(id)arg1 ;


@end


#endif