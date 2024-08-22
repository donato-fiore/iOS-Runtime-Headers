// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCH3DSHADERVARIABLE_H
#define TSCH3DSHADERVARIABLE_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DShaderVariable.h"

@interface TSCH3DShaderVariable : NSObject <NSCopying>

 {
    NSArray *_elements;
    NSUInteger _componentCount;
}


@property (readonly, nonatomic) NSUInteger arraySize; // ivar: _arraySize
@property (readonly, nonatomic) NSString *commonShaderType;
@property (readonly, nonatomic) NSUInteger componentCount;
@property (readonly, nonatomic) TSCH3DShaderVariable *genericName; // ivar: _genericName
@property (readonly, nonatomic) TSCH3DShaderType initialLinkType;
@property (readonly, nonatomic) BOOL isSpecial; // ivar: _isSpecial
@property (readonly, nonatomic) BOOL isTexture;
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *precision; // ivar: _precision
@property (readonly, nonatomic) TSCH3DShaderType shaderType; // ivar: _shaderType
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)variableWithName:(id)arg0 type:(id)arg1 precision:(id)arg2 arraySize:(NSUInteger)arg3 shaderType:(struct TSCH3DShaderType )arg4 isSpecial:(BOOL)arg5 generic:(id)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 type:(id)arg1 precision:(id)arg2 arraySize:(NSUInteger)arg3 shaderType:(struct TSCH3DShaderType )arg4 isSpecial:(BOOL)arg5 generic:(id)arg6 ;
-(id)variableAtIndex:(NSUInteger)arg0 ;


@end


#endif