// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTIMEZONE_H
#define ICSTIMEZONE_H

@class NSString;


#import "ICSComponent.h"

@interface ICSTimeZone : ICSComponent {
    id *_systemTimeZone;
}


@property (retain, nonatomic) NSString *tzid;


+(BOOL)_isTimeZone:(id)arg0 pseudoDSTForDate:(id)arg1 ;
+(BOOL)perfectMatchForSubarray:(id)arg0 inTZChangeArray:(id)arg1 ;
+(NSInteger)matchTypeForSubarray:(id)arg0 inTZChangeArray:(id)arg1 ;
+(id)blocksAfterDate:(id)arg0 untilDate:(id)arg1 forTimeZone:(id)arg2 ;
+(id)name;
+(id)quickTimeZoneNames;
+(id)slowTimeZoneNames;
+(id)timeZoneWithSystemTimeZoneName:(id)arg0 ;
-(BOOL)isEqualToNSTimeZone:(id)arg0 forDate:(id)arg1 ;
-(id)_previousDSTTransitionForDate:(id)arg0 timezone:(id)arg1 ;
-(id)computeTimeZoneChangeListFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)getNSTimeZone:(id)arg0 ;
-(id)getNSTimeZoneFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)initWithSystemTimeZone:(id)arg0 ;
-(id)initWithSystemTimeZone:(id)arg0 fromDate:(id)arg1 options:(int)arg2 ;
-(id)initWithTimeZone:(id)arg0 fromDate:(id)arg1 options:(int)arg2 ;
-(id)systemTimeZoneForDate:(id)arg0 ;


@end


#endif