// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPAGECONTROLINTERACTOR_H
#define _UIPAGECONTROLINTERACTOR_H


#import <Foundation/Foundation.h>

#import "_UIHyperInteractor.h"

@interface _UIPageControlInteractor : NSObject {
    CGFloat _scrubbingOffset;
    CGFloat _lowerBound;
    CGFloat _upperBound;
}


@property (readonly, nonatomic) CGFloat boundedScrubPosition;
@property (readonly, nonatomic) CGFloat hyperConstrainedPosition;
@property (retain, nonatomic) _UIHyperInteractor *interactor; // ivar: _interactor
@property (readonly, nonatomic) CGFloat joggingDistance;
@property (readonly, nonatomic) CGFloat unboundedScrubPosition;
@property (readonly, nonatomic) CGFloat unconstrainedPosition;


-(id)initWithMaximumDistance:(CGFloat)arg0 ;
-(void)commitTranslation;
-(void)reduceScrubOffsetByOffset:(CGFloat)arg0 ;
-(void)reduceScrubOffsetByRatio:(CGFloat)arg0 ;
-(void)setTranslation:(CGFloat)arg0 velocity:(CGFloat)arg1 ;
-(void)updateRubberbandLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;
-(void)updateScrubLowerBound:(CGFloat)arg0 upperBound:(CGFloat)arg1 ;


@end


#endif