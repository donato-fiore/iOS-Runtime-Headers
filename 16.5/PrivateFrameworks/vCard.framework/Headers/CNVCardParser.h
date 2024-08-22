// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVCARDPARSER_H
#define CNVCARDPARSER_H

@class NSData, NSDateComponents, NSMutableArray, NSMutableString, NSMutableDictionary, NSString, NSArray;
@protocol CNVCardParsedResultBuilder;

#import <Foundation/Foundation.h>

#import "CNVCardLexer.h"
#import "CNVCardDateComponentsParser.h"
#import "CNVCardSelectorMap.h"
#import "CNVCardMutableNameComponents.h"
#import "CNVCardReadingOptions.h"

@interface CNVCardParser : NSObject {
    CNVCardLexer *_lexer;
    NSData *_data;
    NSUInteger _defaultEncoding;
    BOOL _hasImportErrors;
    CNVCardDateComponentsParser *_dateComponentsParser;
    CNVCardSelectorMap *_parsingSelectorMap;
    CNVCardSelectorMap *_parameterSelectorMap;
    BOOL _30vCard;
    CNVCardMutableNameComponents *_nameComponents;
    NSDateComponents *_bday;
    NSDateComponents *_altBday;
    NSMutableArray *_emails;
    NSMutableArray *_dateComponents;
    NSMutableArray *_phones;
    NSMutableArray *_addresses;
    NSMutableArray *_relatedNames;
    NSMutableArray *_urls;
    NSMutableArray *_calendarURIs;
    NSMutableString *_notes;
    NSMutableDictionary *_extensions;
    NSMutableArray *_unknowns;
    NSString *_uid;
    NSString *_carddavUID;
    NSMutableArray *_instantMessagingAddresses;
    NSMutableArray *_socialProfiles;
    NSMutableDictionary *_activityAlerts;
    NSMutableArray *_cropRects;
    BOOL _fullNameHasZeroLength;
    NSString *_imageGroup;
    NSString *_imageReference;
    NSUInteger _startingPositionOfCurrentProperty;
    NSArray *_itemParameters;
    NSString *_grouping;
    NSUInteger _encoding;
    BOOL _quotedPrintable;
    BOOL _base64;
}


@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (readonly, nonatomic) CNVCardReadingOptions *options; // ivar: _options
@property (readonly, nonatomic) NSObject<CNVCardParsedResultBuilder> *resultBuilder; // ivar: _resultBuilder


+(BOOL)isTagSyntacticallyValid:(id)arg0 ;
+(BOOL)parseFirstResultInData:(id)arg0 resultBuilder:(id)arg1 ;
+(NSUInteger)countOfCardsInData:(id)arg0 ;
+(NSUInteger)inferredStringEncodingFromData:(id)arg0 ;
+(id)newParameterSelectorMap;
+(id)newParsingSelectorMap;
+(id)os_log;
+(id)parseData:(id)arg0 options:(id)arg1 resultFactory:(id)arg2 ;
+(id)parseData:(id)arg0 resultFactory:(id)arg1 ;
-(BOOL)advancePastSemicolon;
-(BOOL)atEOF;
-(BOOL)hasImportErrors;
-(BOOL)parseExtension:(id)arg0 ;
-(BOOL)parseInstantMessageValueWithService:(id)arg0 ;
-(BOOL)parseLine;
-(BOOL)parseNextResultUsingResultBuilder:(id)arg0 ;
-(BOOL)parseValueUsingSelector:(SEL)arg0 ;
-(BOOL)parse_ADD;
-(BOOL)parse_ADR;
-(BOOL)parse_BDAY;
-(BOOL)parse_CALURI;
-(BOOL)parse_EMAIL;
-(BOOL)parse_FN;
-(BOOL)parse_IMPP;
-(BOOL)parse_N;
-(BOOL)parse_NICKNAME;
-(BOOL)parse_NOTE;
-(BOOL)parse_ORG;
-(BOOL)parse_PHOTO;
-(BOOL)parse_PRODID;
-(BOOL)parse_REV;
-(BOOL)parse_TEL;
-(BOOL)parse_TITLE;
-(BOOL)parse_UID;
-(BOOL)parse_URL;
-(BOOL)parse_VERSION;
-(BOOL)parse_X_ABADR;
-(BOOL)parse_X_ABDATE;
-(BOOL)parse_X_ABLABEL;
-(BOOL)parse_X_ABORDER;
-(BOOL)parse_X_ABPHOTO;
-(BOOL)parse_X_ABRELATEDNAMES;
-(BOOL)parse_X_ABSHOWAS;
-(BOOL)parse_X_ABUID;
-(BOOL)parse_X_ACTIVITY_ALERT;
-(BOOL)parse_X_ADDRESSBOOKSERVER_PHONEME_DATA;
-(BOOL)parse_X_AIM;
-(BOOL)parse_X_AIM_ID;
-(BOOL)parse_X_ALTBDAY;
-(BOOL)parse_X_APPLE_GUARDIAN_WHITELISTED;
-(BOOL)parse_X_APPLE_LIKENESS_SERVICE_IDENTIFIER;
-(BOOL)parse_X_APPLE_LIKENESS_SOURCE;
-(BOOL)parse_X_APPLE_SUBADMINISTRATIVEAREA;
-(BOOL)parse_X_APPLE_SUBLOCALITY;
-(BOOL)parse_X_GOOGLE_ID;
-(BOOL)parse_X_GOOGLE_TALK;
-(BOOL)parse_X_GTALK;
-(BOOL)parse_X_ICQ;
-(BOOL)parse_X_ICQ_ID;
-(BOOL)parse_X_IMAGEHASH;
-(BOOL)parse_X_IMAGETYPE;
-(BOOL)parse_X_JABBER;
-(BOOL)parse_X_JABBER_ID;
-(BOOL)parse_X_MAIDENNAME;
-(BOOL)parse_X_MSN;
-(BOOL)parse_X_MSN_ID;
-(BOOL)parse_X_PHONETIC_FIRST_NAME;
-(BOOL)parse_X_PHONETIC_LAST_NAME;
-(BOOL)parse_X_PHONETIC_MIDDLE_NAME;
-(BOOL)parse_X_PHONETIC_ORG;
-(BOOL)parse_X_PRONUNCIATION_FIRST_NAME;
-(BOOL)parse_X_PRONUNCIATION_LAST_NAME;
-(BOOL)parse_X_QQ;
-(BOOL)parse_X_QQ_ID;
-(BOOL)parse_X_SKYPE;
-(BOOL)parse_X_SKYPE_ID;
-(BOOL)parse_X_SKYPE_USERNAME;
-(BOOL)parse_X_SOCIALPROFILE;
-(BOOL)parse_X_YAHOO;
-(BOOL)parse_X_YAHOO_ID;
-(BOOL)valueIsEmpty:(id)arg0 ;
-(NSInteger)currentPosition;
-(SEL)handlerSelectorForParameterName:(id)arg0 ;
-(SEL)parsingSelectorForTag:(id)arg0 ;
-(id)fallbackLabelForProperty:(id)arg0 ;
-(id)firstCustomLabelForProperty:(id)arg0 types:(id)arg1 ;
-(id)firstParameterWithName:(id)arg0 ;
-(id)firstValueForKey:(id)arg0 inExtension:(id)arg1 ;
-(id)firstValueForKey:(id)arg0 inExtensionGroup:(id)arg1 ;
-(id)firstValueForParameterWithName:(id)arg0 ;
-(id)genericLabelForProperty:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 options:(id)arg1 ;
-(id)makeLineWithLabel:(id)arg0 value:(id)arg1 ;
-(id)makeLineWithValue:(id)arg0 forProperty:(id)arg1 ;
-(id)nextBase64Data;
-(id)nextParameterInCurrentLine;
-(id)nextResultWithFactory:(id)arg0 progressLength:(*NSInteger)arg1 ;
-(id)parameterValuesForName:(id)arg0 ;
-(id)parseArrayValue;
-(id)parseBase64Data;
-(id)parseParameterValues;
-(id)parseParameters;
-(id)parseRemainingLine;
-(id)parseStringValue;
-(id)parseUnknownValueStartingAtPosition:(NSUInteger)arg0 ;
-(id)phoneLabel;
-(id)pool_nextResultWithFactory:(id)arg0 progressLength:(*NSInteger)arg1 ;
-(id)resultsWithFactory:(id)arg0 ;
-(id)typeParameters;
-(id)unparsedStringForCurrentProperty;
-(id)validCountryCodes;
-(void)cleanUpCardState;
-(void)parameter_BASE64:(id)arg0 ;
-(void)parameter_CHARSET:(id)arg0 ;
-(void)parameter_ENCODING:(id)arg0 ;
-(void)parameter_QUOTED_PRINTABLE:(id)arg0 ;
-(void)processExtensionValues;
-(void)processNameValues;
-(void)reportMultiValueLines:(id)arg0 forProperty:(id)arg1 ;
-(void)reportValue:(id)arg0 forProperty:(id)arg1 ;
-(void)reportValues;


@end


#endif