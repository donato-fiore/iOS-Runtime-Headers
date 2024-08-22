// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMUSICACCOUNTNOTIFICATIONSSETTINGSMANAGER_H
#define ICMUSICACCOUNTNOTIFICATIONSSETTINGSMANAGER_H


#import <Foundation/Foundation.h>


@interface ICMusicAccountNotificationsSettingsManager : NSObject



+(id)sharedManager;
-(id)_getSwitchesDependingOnSubscriptionStatus:(id)arg0 withResponse:(id)arg1 togglingSwitchesToValue:(BOOL)arg2 ;
-(id)cachedAccountNotificationsShowInLibrarySwitch;
-(id)storeRequestContext;
-(void)getAccountNotificationsWithCompletionHandler:(id)arg0 ;
-(void)setAccountNotificationsArtistContentFeature:(BOOL)arg0 withCompletionHandler:(id)arg1 ;
-(void)setCachedAccountNotificationsShowInLibraryEnabled:(BOOL)arg0 ;


@end


#endif