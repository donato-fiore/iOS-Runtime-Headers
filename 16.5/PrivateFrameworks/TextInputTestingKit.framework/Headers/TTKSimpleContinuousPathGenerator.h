// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTKSIMPLECONTINUOUSPATHGENERATOR_H
#define TTKSIMPLECONTINUOUSPATHGENERATOR_H



#import "TTKDefaultContinuousPathGenerator.h"

@interface TTKSimpleContinuousPathGenerator : TTKDefaultContinuousPathGenerator {
    CGFloat _currentTimestamp;
}




-(BOOL)canHandleDoubleLetter;
-(id)generatePathFromInflectionPoints:(id)arg0 segmentTiming:(id)arg1 keys:(id)arg2 string:(id)arg3 layout:(id)arg4 ;
-(id)generatePathFromInflectionPoints:(id)arg0 timestamp:(CGFloat)arg1 duration:(CGFloat)arg2 segmentTiming:(id)arg3 keys:(id)arg4 string:(id)arg5 layout:(id)arg6 ;
-(id)generatePathFromInflectionPoints:(id)arg0 timestamp:(CGFloat)arg1 segmentTiming:(id)arg2 keys:(id)arg3 string:(id)arg4 layout:(id)arg5 ;
-(id)initWithParams:(id)arg0 ;


@end


#endif