// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSMETADATA_H
#define TPSMETADATA_H

@class NSURL, NSString;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"
#import "TPSAssetSizes.h"

@interface TPSMetadata : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *assetBaseURL; // ivar: _assetBaseURL
@property (copy, nonatomic) TPSAssetSizes *assetSizes; // ivar: _assetSizes
@property (copy, nonatomic) NSString *contentMapHash; // ivar: _contentMapHash
@property (nonatomic) BOOL contextualTipsInactive; // ivar: _contextualTipsInactive
@property (copy, nonatomic) NSString *language; // ivar: _language


+(BOOL)supportsSecureCoding;
+(id)identifierFromMetadataDictionary:(id)arg0 ;
+(id)metadataFromDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif