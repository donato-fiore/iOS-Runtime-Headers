// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARD30CARDBUILDER_H
#define CNVCARD30CARDBUILDER_H

@class NSMutableArray;
@protocol CNVCardLineFactory, CNVCardPerson;

#import <Foundation/Foundation.h>


@interface CNVCard30CardBuilder : NSObject

@property (nonatomic) NSUInteger countOfLinesBeforePhoto; // ivar: _countOfLinesBeforePhoto
@property (nonatomic) NSInteger groupCount; // ivar: _groupCount
@property (readonly, nonatomic) NSObject<CNVCardLineFactory> *lineFactory; // ivar: _lineFactory
@property (readonly, nonatomic) NSMutableArray *lines; // ivar: _lines
@property (readonly, nonatomic) NSObject<CNVCardPerson> *person; // ivar: _person
@property (nonatomic) BOOL photoHandled; // ivar: _photoHandled
@property (readonly, copy, nonatomic) id *retrofitPhoto; // ivar: _retrofitPhoto
@property (readonly, nonatomic) NSMutableArray *unknownProperties; // ivar: _unknownProperties


+(NSUInteger)estimatedBytesAvailableForPhotoWithOptions:(id)arg0 serializer:(id)arg1 ;
+(id)builderWithPerson:(id)arg0 ;
-(BOOL)addPhotoReferences;
-(id)initWithPerson:(id)arg0 ;
-(void)_addAttributesForCropRects:(id)arg0 imageHash:(id)arg1 toLine:(id)arg2 ;
-(void)addActivityAlerts;
-(void)addAlternateBirthday;
-(void)addBeginningOfCard;
-(void)addBirthday;
-(void)addCalendarURIs;
-(void)addCardDAVUID;
-(void)addCategories;
-(void)addCompanyMarker;
-(void)addDowntimeWhitelist;
-(void)addEmailAddresses;
-(void)addEndOfCard;
-(void)addFullName;
-(void)addImageHash;
-(void)addImageType;
-(void)addInstantMessagingHandles:(id)arg0 ;
-(void)addInstantMessagingInfo;
-(void)addLegacyInstantMessagingHandles:(id)arg0 forService:(id)arg1 vCardProperty:(id)arg2 ;
-(void)addLineWithName:(id)arg0 value:(id)arg1 ;
-(void)addNameComponents;
-(void)addNameLines;
-(void)addNameOrderMarker;
-(void)addNote;
-(void)addOrganization;
-(void)addOtherDates;
-(void)addPhoneNumbers;
-(void)addPhonemeData;
-(void)addPhotoWithOptions:(id)arg0 ;
-(void)addPostalAddresses;
-(void)addPreferredApplePersonaIdentifier;
-(void)addPreferredLikenessSource;
-(void)addPropertyLinesForValues:(id)arg0 generator:(id)arg1 ;
-(void)addRelatedNames;
-(void)addSocialProfiles;
-(void)addUID;
-(void)addURLs;
-(void)addUnknownProperties;
-(void)buildWithSerializer:(id)arg0 ;
-(void)preparePhotoLineWithOptions:(id)arg0 ;
-(void)removeUnknownPropertiesWithTag:(id)arg0 ;


@end


#endif