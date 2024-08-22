// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBTABGROUP_H
#define WBTABGROUP_H

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, NSDictionary, NSSet, NSURL, WBSCRDTPosition;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable;

#import <Foundation/Foundation.h>

#import "WebBookmark.h"
#import "WBTab.h"

@interface WBTabGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, WBBookmarkRepresentable, WBSerializable>

 {
    NSArray *_cachedImmutableTabs;
    NSMutableArray *_deletedTabs;
    NSMutableDictionary *_tabsByUUID;
    id *_displayTitleProvider;
}


@property (readonly, nonatomic) NSArray *allTabs;
@property (retain, nonatomic) WebBookmark *bookmark; // ivar: _bookmark
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, copy, nonatomic) id *displayTitleProvider;
@property (readonly, copy, nonatomic) NSSet *emptyTabsUUIDSet;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, copy, nonatomic) NSString *htmlString;
@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic, getter=isInserted) BOOL inserted;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic, getter=_isMutable) BOOL isMutable; // ivar: _isMutable
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (readonly, nonatomic) WBTab *lastPinnedTab;
@property (readonly, copy, nonatomic) NSString *lastSelectedTabUUID; // ivar: _lastSelectedTabUUID
@property (readonly, nonatomic, getter=isLocal) BOOL local;
@property (readonly, nonatomic, getter=isNamed) BOOL named;
@property (readonly, nonatomic) BOOL needsSecureDelete;
@property (readonly, copy, nonatomic) NSArray *overflowRemoteTabs; // ivar: _overflowRemoteTabs
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (readonly, copy, nonatomic) NSURL *representativeURL;
@property (readonly, nonatomic, getter=isShared) BOOL shared;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsTabGroupFavorites;
@property (readonly, copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (readonly, nonatomic, getter=isSyncable) BOOL syncable;
@property (readonly, nonatomic, getter=_tabClass) Class tabClass; // ivar: _tabClass
@property (readonly, copy, nonatomic) NSArray *tabs; // ivar: _tabs
@property (readonly, copy, nonatomic) NSSet *tabsUUIDSet;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL usesGlobalPinnedTabs;
@property (readonly, copy, nonatomic) NSString *uuid;


+(BOOL)supportsSecureCoding;
-(BOOL)hasSameKindAsTabGroup:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIdentical:(id)arg0 ;
-(BOOL)tabsAreIdentical:(id)arg0 ;
-(id)_copyWithZone:(struct _NSZone *)arg0 isMutable:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBookmark:(id)arg0 ;
-(id)initWithBookmark:(id)arg0 lastSelectedTabUUID:(id)arg1 ;
-(id)initWithBookmark:(id)arg0 lastSelectedTabUUID:(id)arg1 kind:(NSInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceIdentifier:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTitle:(id)arg0 deviceIdentifier:(id)arg1 ;
-(id)initWithTitle:(id)arg0 uuid:(id)arg1 deviceIdentifier:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)tabWithUUID:(id)arg0 ;
-(void)_updateCachedImmutableTabsIfNeeded;
-(void)_updateTabLookupTable;
-(void)detectDuplicatedTabs;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif