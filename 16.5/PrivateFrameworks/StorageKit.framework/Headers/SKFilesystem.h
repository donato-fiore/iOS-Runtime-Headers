// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKFILESYSTEM_H
#define SKFILESYSTEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKFilesystem : NSObject

@property (retain) NSString *contentMask; // ivar: _contentMask
@property BOOL defaultEffaceable; // ivar: _defaultEffaceable
@property (retain) NSString *dmPersonality; // ivar: _dmPersonality
@property BOOL isCaseSensitive; // ivar: _isCaseSensitive
@property BOOL isEncrypted; // ivar: _isEncrypted
@property BOOL isJournaled; // ivar: _isJournaled
@property (retain) NSString *localizedKey; // ivar: _localizedKey
@property (retain) NSString *localizedName; // ivar: _localizedName
@property (retain) NSString *majorType; // ivar: _majorType
@property NSUInteger minimumSize; // ivar: _minimumSize
@property BOOL shouldShow; // ivar: _shouldShow
@property int sortPriority; // ivar: _sortPriority
@property (retain) NSString *type; // ivar: _type
@property (retain) NSString *unlocalizedEncryptedName; // ivar: _unlocalizedEncryptedName
@property (retain) NSString *unlocalizedName; // ivar: _unlocalizedName


+(BOOL)_shouldShowFilesystemWithType:(id)arg0 key:(id)arg1 personality:(id)arg2 ;
+(id)_skfilesystemTypeWithPersonality:(id)arg0 ;
+(id)buildFilesystems;
+(id)buildSpecialFilesystems;
+(void)addFilesystemsWithType:(id)arg0 filesystemPersonality:(id)arg1 personalityDict:(id)arg2 userVisibleName:(id)arg3 caseSensitive:(BOOL)arg4 outFilesystems:(*id)arg5 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)supportsJournaling;
-(id)description;
-(id)dicationaryRepresentation;
-(id)initEncryptedFSWithUnencryptedFS:(id)arg0 localizedName:(id)arg1 sortPriority:(int)arg2 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithSKFilesystem:(id)arg0 personality:(id)arg1 majorType:(id)arg2 localizedName:(id)arg3 localizedKey:(id)arg4 caseSensitive:(BOOL)arg5 encrypted:(BOOL)arg6 shouldShow:(BOOL)arg7 personalityKey:(id)arg8 sortPriority:(int)arg9 ;
-(id)initWithSpecialFilesystem:(id)arg0 majorType:(id)arg1 localizedName:(id)arg2 ;


@end


#endif