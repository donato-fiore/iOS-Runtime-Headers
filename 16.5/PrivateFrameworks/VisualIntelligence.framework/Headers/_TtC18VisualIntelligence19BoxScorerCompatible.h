// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18VISUALINTELLIGENCE19BOXSCORERCOMPATIBLE_H
#define _TTC18VISUALINTELLIGENCE19BOXSCORERCOMPATIBLE_H


#import <Foundation/Foundation.h>


@interface _TtC18VisualIntelligence19BoxScorerCompatible : NSObject {
    ? boxScorer;
}




-(CGFloat)scoreWithXTopLeft:(CGFloat)arg0 yTopLeft:(CGFloat)arg1 width:(CGFloat)arg2 height:(CGFloat)arg3 ;
-(id)init;
-(id)initWithGranularity:(NSInteger)arg0 xMean:(CGFloat)arg1 yMean:(CGFloat)arg2 std:(CGFloat)arg3 ;


@end


#endif