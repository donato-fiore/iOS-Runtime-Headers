// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WIFIUSAGELQMWINDOWANALYSISINCALL_H
#define WIFIUSAGELQMWINDOWANALYSISINCALL_H

@class NSString;


#import "WiFiUsageLQMWindowAnalysis.h"

@interface WiFiUsageLQMWindowAnalysisInCall : WiFiUsageLQMWindowAnalysis

@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSString *status; // ivar: _status


-(id)addDimensionsTo:(id)arg0 ;
-(id)initWithRollingWindow:(id)arg0 andCallStatus:(id)arg1 andCallDuration:(CGFloat)arg2 andActiveCall:(BOOL)arg3 andTimestamp:(id)arg4 onQueue:(id)arg5 ;


@end


#endif