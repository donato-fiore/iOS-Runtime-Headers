// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBINCALLPRESENTATIONDEFAULTS_H
#define SBINCALLPRESENTATIONDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBInCallPresentationDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL assertNoZombieInCallScenes;
@property (readonly, nonatomic) BOOL skipPromptUnlockEntitlementCheck;


-(void)_bindAndRegisterDefaults;


@end


#endif