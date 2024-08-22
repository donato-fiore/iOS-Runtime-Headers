// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTRIGGER_H
#define ICSTRIGGER_H



#import "ICSProperty.h"

@interface ICSTrigger : ICSProperty



-(BOOL)isDurationBased;
-(id)initWithDate:(id)arg0 ;
-(id)initWithDuration:(id)arg0 ;
-(id)initWithDuration:(id)arg0 travelRelativeDuration:(id)arg1 ;
-(id)travelRelativeDuration;
-(void)fixAlarmTrigger;
-(void)setDate:(id)arg0 ;
-(void)setDuration:(id)arg0 ;


@end


#endif