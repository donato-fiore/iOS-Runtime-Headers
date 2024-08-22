// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMKERNELSAMPLEBTCOEX_H
#define WIFIUSAGELQMKERNELSAMPLEBTCOEX_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleBTCoex : WiFiUsageLQMSample

@property (nonatomic) NSUInteger btAntennaDurationPerc; // ivar: _btAntennaDurationPerc
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)sampleWithStruct:(struct btInfo *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct btInfo *)arg0 andTimestamp:(id)arg1 ;


@end


#endif