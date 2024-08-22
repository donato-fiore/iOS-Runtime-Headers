// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKVIBRATIONRECORDERRIPPLERINGLAYER_H
#define TKVIBRATIONRECORDERRIPPLERINGLAYER_H

@class CAShapeLayer;



@interface TKVibrationRecorderRippleRingLayer : CAShapeLayer {
    CGFloat _creationTimestamp;
}


@property (readonly, nonatomic) CGPoint normalizedRingLocation; // ivar: _normalizedRingLocation
@property (readonly, nonatomic) CGFloat ringSpeed; // ivar: _ringSpeed


-(CGFloat)timeIntervalSinceCreation;
-(id)init;
-(void)configureWithTimeIntervalSinceCreation:(CGFloat)arg0 normalizedRingLocation:(struct CGPoint )arg1 ringSpeed:(CGFloat)arg2 ;
-(void)reset;


@end


#endif