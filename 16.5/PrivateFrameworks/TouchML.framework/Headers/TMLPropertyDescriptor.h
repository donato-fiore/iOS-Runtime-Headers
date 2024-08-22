// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMLPROPERTYDESCRIPTOR_H
#define TMLPROPERTYDESCRIPTOR_H

@class NSString;
@protocol TMLModelSerialize;

#import <Foundation/Foundation.h>


@interface TMLPropertyDescriptor : NSObject <TMLModelSerialize>

 {
    NSString *_propertyType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOptional) BOOL optional; // ivar: _optional
@property (readonly, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (readonly, nonatomic, getter=isReadonly) BOOL readonly; // ivar: _readonly
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *typeClassName;


+(id)decode:(struct ProtobufCMessage *)arg0 ;
-(BOOL)canMergeFromPropertyDescriptor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(NSUInteger)arg1 attributes:(id)arg2 ;
-(id)initWithName:(id)arg0 typeName:(id)arg1 attributes:(id)arg2 ;
-(void)encode:(struct ProtobufCMessage *)arg0 ;


@end


#endif