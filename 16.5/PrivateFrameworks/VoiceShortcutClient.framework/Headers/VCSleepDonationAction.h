// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSLEEPDONATIONACTION_H
#define VCSLEEPDONATIONACTION_H



#import "VCSleepAction.h"

@interface VCSleepDonationAction : VCSleepAction



+(id)identifierForShortcut:(id)arg0 ;
+(id)sleepActionsDictionaryForShortcuts:(id)arg0 ;
+(id)sleepActionsDictionaryForShortcutsByApp:(id)arg0 ;
+(id)sleepActionsForShortcuts:(id)arg0 bundleIdentifier:(id)arg1 ;
-(id)initWithShortcut:(id)arg0 ;
-(id)initWithShortcut:(id)arg0 bundleIdentifier:(id)arg1 ;


@end


#endif