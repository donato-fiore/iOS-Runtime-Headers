// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICRADIOLIBRARYTRACKCONTENTREFERENCE_H
#define ICRADIOLIBRARYTRACKCONTENTREFERENCE_H

@class NSString, NSNumber;
@protocol ICRadioContentReferenceContainable, NSCopying, NSSecureCoding;


#import "ICRadioContentReference.h"

@interface ICRadioLibraryTrackContentReference : ICRadioContentReference <ICRadioContentReferenceContainable, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *albumArtistName; // ivar: _albumArtistName
@property (copy, nonatomic) NSString *albumName; // ivar: _albumName
@property (copy, nonatomic) NSString *artistName; // ivar: _artistName
@property (copy, nonatomic, getter=isCompilation) NSNumber *compilation; // ivar: _compilation
@property (copy, nonatomic) NSString *composerName; // ivar: _composerName
@property (copy, nonatomic) NSString *containerID; // ivar: _containerID
@property (copy, nonatomic) NSString *copyright; // ivar: _copyright
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *discCount; // ivar: _discCount
@property (copy, nonatomic) NSNumber *discNumber; // ivar: _discNumber
@property (copy, nonatomic) NSNumber *duration; // ivar: _duration
@property (copy, nonatomic) NSNumber *fileSize; // ivar: _fileSize
@property (copy, nonatomic) NSString *genreName; // ivar: _genreName
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *kind; // ivar: _kind
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *storeAdamIdentifier; // ivar: _storeAdamIdentifier
@property (copy, nonatomic) NSNumber *storeCloudIdentifier; // ivar: _storeCloudIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSNumber *trackCount; // ivar: _trackCount
@property (copy, nonatomic) NSNumber *trackNumber; // ivar: _trackNumber
@property (copy, nonatomic) NSString *universalCloudLibraryID; // ivar: _universalCloudLibraryID
@property (copy, nonatomic) NSNumber *year; // ivar: _year


+(BOOL)supportsSecureCoding;
-(NSInteger)contentType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)matchDictionaryWithSubscriptionStatus:(id)arg0 ;
-(id)rawContentDictionaryWithSubscriptionStatus:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif