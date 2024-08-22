// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSASSETFILEINFOMANAGER_H
#define TPSASSETFILEINFOMANAGER_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;


#import "TPSSerializableObject.h"

@interface TPSAssetFileInfoManager : TPSSerializableObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDictionary *fileMap; // ivar: _fileMap


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)fileInfoIdentifierWithMainIdentifier:(id)arg0 userInterfaceStyle:(NSInteger)arg1 ;
-(id)fileInfoWithMainIdentifier:(id)arg0 userInterfaceStyle:(NSInteger)arg1 scale:(NSInteger)arg2 ;
-(id)filesFromDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 clientConditions:(id)arg1 ;
-(void)addNewAssetInfoFromFileMap:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif