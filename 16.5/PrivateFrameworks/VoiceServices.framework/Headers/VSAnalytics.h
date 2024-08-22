// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSANALYTICS_H
#define VSANALYTICS_H


#import <Foundation/Foundation.h>


@interface VSAnalytics : NSObject



+(void)reportDownloadMetrics:(id)arg0 ;
+(void)reportEvent:(id)arg0 payload:(id)arg1 ;
+(void)reportInstrumentMetrics:(id)arg0 ;


@end


#endif