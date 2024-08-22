// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHWIDGETMETRICSPROVIDER_H
#define SBHWIDGETMETRICSPROVIDER_H

@class NSString;
@protocol SBSWidgetMetricsProviding, SBHWidgetMetricsProviderDelegate;

#import <Foundation/Foundation.h>


@interface SBHWidgetMetricsProvider : NSObject <SBSWidgetMetricsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHWidgetMetricsProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)metricsForLiveActivities;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg0 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg0 displayContext:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)systemDefaultMetricsSpecification;
-(id)systemMetricsForFamily:(NSInteger)arg0 ;
-(id)systemMetricsForWidget:(id)arg0 ;


@end


#endif