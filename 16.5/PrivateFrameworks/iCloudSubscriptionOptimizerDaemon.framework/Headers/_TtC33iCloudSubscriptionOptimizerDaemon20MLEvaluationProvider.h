// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERDAEMON20MLEVALUATIONPROVIDER_H
#define _TTC33ICLOUDSUBSCRIPTIONOPTIMIZERDAEMON20MLEVALUATIONPROVIDER_H

@class SwiftObject;



@interface _TtC33iCloudSubscriptionOptimizerDaemon20MLEvaluationProvider : SwiftObject {
    ? modelPerformanceMetricsList;
    ? delayPerformanceMetricsList;
    ? percentileToChooseOffsetList;
    ? featureProviderListForTrain;
    ? featureProviderListForInference;
    ? shadowModeModels;
    ? offsetMinsList;
    ? localHoursWhenInference;
    ? durationMillis;
    ? biomeManager;
    ? numOffsets;
    ? displayTimestamp;
    ? binaryLabel;
    ? modelProvider;
    ? labelAnnotation;
    ? trialSet;
}






@end


#endif