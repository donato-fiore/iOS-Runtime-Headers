// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSWIDGETMETRICSSERVICE_H
#define SBSWIDGETMETRICSSERVICE_H

@protocol SBSWidgetMetricsProviding;

#import <Foundation/Foundation.h>


@interface SBSWidgetMetricsService : NSObject

@property (readonly, weak, nonatomic) NSObject<SBSWidgetMetricsProviding> *metricsProvider; // ivar: _metricsProvider


-(id)init;
-(id)initWithMetricsProvider:(id)arg0 ;
-(id)metricsForLiveActivities;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg0 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg0 displayContext:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)systemMetricsForWidget:(id)arg0 ;
-(void)dealloc;


@end


#endif