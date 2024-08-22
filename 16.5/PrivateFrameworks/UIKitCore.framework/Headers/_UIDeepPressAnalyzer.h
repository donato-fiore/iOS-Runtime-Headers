// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDEEPPRESSANALYZER_H
#define _UIDEEPPRESSANALYZER_H


#import <Foundation/Foundation.h>

#import "_UIVelocityIntegrator.h"

@interface _UIDeepPressAnalyzer : NSObject

@property (readonly, nonatomic, getter=isDeepPressLikely) BOOL deepPressLikely;
@property (retain, nonatomic) _UIVelocityIntegrator *locationIntegrator; // ivar: _locationIntegrator
@property (retain, nonatomic) _UIVelocityIntegrator *touchForceIntegrator; // ivar: _touchForceIntegrator


-(CGFloat)_touchForceFromTouches:(id)arg0 ;
-(id)init;
-(void)analyzeTouchForce:(CGFloat)arg0 centroidAtLocation:(struct CGPoint )arg1 ;
-(void)analyzeTouches:(id)arg0 ;


@end


#endif