// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSDOCUMENT_H
#define TPSDOCUMENT_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding, NAIdentifiable;


#import "TPSSerializableObject.h"
#import "TPSAssetFileInfoManager.h"
#import "TPSNotification.h"
#import "TPSWidgetContent.h"

@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable>



@property (copy, nonatomic) TPSAssetFileInfoManager *assetFileInfoManager; // ivar: _assetFileInfoManager
@property (copy, nonatomic) NSString *clientConditionID; // ivar: _clientConditionID
@property (copy, nonatomic) NSString *clonedFromID; // ivar: _clonedFromID
@property (copy, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isHardwareWelcome) BOOL hardwareWelcome;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *keywords; // ivar: _keywords
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (nonatomic) NSInteger lastModifiedDate; // ivar: _lastModifiedDate
@property (copy, nonatomic) TPSNotification *notification; // ivar: _notification
@property (readonly, nonatomic, getter=isSoftwareWelcome) BOOL softwareWelcome;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userLanguageCode; // ivar: _userLanguageCode
@property (copy, nonatomic) NSString *variantID; // ivar: _variantID
@property (readonly, nonatomic, getter=isWelcome) BOOL welcome;
@property (copy, nonatomic) TPSWidgetContent *widgetContent; // ivar: _widgetContent


+(BOOL)supportsSecureCoding;
+(id)URLWithTipIdentifier:(id)arg0 collectionIdentifier:(id)arg1 referrer:(id)arg2 ;
+(id)contentDictionaryForDictionary:(id)arg0 fromMatchingClientConditions:(id)arg1 ;
+(id)deliveryInfoForDictionary:(id)arg0 ;
+(id)deliveryInfoIdForDictionary:(id)arg0 ;
+(id)documentsForDictionary:(id)arg0 ;
+(id)fileIdMapForDictionary:(id)arg0 ;
+(id)na_identity;
+(void)getValuesFromOpenURLSchemeQueryItems:(id)arg0 tipIdentifier:(*id)arg1 collectionIdentifier:(*id)arg2 referrer:(*id)arg3 ;
-(BOOL)hasWidgetContent;
-(BOOL)isEqual:(id)arg0 ;
-(id)URLWithReferrer:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 metadata:(id)arg1 identifierKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithContentDictionary:(id)arg0 metadata:(id)arg1 clientConditionIdentifier:(id)arg2 fileIdMap:(id)arg3 clientConditions:(id)arg4 ;


@end


#endif