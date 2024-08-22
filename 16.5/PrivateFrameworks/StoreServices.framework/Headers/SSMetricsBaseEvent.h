// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSMETRICSBASEEVENT_H
#define SSMETRICSBASEEVENT_H

@class NSString, NSNumber;


#import "SSMetricsMutableEvent.h"

@interface SSMetricsBaseEvent : SSMetricsMutableEvent

@property (retain, nonatomic) NSString *pageContext;
@property (retain, nonatomic) NSString *pageDescription;
@property (nonatomic) NSUInteger pageID;
@property (retain, nonatomic) NSString *pageType;
@property (retain, nonatomic) NSString *pageURL;
@property (retain, nonatomic) NSNumber *pixelRatio;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (retain, nonatomic) NSNumber *windowHeight;
@property (retain, nonatomic) NSString *windowOrientation;
@property (retain, nonatomic) NSNumber *windowWidth;


-(BOOL)isBlacklistedByConfiguration:(id)arg0 ;
-(id)description;
-(id)init;


@end


#endif