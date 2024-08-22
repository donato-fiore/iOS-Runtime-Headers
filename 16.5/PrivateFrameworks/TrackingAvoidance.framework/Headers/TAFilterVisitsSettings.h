// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TAFILTERVISITSSETTINGS_H
#define TAFILTERVISITSSETTINGS_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface TAFilterVisitsSettings : NSObject

@property (readonly, nonatomic) CGFloat entryDisplayOnBudget; // ivar: _entryDisplayOnBudget
@property (readonly, nonatomic) CGFloat exitDisplayOnBudget; // ivar: _exitDisplayOnBudget
@property (readonly, nonatomic) CGFloat maxSuspiciousDuration; // ivar: _maxSuspiciousDuration
@property (readonly, nonatomic) CGFloat minInterVisitDistance; // ivar: _minInterVisitDistance
@property (readonly, nonatomic) NSUInteger minNSigmaBetweenVisits; // ivar: _minNSigmaBetweenVisits
@property (readonly, nonatomic) CGFloat minObservationInterval; // ivar: _minObservationInterval
@property (readonly, nonatomic) NSSet *sensitiveLOITypes; // ivar: _sensitiveLOITypes
@property (readonly, nonatomic) NSUInteger threeVisitImmediacyType; // ivar: _threeVisitImmediacyType


+(BOOL)_isLegacyHardware;
+(CGFloat)_determinDefaultEntryDisplayOnBudget;
+(CGFloat)_determinDefaultExitDisplayOnBudget;
+(id)defaultVisitsSensitiveLOITypes;
-(id)initWithDefaults;
-(id)initWithMaxSuspiciousDuration:(CGFloat)arg0 minInterVisitDistance:(CGFloat)arg1 minNSigmaBetweenVisits:(NSUInteger)arg2 entryDisplayOnBudget:(CGFloat)arg3 exitDisplayOnBudget:(CGFloat)arg4 sensitiveLOITypes:(id)arg5 minObservationInterval:(CGFloat)arg6 threeVisitImmediacyType:(NSUInteger)arg7 ;
-(id)initWithMaxSuspiciousDurationOrDefault:(id)arg0 minInterVisitDistanceOrDefault:(id)arg1 minNSigmaBetweenVisitsOrDefault:(id)arg2 entryDisplayOnBudgetOrDefault:(id)arg3 exitDisplayOnBudgetOrDefault:(id)arg4 sensitiveLOITypesOrDefault:(id)arg5 minObservationIntervalOrDefault:(id)arg6 threeVisitImmediacyTypeOrDefault:(id)arg7 ;


@end


#endif