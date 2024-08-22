// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKENUMERATIONCONTENTITEM_H
#define WFLINKENUMERATIONCONTENTITEM_H

@class WFContentItem, NSDictionary, NSString, LNEnumCaseMetadata, WFFileType, WFObjectType;
@protocol WFContentItemClass;


#import "WFLinkEnumerationCase.h"

@interface WFLinkEnumerationContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFLinkEnumerationCase *enumCase;
@property (retain, nonatomic) LNEnumCaseMetadata *enumCaseMetadata; // ivar: _enumCaseMetadata
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)appBundleIdentifier;
+(id)enumMetadata;
+(id)localizedCountDescriptionWithValue:(NSInteger)arg0 ;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(BOOL)getListSubtitle:(id)arg0 ;
// -(BOOL)getListThumbnail:(id)arg0 forSize:(unk)arg1  ;
-(Class)classForCoder;
-(Class)classForCopying;
-(Class)classForKeyedArchiver;
-(id)initWithCoder:(id)arg0 ;
-(id)name;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif