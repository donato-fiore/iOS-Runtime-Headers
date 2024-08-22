// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNANIMPARAMETERSAVEDPARAMETER_H
#define KNANIMPARAMETERSAVEDPARAMETER_H

@class NSString, TSUBezierPath;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface KNAnimParameterSavedParameter : NSObject <NSSecureCoding>



@property (nonatomic) BOOL debugOnly; // ivar: _debugOnly
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasMaxValue; // ivar: _hasMaxValue
@property (nonatomic) BOOL hasMinValue; // ivar: _hasMinValue
@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *parameterDescription; // ivar: _parameterDescription
@property (retain, nonatomic) TSUBezierPath *pathValue; // ivar: _pathValue
@property (nonatomic) BOOL removed; // ivar: _removed
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)p_bezierPathFromSavedPathElements:(id)arg0 ;
-(id)p_savedPathFromPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif