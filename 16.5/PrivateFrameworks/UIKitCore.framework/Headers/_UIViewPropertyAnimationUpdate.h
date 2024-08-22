// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIVIEWPROPERTYANIMATIONUPDATE_H
#define _UIVIEWPROPERTYANIMATIONUPDATE_H

@class NSValue, NSString;

#import <Foundation/Foundation.h>


@interface _UIViewPropertyAnimationUpdate : NSObject

@property (readonly, nonatomic, getter=isAdditive) BOOL additive; // ivar: _additive
@property (nonatomic) CGFloat delay; // ivar: _delay
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (retain, nonatomic) NSValue *fromValue; // ivar: _fromValue
@property (readonly, nonatomic, getter=isImplicit) BOOL implicit; // ivar: _implicit
@property (readonly, nonatomic) NSString *propertyName; // ivar: _propertyName
@property (nonatomic) CGFloat startTime; // ivar: _startTime
@property (retain, nonatomic) NSValue *toValue; // ivar: _toValue


-(id)init;
-(id)initWithPropertyName:(id)arg0 implicit:(BOOL)arg1 additive:(BOOL)arg2 ;


@end


#endif