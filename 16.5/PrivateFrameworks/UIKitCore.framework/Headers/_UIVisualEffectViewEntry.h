// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVISUALEFFECTVIEWENTRY_H
#define _UIVISUALEFFECTVIEWENTRY_H

@class NSString;
@protocol _UIVisualEffectDiffable;

#import <Foundation/Foundation.h>


@interface _UIVisualEffectViewEntry : NSObject <_UIVisualEffectDiffable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger requirements; // ivar: _requirements
@property (readonly) Class superclass;


-(BOOL)canTransitionToEffect:(id)arg0 ;
-(BOOL)isSameTypeOfEffect:(id)arg0 ;
-(BOOL)shouldAnimateProperty:(id)arg0 ;
-(id)copyForTransitionOut;
-(id)copyForTransitionToEffect:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addEffectToView:(id)arg0 ;
-(void)applyEffectAsRequested:(BOOL)arg0 toView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;
-(void)convertToIdentity;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif