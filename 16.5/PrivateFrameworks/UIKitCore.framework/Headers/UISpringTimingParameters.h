// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISPRINGTIMINGPARAMETERS_H
#define UISPRINGTIMINGPARAMETERS_H

@protocol NSSecureCoding, UITimingCurveProvider;

#import <Foundation/Foundation.h>

#import "UICubicTimingParameters.h"
#import "UISpringTimingParameters.h"

@interface UISpringTimingParameters : NSObject <NSSecureCoding, UITimingCurveProvider>



@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic) CGFloat damping; // ivar: _damping
@property (readonly, nonatomic) CGFloat dampingRatio; // ivar: _dampingRatio
@property (nonatomic) BOOL implicitDuration; // ivar: _implicitDuration
@property (readonly, nonatomic) CGVector initialVelocity; // ivar: _initialVelocity
@property (nonatomic) CGFloat mass; // ivar: _mass
@property (readonly, nonatomic) CGFloat settlingDuration;
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (nonatomic) CGFloat stiffness; // ivar: _stiffness
@property (readonly, nonatomic) NSInteger timingCurveType;


+(BOOL)supportsSecureCoding;
+(void)_convertDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 toMass:(*CGFloat)arg2 stiffness:(*CGFloat)arg3 damping:(*CGFloat)arg4 ;
+(void)_convertMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 toDampingRatio:(*CGFloat)arg3 response:(*CGFloat)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_mediaTimingFunction;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectiveTimingFunction;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDampingRatio:(CGFloat)arg0 ;
-(id)initWithDampingRatio:(CGFloat)arg0 initialVelocity:(struct CGVector )arg1 ;
-(id)initWithDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 ;
-(id)initWithDampingRatio:(CGFloat)arg0 response:(CGFloat)arg1 initialVelocity:(struct CGVector )arg2 ;
-(id)initWithMass:(CGFloat)arg0 stiffness:(CGFloat)arg1 damping:(CGFloat)arg2 initialVelocity:(struct CGVector )arg3 ;
-(id)initWithParameters:(id)arg0 ;
-(id)initWithParameters:(id)arg0 initialVelocity:(struct CGVector )arg1 ;
-(id)initWithVelocity:(struct CGVector )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif