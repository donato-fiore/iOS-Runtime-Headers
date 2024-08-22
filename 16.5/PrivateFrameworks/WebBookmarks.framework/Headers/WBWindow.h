// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBWINDOW_H
#define WBWINDOW_H

@class NSString, NSDate, NSDictionary;

#import <Foundation/Foundation.h>

#import "WBTabGroup.h"
#import "WebBookmark.h"
#import "WBMutableTabGroup.h"

@interface WBWindow : NSObject

@property (retain, nonatomic) WBTabGroup *activeTabGroup; // ivar: _activeTabGroup
@property (readonly, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, copy, nonatomic) NSString *customUnifiedFieldText;
@property (retain, nonatomic) NSDate *dateClosed; // ivar: _dateClosed
@property (copy, nonatomic) NSDictionary *extraAttributes;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) BOOL isFavoritesBarHidden;
@property (readonly, nonatomic) BOOL isMinimized;
@property (readonly, nonatomic) BOOL isPopupWindow;
@property (readonly, nonatomic) BOOL isPrivateWindow;
@property (readonly, nonatomic) BOOL isTabBarHidden;
@property (readonly, nonatomic) WBMutableTabGroup *localTabGroup; // ivar: _localTabGroup
@property (readonly, nonatomic) BOOL prefersSidebarVisible;
@property (readonly, nonatomic) WBMutableTabGroup *privateTabGroup; // ivar: _privateTabGroup
@property (copy, nonatomic) NSString *sceneID;
@property (readonly, copy, nonatomic) NSDictionary *tabGroupsToActiveTabs;
@property (readonly, copy, nonatomic) NSString *uuid;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)activeTabUUIDForTabGroupWithUUID:(id)arg0 ;
-(id)description;
-(id)initWithBookmark:(id)arg0 ;
-(id)initWithBookmark:(id)arg0 activeTabGroup:(id)arg1 localTabGroup:(id)arg2 privateTabGroup:(id)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg0 localTabGroup:(id)arg1 privateTabGroup:(id)arg2 ;
-(id)initWithUUID:(id)arg0 ;
-(id)initWithUUID:(id)arg0 activeTabGroup:(id)arg1 localTabGroup:(id)arg2 privateTabGroup:(id)arg3 sceneID:(id)arg4 ;
-(id)initWithUUID:(id)arg0 sceneID:(id)arg1 ;
-(void)_updateExtraAttributesUsingBlock:(id)arg0 ;
-(void)removeActiveTabUUIDForTabGroupWithUUID:(id)arg0 ;
-(void)removeAllActiveTabUUIDs;
-(void)setActiveTabUUID:(id)arg0 forTabGroupWithUUID:(id)arg1 ;
-(void)updateActiveTabGroup;


@end


#endif