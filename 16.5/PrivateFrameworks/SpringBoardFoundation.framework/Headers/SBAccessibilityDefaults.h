// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBACCESSIBILITYDEFAULTS_H
#define SBACCESSIBILITYDEFAULTS_H



#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBAccessibilityDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL allowReachability;
@property (readonly, nonatomic) BOOL reallyDisableReachability;


-(void)_bindAndRegisterDefaults;


@end


#endif