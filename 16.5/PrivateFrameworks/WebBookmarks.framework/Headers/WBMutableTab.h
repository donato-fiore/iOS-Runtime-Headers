// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBMUTABLETAB_H
#define WBMUTABLETAB_H

@class NSString, NSURL, WBSCRDTPosition;
@protocol NSCopying;


#import "WBTab.h"
#import "WBLocalTabAttributes.h"

@interface WBMutableTab : WBTab <NSCopying>



@property (nonatomic, getter=wasAdded) BOOL added;
@property (nonatomic, getter=isLocal) BOOL local;
@property (retain, nonatomic) WBLocalTabAttributes *localAttributes;
@property (copy, nonatomic) NSString *localTitle;
@property (copy, nonatomic) NSURL *localURL;
@property (nonatomic, getter=wasModified) BOOL modified;
@property (nonatomic, getter=wasMoved) BOOL moved;
@property (nonatomic) int orderIndex;
@property (nonatomic, getter=isPrivateBrowsing) BOOL privateBrowsing;
@property (nonatomic, getter=isShared) BOOL shared;
@property (copy, nonatomic) WBSCRDTPosition *syncPosition;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (copy, nonatomic) NSString *syncableTitle;
@property (copy, nonatomic) NSURL *syncableURL;
@property (copy, nonatomic) NSString *tabGroupUUID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *url;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_setPropertiesFromTabGroup:(id)arg0 ;
-(void)adoptAttributesFromTab:(id)arg0 ;
-(void)didInsertIntoTabGroup:(id)arg0 ;
-(void)didRemoveFromTabGroup;
-(void)markAsRead;
-(void)markClean;
-(void)mergeWithTab:(id)arg0 ;
-(void)setPinned:(BOOL)arg0 title:(id)arg1 url:(id)arg2 ;
-(void)setURL:(id)arg0 shouldSync:(BOOL)arg1 ;


@end


#endif