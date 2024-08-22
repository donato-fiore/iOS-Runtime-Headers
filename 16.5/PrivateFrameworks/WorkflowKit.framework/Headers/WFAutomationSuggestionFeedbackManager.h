// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAUTOMATIONSUGGESTIONFEEDBACKMANAGER_H
#define WFAUTOMATIONSUGGESTIONFEEDBACKMANAGER_H


#import <Foundation/Foundation.h>


@interface WFAutomationSuggestionFeedbackManager : NSObject



+(id)sharedManager;
-(id)init;
-(void)trackRoutineWithIdentifier:(id)arg0 source:(NSUInteger)arg1 completed:(BOOL)arg2 interacted:(BOOL)arg3 ;


@end


#endif