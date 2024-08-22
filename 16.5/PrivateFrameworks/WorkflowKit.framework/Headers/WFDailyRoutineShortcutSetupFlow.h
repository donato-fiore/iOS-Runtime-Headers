// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDAILYROUTINESHORTCUTSETUPFLOW_H
#define WFDAILYROUTINESHORTCUTSETUPFLOW_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "WFDailyRoutineShortcutSetupLocation.h"
#import "WFDailyRoutineShortcutSetupTriggerBuilder.h"

@interface WFDailyRoutineShortcutSetupFlow : NSObject

@property (readonly, nonatomic) WFDailyRoutineShortcutSetupLocation *location; // ivar: _location
@property (readonly, copy, nonatomic) NSArray *questions; // ivar: _questions
@property (readonly, copy, nonatomic) NSString *routineName; // ivar: _routineName
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupTriggerBuilder *trigger; // ivar: _trigger


-(id)initWithRoutineName:(id)arg0 questions:(id)arg1 trigger:(id)arg2 location:(id)arg3 ;


@end


#endif