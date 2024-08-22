// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFACTORPROVIDERIDENT_H
#define TRIFACTORPROVIDERIDENT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIFactorProviderIdent : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned char type; // ivar: _type
@property (readonly, nonatomic) NSString *value; // ivar: _value


+(id)identWithType:(unsigned char)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementType:(unsigned char)arg0 ;
-(id)copyWithReplacementValue:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithType:(unsigned char)arg0 value:(id)arg1 ;


@end


#endif