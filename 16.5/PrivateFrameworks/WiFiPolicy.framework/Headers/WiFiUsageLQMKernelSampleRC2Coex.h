// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMKERNELSAMPLERC2COEX_H
#define WIFIUSAGELQMKERNELSAMPLERC2COEX_H

@class NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleRC2Coex : WiFiUsageLQMSample

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) NSUInteger rc2DurationPerc; // ivar: _rc2DurationPerc
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)sampleWithStruct:(struct rc2Coex *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct rc2Coex *)arg0 andTimestamp:(id)arg1 ;


@end


#endif