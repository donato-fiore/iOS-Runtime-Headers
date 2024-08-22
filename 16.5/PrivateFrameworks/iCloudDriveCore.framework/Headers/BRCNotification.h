// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCNOTIFICATION_H
#define BRCNOTIFICATION_H

@class BRQueryItem, NSString, BRFileObjectID, NSSet, NSURL;


#import "BRCAppLibrary.h"
#import "BRCItemGlobalID.h"

@interface BRCNotification : BRQueryItem

@property (readonly, nonatomic) NSString *aliasSourceAppLibraryID; // ivar: _aliasSourceAppLibraryID
@property (readonly, nonatomic) BRCAppLibrary *appLibrary; // ivar: _appLibrary
@property (readonly, nonatomic) BOOL isDocumentsFolder;
@property (readonly, nonatomic) BOOL isInDataScope; // ivar: _isInDataScope
@property (readonly, nonatomic) BOOL isInDocumentScope; // ivar: _isInDocumentScope
@property (readonly, nonatomic) BOOL isInTrashScope; // ivar: _isInTrashScope
@property (readonly, nonatomic) BRCItemGlobalID *itemGlobalID; // ivar: _itemGlobalID
@property (readonly, nonatomic) NSString *oldAppLibraryID; // ivar: _oldAppLibraryID
@property (readonly, nonatomic) BRFileObjectID *oldParentFileObjectID; // ivar: _oldParentFileObjectID
@property (readonly, nonatomic) BRCItemGlobalID *parentGlobalID; // ivar: _parentGlobalID
@property (retain, nonatomic) NSSet *parentGlobalIDs; // ivar: _parentGlobalIDs
@property (readonly, nonatomic) NSURL *url;


+(BOOL)supportsSecureCoding;
+(id)notificationFromItem:(id)arg0 ;
+(id)notificationGatheredFromItem:(id)arg0 ;
-(BOOL)canMerge:(id)arg0 ;
-(Class)classForCoder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initRootContainerNotification;
-(id)initWithLocalItem:(id)arg0 itemDiffs:(NSUInteger)arg1 ;
-(id)notificationByStrippingSharingInfoIfNeeded;
-(id)subclassDescription;
-(void)generateLogicalExtension:(id)arg0 physicalExtension:(id)arg1 ;
-(void)markAsLoserVersionWithEtag:(id)arg0 modificationDate:(id)arg1 editorNameComponents:(id)arg2 lastEditorDeviceName:(id)arg3 ;
-(void)merge:(id)arg0 ;
-(void)setNumberAttribute:(id)arg0 forKey:(id)arg1 ;


@end


#endif