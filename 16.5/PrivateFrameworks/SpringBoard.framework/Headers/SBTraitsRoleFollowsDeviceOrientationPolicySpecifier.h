// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSROLEFOLLOWSDEVICEORIENTATIONPOLICYSPECIFIER_H
#define SBTRAITSROLEFOLLOWSDEVICEORIENTATIONPOLICYSPECIFIER_H

@class NSString, NSNumber, NSArray;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying;


#import "SBTraitsOrientationStageComponent.h"

@interface SBTraitsRoleFollowsDeviceOrientationPolicySpecifier : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>

 {
    NSString *_targetRole;
}


@property (readonly, nonatomic) NSNumber *componentOrder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *deviceOrientationStateTypes; // ivar: _deviceOrientationStateTypes
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetRole;


-(id)initWithComponentOrder:(id)arg0 ;
-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif