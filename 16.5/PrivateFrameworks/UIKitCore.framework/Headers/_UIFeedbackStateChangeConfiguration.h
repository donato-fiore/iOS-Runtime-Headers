// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFEEDBACKSTATECHANGECONFIGURATION_H
#define _UIFEEDBACKSTATECHANGECONFIGURATION_H

@class _UIFeedback<_UIFeedbackContinuousPlayable>, _UIFeedback<_UIFeedbackDiscretePlayable>;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIFeedbackStateChangeConfiguration : NSObject <NSCopying>



@property (nonatomic) CGFloat approachCurvature; // ivar: _approachCurvature
@property (nonatomic) CGFloat approachEnd; // ivar: _approachEnd
@property (retain, nonatomic) _UIFeedback<_UIFeedbackContinuousPlayable> *approachFeedback; // ivar: _approachFeedback
@property (nonatomic) CGFloat approachStart; // ivar: _approachStart
@property (nonatomic) CGFloat approachVolumeMax; // ivar: _approachVolumeMax
@property (retain, nonatomic) _UIFeedback<_UIFeedbackDiscretePlayable> *thresholdFeedback; // ivar: _thresholdFeedback


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif