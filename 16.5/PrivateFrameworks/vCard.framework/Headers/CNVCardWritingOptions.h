// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDWRITINGOPTIONS_H
#define CNVCARDWRITINGOPTIONS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNVCardWritingOptions : NSObject

@property (copy) NSArray *availableEncodings; // ivar: _availableEncodings
@property BOOL compressPhotos; // ivar: _compressPhotos
@property BOOL includeMeCardOnlySharingProperties; // ivar: _includeMeCardOnlySharingProperties
@property BOOL includeNotes; // ivar: _includeNotes
@property BOOL includePhotos; // ivar: _includePhotos
@property BOOL includePrivateBundleIdentifiers; // ivar: _includePrivateBundleIdentifiers
@property BOOL includePrivateFields; // ivar: _includePrivateFields
@property BOOL includeUserSettings; // ivar: _includeUserSettings
@property NSUInteger maximumEncodingLength; // ivar: _maximumEncodingLength
@property NSUInteger maximumImageEncodingLength; // ivar: _maximumImageEncodingLength
@property CGSize maximumImageSize; // ivar: _maximumImageSize
@property NSUInteger outputVersion; // ivar: _outputVersion
@property BOOL prefersUncroppedPhotos; // ivar: _prefersUncroppedPhotos
@property BOOL shouldSuppressRegulatoryLogging; // ivar: _shouldSuppressRegulatoryLogging
@property (copy) NSArray *treatAsUnknownProperties; // ivar: _treatAsUnknownProperties
@property BOOL usePhotoReferencesIfAvailable; // ivar: _usePhotoReferencesIfAvailable


+(id)optionsFromPreferences;
-(id)description;
-(id)init;


@end


#endif