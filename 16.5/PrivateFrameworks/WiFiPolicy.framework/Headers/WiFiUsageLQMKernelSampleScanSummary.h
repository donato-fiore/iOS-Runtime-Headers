// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMKERNELSAMPLESCANSUMMARY_H
#define WIFIUSAGELQMKERNELSAMPLESCANSUMMARY_H

@class NSString, NSDate;


#import "WiFiUsageLQMSample.h"

@interface WiFiUsageLQMKernelSampleScanSummary : WiFiUsageLQMSample

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *scanClient; // ivar: _scanClient
@property (nonatomic) NSUInteger scanDurationMS; // ivar: _scanDurationMS
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(id)allLQMProperties;
+(id)featureFromFieldName:(id)arg0 ;
+(id)sampleWithStruct:(struct ? *)arg0 andTimestamp:(id)arg1 ;
-(id)initWithStruct:(struct ? *)arg0 andTimestamp:(id)arg1 ;


@end


#endif