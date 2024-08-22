// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDAILYROUTINESHORTCUTSMANAGER_H
#define WFDAILYROUTINESHORTCUTSMANAGER_H


#import <Foundation/Foundation.h>


@interface WFDailyRoutineShortcutsManager : NSObject



+(id)atTheGymShortcut;
+(id)goingToWorkShortcut;
+(id)headingHomeShortcut;
+(id)processActionResponseBlockWithCompletion:(SEL)arg0 ;
+(void)getDailyRoutineShortcutsWithCompletionHandler:(id)arg0 ;


@end


#endif