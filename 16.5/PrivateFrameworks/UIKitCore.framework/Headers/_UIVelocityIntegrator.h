// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVELOCITYINTEGRATOR_H
#define _UIVELOCITYINTEGRATOR_H


#import <Foundation/Foundation.h>


@interface _UIVelocityIntegrator : NSObject {
    deque<_UIVelocityIntegratorDataSample, std::allocator<_UIVelocityIntegratorDataSample>> _samples;
    BOOL _hasMemoizedVelocity;
    CGFloat _resetHysteresisOnSampleThetaDiff;
    id *_didResetHysteresisOnThetaDiffHandler;
    ? _totalTranslation;
    ? _memoizedVelocity;
}


@property (nonatomic) CGFloat hysteresisTimeInterval; // ivar: _hysteresisTimeInterval
@property (nonatomic) CGFloat minimumRequiredMovement; // ivar: _minimumRequiredMovement
@property (readonly, nonatomic) CGVector offset;
@property (readonly, nonatomic) CGVector velocity;


-(BOOL)hasVelocity;
-(id)init;
-(void)addSample:(struct CGPoint )arg0 ;
-(void)reset;


@end


#endif