// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIDEBUGGINGIVAR_H
#define UIDEBUGGINGIVAR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIDebuggingIvar : NSObject

@property (readonly, nonatomic) BOOL isObject;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) *objc_ivar objcIvar; // ivar: _objcIvar
@property (nonatomic) NSObject *object; // ivar: _object
@property (copy, nonatomic) NSString *typeDescription; // ivar: _typeDescription
@property (nonatomic) char * typeEncoding; // ivar: _typeEncoding
@property (nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSString *valueDescription;


+(id)ivarWithObjcIvar:(struct objc_ivar *)arg0 forObject:(id)arg1 ;
-(void)dealloc;


@end


#endif