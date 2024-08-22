// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCURVEFITTER_H
#define TSDCURVEFITTER_H


#import <Foundation/Foundation.h>


@interface TSDCurveFitter : NSObject

@property (nonatomic) CGFloat errorDistance; // ivar: mErrorDistance
@property (nonatomic) NSInteger errorIterations; // ivar: mErrorIterations


+(id)curveFitter;
-(id)bezierPathFittingPointArray:(struct ? *)arg0 count:(NSInteger)arg1 ;
-(id)bezierPathFittingPoints:(id)arg0 ;
-(id)init;
-(void)fitCurveToPointArray:(struct ? *)arg0 count:(NSInteger)arg1 bezierCallback:(*unk)arg2 context:(*void)arg3 ;
-(void)fitCurveToPoints:(id)arg0 bezierCallback:(*unk)arg1 context:(*void)arg2 ;


@end


#endif