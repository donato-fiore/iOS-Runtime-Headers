// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPROTOTYPINGVALUE_H
#define _UIPROTOTYPINGVALUE_H

@class NSValue, NSString;

#import <Foundation/Foundation.h>


@interface _UIPrototypingValue : NSObject

@property (retain, nonatomic) NSValue *currentValue; // ivar: _currentValue
@property (retain, nonatomic) NSValue *defaultValue; // ivar: _defaultValue
@property (retain, nonatomic) NSValue *maximumValue; // ivar: _maximumValue
@property (retain, nonatomic) NSValue *minimumValue; // ivar: _minimumValue
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat stepSize; // ivar: _stepSize
@property (nonatomic) NSInteger type; // ivar: _type


-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif