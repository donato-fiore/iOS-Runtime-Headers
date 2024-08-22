// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSORIENTATIONDEFAULTRESOLUTIONPOLICYSPECIFIER_H
#define SBTRAITSORIENTATIONDEFAULTRESOLUTIONPOLICYSPECIFIER_H

@class NSNumber, NSString;
@protocol SBFTraitsPreferencesStageResolutionPolicySpecifying, SBTraitsOrientationPolicySpecifierDataSource;


#import "SBTraitsOrientationStageComponent.h"

@interface SBTraitsOrientationDefaultResolutionPolicySpecifier : SBTraitsOrientationStageComponent <SBFTraitsPreferencesStageResolutionPolicySpecifying>



@property (readonly, nonatomic) NSNumber *componentOrder;
@property (weak, nonatomic) NSObject<SBTraitsOrientationPolicySpecifierDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithComponentOrder:(id)arg0 dataSource:(id)arg1 ;
-(void)updateStageParticipantsResolutionPolicies:(id)arg0 context:(id)arg1 ;


@end


#endif