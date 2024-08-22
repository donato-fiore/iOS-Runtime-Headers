// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSASSETFILEINFO_H
#define TPSASSETFILEINFO_H

@class NSString;


#import "TPSSerializableObject.h"
#import "TPSSize.h"

@interface TPSAssetFileInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSInteger scale; // ivar: _scale
@property (copy, nonatomic) TPSSize *size; // ivar: _size
@property (nonatomic) NSInteger userInterface; // ivar: _userInterface


+(BOOL)supportsSecureCoding;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif