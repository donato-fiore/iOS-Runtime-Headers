// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WADAYFORECAST_H
#define WADAYFORECAST_H

@class WFTemperature;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WADayForecast : NSObject <NSCopying>



@property (nonatomic) NSUInteger dayNumber; // ivar: _dayNumber
@property (nonatomic) NSUInteger dayOfWeek; // ivar: _dayOfWeek
@property (copy, nonatomic) WFTemperature *high; // ivar: _high
@property (nonatomic) NSUInteger icon; // ivar: _icon
@property (nonatomic) BOOL isYesterday; // ivar: _isYesterday
@property (copy, nonatomic) WFTemperature *low; // ivar: _low
@property (nonatomic) CGFloat percentPrecipitation; // ivar: _percentPrecipitation


+(id)dayForecastForLocation:(id)arg0 conditions:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareDayNumberToDayForecast:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif