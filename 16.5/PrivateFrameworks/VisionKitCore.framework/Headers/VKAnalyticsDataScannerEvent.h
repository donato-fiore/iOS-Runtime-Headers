// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKANALYTICSDATASCANNEREVENT_H
#define VKANALYTICSDATASCANNEREVENT_H



#import "VKAnalyticsEvent.h"

@interface VKAnalyticsDataScannerEvent : VKAnalyticsEvent

@property (nonatomic) BOOL didScanForBarcodes; // ivar: _didScanForBarcodes
@property (nonatomic) BOOL didScanForText; // ivar: _didScanForText
@property (nonatomic) CGFloat feedDuration; // ivar: _feedDuration
@property (readonly, nonatomic) BOOL isHealth;


-(NSInteger)type;
-(id)coreAnalyticsDictionary;
-(id)description;
-(id)eventKey;
-(id)initWithFeedDuration:(CGFloat)arg0 scannedForText:(BOOL)arg1 scannedForBarcodes:(BOOL)arg2 customIdentifier:(id)arg3 ;


@end


#endif