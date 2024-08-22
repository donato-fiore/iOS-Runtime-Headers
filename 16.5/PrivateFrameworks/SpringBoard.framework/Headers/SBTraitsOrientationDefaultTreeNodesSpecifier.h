// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSORIENTATIONDEFAULTTREENODESSPECIFIER_H
#define SBTRAITSORIENTATIONDEFAULTTREENODESSPECIFIER_H

@class NSNumber, NSString;
@protocol SBFTraitsPreferencesStageTreeNodesSpecifying;


#import "SBTraitsOrientationStageComponent.h"

@interface SBTraitsOrientationDefaultTreeNodesSpecifier : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageTreeNodesSpecifying>



@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_activeOrientationOrderedNodesWithContext:(id)arg0 ;
-(id)updateStageTreeNodesSpecifications:(id)arg0 stageParticipantsRoles:(id)arg1 context:(id)arg2 ;


@end


#endif