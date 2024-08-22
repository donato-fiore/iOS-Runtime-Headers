// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBSYSTEMAPERTURELAYOUTSTATE_H
#define _SBSYSTEMAPERTURELAYOUTSTATE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _SBSystemApertureLayoutState : NSObject

@property (readonly, nonatomic, getter=isInert) BOOL inert;
@property (readonly, nonatomic) NSInteger inertPhase; // ivar: _inertPhase
@property (readonly, copy, nonatomic) NSArray *orderedElementLayoutStates; // ivar: _orderedElementLayoutStates
@property (readonly, nonatomic, getter=isTargetingInert) BOOL targetingInert;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithOrderedElementLayoutStates:(id)arg0 inertPhase:(NSInteger)arg1 ;
-(id)systemApertureLayoutStateByIncrementingPhase;
-(id)systemApertureLayoutStateByIncrementingPhaseAndUpdatingOrderedElementLayoutStates:(id)arg0 ;


@end


#endif