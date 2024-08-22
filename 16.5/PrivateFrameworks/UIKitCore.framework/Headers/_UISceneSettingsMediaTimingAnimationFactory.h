// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCENESETTINGSMEDIATIMINGANIMATIONFACTORY_H
#define _UISCENESETTINGSMEDIATIMINGANIMATIONFACTORY_H

@class CAMediaTimingFunction, NSString;
@protocol _UIBasicAnimationFactory;

#import <Foundation/Foundation.h>


@interface _UISceneSettingsMediaTimingAnimationFactory : NSObject <_UIBasicAnimationFactory>



@property (retain, nonatomic, getter=_timingFunctionForAnimation) CAMediaTimingFunction *_timingFunctionForAnimation; // ivar: __timingFunctionForAnimation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldAnimateAdditivelyForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;


@end


#endif