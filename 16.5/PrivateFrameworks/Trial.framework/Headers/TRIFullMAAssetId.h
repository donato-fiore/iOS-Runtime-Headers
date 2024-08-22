// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFULLMAASSETID_H
#define TRIFULLMAASSETID_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIFullMAAssetId : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *specifier; // ivar: _specifier
@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
+(id)identWithType:(id)arg0 specifier:(id)arg1 version:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementSpecifier:(id)arg0 ;
-(id)copyWithReplacementType:(id)arg0 ;
-(id)copyWithReplacementVersion:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(id)arg0 specifier:(id)arg1 version:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif