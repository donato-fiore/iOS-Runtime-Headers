// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTIMEOFDAYTRIGGER_H
#define WFTIMEOFDAYTRIGGER_H

@class NSNumber, NSArray, NSDateComponents;
@protocol NSSecureCoding;


#import "WFTrigger.h"

@interface WFTimeOfDayTrigger : WFTrigger <NSSecureCoding>



@property (copy, nonatomic) NSNumber *dayOfMonth; // ivar: _dayOfMonth
@property (copy, nonatomic) NSArray *daysOfWeek; // ivar: _daysOfWeek
@property (nonatomic) NSUInteger event; // ivar: _event
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) NSDateComponents *time; // ivar: _time
@property (nonatomic) NSUInteger timeOffset; // ivar: _timeOffset


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)dateFormatter;
+(id)displayGlyphName;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)localizedRecurrenceDescriptionForDaysOfWeek:(id)arg0 dayOfMonth:(id)arg1 mode:(NSUInteger)arg2 ;
+(id)localizedSunriseSunsetDescriptionForTriggerEvent:(NSUInteger)arg0 timeOffset:(NSUInteger)arg1 ;
-(BOOL)hasValidConfiguration;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif