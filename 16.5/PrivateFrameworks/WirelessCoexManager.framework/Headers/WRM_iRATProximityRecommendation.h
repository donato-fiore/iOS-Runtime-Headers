// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WRM_IRATPROXIMITYRECOMMENDATION_H
#define WRM_IRATPROXIMITYRECOMMENDATION_H


#import <Foundation/Foundation.h>

#import "WRM_iRATProximityRecommendationLogging.h"

@interface WRM_iRATProximityRecommendation : NSObject

@property (nonatomic) int RecommendationType; // ivar: _RecommendationType
@property (nonatomic) BOOL linkIsRecommended; // ivar: _linkIsRecommended
@property (nonatomic) BOOL linkRecommendationIsValid; // ivar: _linkRecommendationIsValid
@property (retain, nonatomic) WRM_iRATProximityRecommendationLogging *metrics; // ivar: _metrics


-(id)init;
-(void)dealloc;


@end


#endif