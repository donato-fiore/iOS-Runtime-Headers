// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSEXITEVENT_H
#define SSMETRICSEXITEVENT_H

@class NSString;


#import "SSMetricsBaseEvent.h"

@interface SSMetricsExitEvent : SSMetricsBaseEvent

@property (retain, nonatomic) NSString *exitType;
@property (retain, nonatomic) NSString *exitURL;


-(id)description;
-(id)init;


@end


#endif