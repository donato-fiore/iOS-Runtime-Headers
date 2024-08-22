// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKANALYTICSEVENT_H
#define VKANALYTICSEVENT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>

#import "VKAnalyticsAnalyzerEvent.h"
#import "VKAnalyticsDataScannerEvent.h"
#import "VKAnalyticsDDEvent.h"
#import "VKAnalyticsInteractionEvent.h"
#import "VKAnalyticsMRCEvent.h"
#import "VKAnalyticsQuickActionEvent.h"
#import "VKAnalyticsSubjectEvent.h"
#import "VKAnalyticsTextEvent.h"
#import "VKAnalyticsVisualSearchEvent.h"

@interface VKAnalyticsEvent : NSObject

@property (readonly, nonatomic) VKAnalyticsAnalyzerEvent *analyzerEvent;
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) VKAnalyticsDataScannerEvent *dataScannerEvent;
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) VKAnalyticsDDEvent *ddEvent;
@property (readonly, nonatomic) VKAnalyticsInteractionEvent *interactionEvent;
@property (readonly, nonatomic) BOOL isPerformingAutomatedTest; // ivar: _isPerformingAutomatedTest
@property (readonly, nonatomic) VKAnalyticsMRCEvent *mrcEvent;
@property (readonly, nonatomic) VKAnalyticsQuickActionEvent *quickActionEvent;
@property (readonly, nonatomic) VKAnalyticsSubjectEvent *subjectEvent;
@property (readonly, nonatomic) VKAnalyticsTextEvent *textEvent;
@property (readonly, nonatomic) NSInteger type;
@property (readonly, nonatomic) VKAnalyticsVisualSearchEvent *visualSearchEvent;


-(id)coreAnalyticsDictionary;
-(id)eventKey;
-(id)initWithCustomIdentifier:(id)arg0 ;


@end


#endif