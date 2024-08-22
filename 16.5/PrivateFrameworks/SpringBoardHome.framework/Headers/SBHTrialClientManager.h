// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBHTRIALCLIENTMANAGER_H
#define SBHTRIALCLIENTMANAGER_H

@class NSString, TRIClient;

#import <Foundation/Foundation.h>


@interface SBHTrialClientManager : NSObject

@property (retain, nonatomic) NSString *homeScreenNamespace; // ivar: _homeScreenNamespace
@property (retain, nonatomic) TRIClient *trialClient; // ivar: _trialClient


-(BOOL)widgetDiscoverabilityGoSwitchEnabled;
-(id)init;
-(void)immediatelyFetchSpringBoardHomeNamespace;


@end


#endif