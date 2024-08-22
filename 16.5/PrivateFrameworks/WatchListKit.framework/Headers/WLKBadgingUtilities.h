// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKBADGINGUTILITIES_H
#define WLKBADGINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface WLKBadgingUtilities : NSObject



+(BOOL)addBadgeIdentifier:(id)arg0 ;
+(BOOL)hasMigrated;
+(BOOL)removeBadgeIdentifier:(id)arg0 ;
+(id)badgeIdentifiers;
+(id)currentBadgeNumber;
+(id)sharedUtilities;
+(void)clearSavedBadgeIdentifiers;
-(id)_notificationCenter;
-(void)migrateToNewBadgingSystemIfNeeded;


@end


#endif