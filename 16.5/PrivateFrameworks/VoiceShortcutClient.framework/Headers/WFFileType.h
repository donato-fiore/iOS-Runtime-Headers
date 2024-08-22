// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFFILETYPE_H
#define WFFILETYPE_H

@class NSString, NSDictionary, NSArray, UTType;


#import "WFType.h"
#import "WFImage.h"

@interface WFFileType : WFType

@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *OSType; // ivar: _OSType
@property (readonly, nonatomic, getter=isCoreType) BOOL coreType;
@property (readonly, nonatomic, getter=isDeclared) BOOL declared;
@property (readonly, nonatomic) WFImage *documentIcon;
@property (readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSString *pboardType; // ivar: _pboardType
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string
@property (readonly, nonatomic) NSDictionary *typeDeclaration; // ivar: _typeDeclaration
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSArray *typesConformedTo;
@property (readonly, nonatomic) UTType *utType; // ivar: _utType


+(BOOL)supportsSecureCoding;
+(id)fileTypeCache;
+(id)typeForTagClass:(id)arg0 tag:(id)arg1 ;
+(id)typeFromFileExtension:(id)arg0 ;
+(id)typeFromFilename:(id)arg0 ;
+(id)typeFromMIMEType:(id)arg0 ;
+(id)typeFromPasteboardType:(id)arg0 ;
+(id)typeWithString:(id)arg0 ;
+(id)typeWithUTType:(id)arg0 ;
+(id)typeWithUTType:(id)arg0 string:(id)arg1 ;
+(id)typesForTagClass:(id)arg0 tag:(id)arg1 conformingToType:(id)arg2 ;
+(id)typesFromStrings:(id)arg0 ;
+(id)typesFromUTTypes:(id)arg0 ;
+(id)typesFromUTTypes:(id)arg0 excludingType:(id)arg1 ;
-(BOOL)conformsToString:(id)arg0 ;
-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)conformsToUTType:(id)arg0 ;
-(BOOL)conformsToUTTypes:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToString:(id)arg0 ;
-(BOOL)isEqualToType:(id)arg0 ;
-(BOOL)isEqualToUTType:(id)arg0 ;
-(NSUInteger)hash;
-(id)conformingTypesWithFileExtension:(id)arg0 ;
-(id)conformingTypesWithMIMEType:(id)arg0 ;
-(id)conformingTypesWithTagClass:(id)arg0 tag:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithUTType:(id)arg0 ;
-(id)initWithUTType:(id)arg0 string:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif