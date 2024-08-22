// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSEXTERNALDISPLAYROLESANDDEFAULTPOLICIESPROVIDER_H
#define SBTRAITSEXTERNALDISPLAYROLESANDDEFAULTPOLICIESPROVIDER_H

@class NSString;
@protocol SBFTraitsArbiterStagesRolesProvider, SBTraitsOrientationPolicySpecifierDataSource;

#import <Foundation/Foundation.h>


@interface SBTraitsExternalDisplayRolesAndDefaultPoliciesProvider : NSObject <SBFTraitsArbiterStagesRolesProvider, SBTraitsOrientationPolicySpecifierDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)defaultActiveOrientationBelowDrivenRoles;
-(id)defaultDeviceOrientationDrivenRoles;
-(id)defaultIsolationDrivenRoles;
-(id)defaultKeyboardFocusDrivenRoles;
-(id)defaultOtherParticipantDrivenRoles;
-(id)orientationStageRoles;
-(id)zOrderStageRoles;


@end


#endif