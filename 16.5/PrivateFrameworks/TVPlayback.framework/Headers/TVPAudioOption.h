// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVPAUDIOOPTION_H
#define TVPAUDIOOPTION_H

@class AVMediaSelectionOption, NSString;

#import <Foundation/Foundation.h>


@interface TVPAudioOption : NSObject

@property (retain, nonatomic) AVMediaSelectionOption *avMediaSelectionOption; // ivar: _avMediaSelectionOption
@property (readonly, nonatomic) BOOL hasAudioDescriptions;
@property (copy, nonatomic) NSString *languageCodeBCP47; // ivar: _languageCodeBCP47
@property (copy, nonatomic) NSString *languageCodeFromLocale; // ivar: _languageCodeFromLocale
@property (copy, nonatomic) NSString *localizedDisplayString; // ivar: _localizedDisplayString
@property (retain, nonatomic) id *propertyListRepresentation; // ivar: _propertyListRepresentation
@property (copy, nonatomic) NSString *savedLocaleLanguageCode; // ivar: _savedLocaleLanguageCode
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) int trackID; // ivar: _trackID


-(BOOL)hasMediaCharacteristic:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithOption:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)initWithSavedTrackID:(int)arg0 savedLocaleLanguageCode:(id)arg1 ;
-(void)_currentLocaleDidChange:(id)arg0 ;
-(void)dealloc;


@end


#endif