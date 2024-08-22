// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITOUCHPREDICTOR_H
#define _UITOUCHPREDICTOR_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_UIValuePredictor.h"

@interface _UITouchPredictor : NSObject <NSCopying>

 {
    NSMutableArray *_predictions;
    BOOL _predictionsValid;
    _UIValuePredictor *_xValuePredictor;
    _UIValuePredictor *_yValuePredictor;
    _UIValuePredictor *_angleValuePredictor;
    _UIValuePredictor *_azimuthValuePredictor;
    _UIValuePredictor *_forceValuePredictor;
    CGFloat _averageTouchInterval;
    CGFloat _lastTouchTimestamp;
    CGFloat _numPredictionsBuffer;
    NSInteger _numPredictionsBufferCount;
}




-(NSUInteger)_dampenedNumPredictionsAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_numPredictionsAtIndex:(NSUInteger)arg0 hardLimit:(*NSUInteger)arg1 ;
-(id)_angleValuePredictor;
-(id)_azimuthValuePredictor;
-(id)_forceValuePredictor;
-(id)_predictedTouchesAtIndex:(NSUInteger)arg0 forTouch:(id)arg1 ;
-(id)_xValuePredictor;
-(id)_yValuePredictor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionFromIndex:(int)arg0 toIndex:(int)arg1 includeHeader:(BOOL)arg2 includeDetailedConfidence:(BOOL)arg3 ;
-(id)init;
-(id)initWithTouchPredictor:(id)arg0 ;
-(id)predictedTouchesForTouch:(id)arg0 ;
-(void)_updatePredictionsForTouch:(id)arg0 weight:(CGFloat)arg1 ;
-(void)addTouch:(id)arg0 ;


@end


#endif