// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSBAGKEY_H
#define SSBAGKEY_H

@class NSArray;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface SSBagKey : NSObject

@property (readonly, nonatomic) NSObject<NSObject> *defaultValue; // ivar: _defaultValue
@property (readonly, nonatomic) NSArray *stringRepresentation; // ivar: _stringRepresentation
@property (readonly, nonatomic) NSUInteger valueType; // ivar: _valueType


-(id)initWithStringRepresentation:(id)arg0 valueType:(NSUInteger)arg1 ;
-(id)initWithStringRepresentation:(id)arg0 valueType:(NSUInteger)arg1 defaultValue:(id)arg2 ;
-(id)valueFromDictionary:(id)arg0 ;


@end


#endif