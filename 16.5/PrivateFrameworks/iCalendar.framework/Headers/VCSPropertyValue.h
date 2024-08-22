// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSPROPERTYVALUE_H
#define VCSPROPERTYVALUE_H

@class NSMutableDictionary, NSString;
@protocol VCSDictifiable;

#import <Foundation/Foundation.h>


@interface VCSPropertyValue : NSObject <VCSDictifiable>

 {
    NSMutableDictionary *_parameters;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *value; // ivar: _value
@property (readonly, nonatomic) NSUInteger valueType; // ivar: _valueType


-(id)dictify;
-(id)initWithValue:(id)arg0 type:(NSUInteger)arg1 ;
-(void)addParameter:(id)arg0 withValue:(id)arg1 ;


@end


#endif