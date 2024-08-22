// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBANALYTICSDEFAULTS_H
#define SBANALYTICSDEFAULTS_H

@class NSDictionary;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBAnalyticsDefaults : SBAbstractSpringBoardDefaultDomain

@property (copy, nonatomic) NSDictionary *engagementPlistRepresentation;


-(void)_bindAndRegisterDefaults;


@end


#endif