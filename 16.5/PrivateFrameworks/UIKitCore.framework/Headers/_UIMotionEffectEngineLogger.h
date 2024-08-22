// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIMOTIONEFFECTENGINELOGGER_H
#define _UIMOTIONEFFECTENGINELOGGER_H


#import <Foundation/Foundation.h>


@interface _UIMotionEffectEngineLogger : NSObject {
    NSInteger _motionLevelSamples;
    NSInteger _sampleCount;
    NSInteger _updateFreqency;
    CGFloat _lastUpdateTimeStamp;
}




-(id)initWithFastUpdateInterval:(CGFloat)arg0 slowUpdateInterval:(CGFloat)arg1 ;
-(void)_dumpToAggregated;
-(void)recordMotionMagnitude:(CGFloat)arg0 atTimestamp:(CGFloat)arg1 ;


@end


#endif