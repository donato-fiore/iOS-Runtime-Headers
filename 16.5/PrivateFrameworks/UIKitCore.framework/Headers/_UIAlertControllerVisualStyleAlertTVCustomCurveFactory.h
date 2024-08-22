// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIALERTCONTROLLERVISUALSTYLEALERTTVCUSTOMCURVEFACTORY_H
#define _UIALERTCONTROLLERVISUALSTYLEALERTTVCUSTOMCURVEFACTORY_H

@class NSString;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface _UIAlertControllerVisualStyleAlertTVCustomCurveFactory : NSObject <_UIBasicAnimationFactory>



@property (nonatomic) NSUInteger curve; // ivar: _curve
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_timingFunctionForAnimationInView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)init;
-(id)initWithCustomCurve:(NSUInteger)arg0 ;


@end


#endif