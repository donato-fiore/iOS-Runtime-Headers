// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLITUNESTONE_H
#define TLITUNESTONE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface TLITunesTone : NSObject

@property (readonly, nonatomic) NSString *albumTitle; // ivar: _albumTitle
@property (readonly, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSString *artworkFile; // ivar: _artworkFile
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSNumber *fadeInDurationNumber; // ivar: _fadeInDurationNumber
@property (readonly, nonatomic) NSNumber *fadeOutDurationNumber; // ivar: _fadeOutDurationNumber
@property (readonly, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly, nonatomic) NSString *genreName; // ivar: _genreName
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic, getter=isPrivateTone) BOOL privateTone; // ivar: _privateTone
@property (readonly, nonatomic, getter=isProtectedContent) BOOL protectedContent; // ivar: _protectedContent
@property (readonly, nonatomic, getter=isPurchased) BOOL purchased; // ivar: _purchased
@property (readonly, nonatomic, getter=isRingtone) BOOL ringtone; // ivar: _ringtone
@property (readonly, nonatomic) NSString *storeFrontIdentifier; // ivar: _storeFrontIdentifier
@property (readonly, nonatomic) NSUInteger storeItemIdentifier; // ivar: _storeItemIdentifier
@property (readonly, nonatomic) NSNumber *syncIdentifier; // ivar: _syncIdentifier


+(id)_identifierForPropertyListRepresentation:(id)arg0 ;
-(BOOL)isDuplicateOfTone:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithPropertyListRepresentation:(id)arg0 filePath:(id)arg1 ;
-(id)initWithToneStoreDownload:(id)arg0 ;


@end


#endif