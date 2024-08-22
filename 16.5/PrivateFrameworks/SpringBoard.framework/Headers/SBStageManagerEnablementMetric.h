// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSTAGEMANAGERENABLEMENTMETRIC_H
#define SBSTAGEMANAGERENABLEMENTMETRIC_H

@class SBFAnalyticsClient, NSString;
@protocol SBFAnalyticsBackendEventHandling;

#import <Foundation/Foundation.h>


@interface SBStageManagerEnablementMetric : NSObject <SBFAnalyticsBackendEventHandling>



@property (readonly, nonatomic) SBFAnalyticsClient *analyticsClient; // ivar: _analyticsClient
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handleEvent:(NSUInteger)arg0 withContext:(id)arg1 ;
-(BOOL)sendCoreAnalyticsEventWithName:(id)arg0 source:(NSInteger)arg1 ;
-(id)chamoisPreferencesSnapshotWithSource:(NSInteger)arg0 ;
-(id)init;
-(id)initWithAnalyticsClient:(id)arg0 ;


@end


#endif