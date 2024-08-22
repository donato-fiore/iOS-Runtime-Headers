// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSUEXTENDEDATTRIBUTE_H
#define TSUEXTENDEDATTRIBUTE_H

@class NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSUExtendedAttribute : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSData *value; // ivar: _value


+(id)extendedAttributeFromPath:(id)arg0 name:(id)arg1 options:(int)arg2 error:(*id)arg3 ;
+(id)extendedAttributeWithName:(id)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setAttributeToPath:(id)arg0 options:(int)arg1 error:(*id)arg2 ;
-(BOOL)setAttributeToPathFileSystemRepresentation:(char *)arg0 options:(int)arg1 error:(*id)arg2 ;
-(BOOL)shouldPreserveForIntent:(unsigned int)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initFromPath:(id)arg0 name:(id)arg1 options:(int)arg2 error:(*id)arg3 ;
-(id)initFromPathFileSystemRepresentation:(char *)arg0 name:(id)arg1 forRemoval:(BOOL)arg2 options:(int)arg3 error:(*id)arg4 ;
-(id)initWithName:(id)arg0 value:(id)arg1 ;


@end


#endif