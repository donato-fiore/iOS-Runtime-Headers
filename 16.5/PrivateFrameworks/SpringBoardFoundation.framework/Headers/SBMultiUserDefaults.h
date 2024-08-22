// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMULTIUSERDEFAULTS_H
#define SBMULTIUSERDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBMultiUserDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic) BOOL disablesInternalDebugBlockingTasksUI;
@property (readonly, nonatomic) BOOL forceLoginWindow;


-(void)_bindAndRegisterDefaults;


@end


#endif