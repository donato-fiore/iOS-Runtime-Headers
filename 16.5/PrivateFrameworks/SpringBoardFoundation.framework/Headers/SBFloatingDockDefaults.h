// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBFLOATINGDOCKDEFAULTS_H
#define SBFLOATINGDOCKDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBFloatingDockDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL appLibraryEnabled;
@property (nonatomic) BOOL recentsEnabled;


-(void)_bindAndRegisterDefaults;


@end


#endif