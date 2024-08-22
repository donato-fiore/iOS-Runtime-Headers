// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIINAPPMESSAGINGREGISTRY_H
#define VUIINAPPMESSAGINGREGISTRY_H

@class NSString, NSPointerArray, NSNumber;

#import <Foundation/Foundation.h>


@interface VUIInAppMessagingRegistry : NSObject {
    NSString *activeButtonDidChangeNotificationName;
    NSString *hasFavoriteTeamsDidChangeNotificationName;
}


@property (retain, nonatomic) NSPointerArray *buttonViews; // ivar: _buttonViews
@property (readonly, nonatomic) BOOL hasActiveButtons;
@property (readonly, nonatomic) NSNumber *hasFavoriteTeams; // ivar: _hasFavoriteTeams


+(id)sharedInstance;
-(id)init;
-(void)_notifyButtonsChanged;
-(void)_notifyButtonsChangedAction;
-(void)postNotificationFavoriteTeamsDidChange;
-(void)register:(NSInteger)arg0 ;
-(void)registerDownloadButton:(id)arg0 ;
-(void)unRegisterDownloadButton:(id)arg0 ;


@end


#endif