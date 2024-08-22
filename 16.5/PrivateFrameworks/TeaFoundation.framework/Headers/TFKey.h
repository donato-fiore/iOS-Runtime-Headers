// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TFKEY_H
#define TFKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TFKey : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger address; // ivar: _address
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) id *type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithName:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAddress:(NSUInteger)arg0 type:(id)arg1 name:(id)arg2 ;
-(id)initWithAddressOfType:(id)arg0 name:(id)arg1 ;
-(id)initWithTypeName:(id)arg0 name:(id)arg1 ;


@end


#endif