// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFGRADIENT_H
#define WFGRADIENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WFColor.h"

@interface WFGradient : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) *CGGradient CGGradient; // ivar: _CGGradient
@property (readonly, nonatomic) WFColor *accessibilityBaseColor; // ivar: _accessibilityBaseColor
@property (readonly, nonatomic) WFColor *baseColor; // ivar: _baseColor
@property (readonly, nonatomic) NSInteger blendMode; // ivar: _blendMode
@property (readonly, nonatomic) WFColor *darkAccessibilityBaseColor; // ivar: _darkAccessibilityBaseColor
@property (readonly, nonatomic) WFColor *darkBaseColor; // ivar: _darkBaseColor
@property (readonly, nonatomic) WFColor *endColor; // ivar: _endColor
@property (readonly, nonatomic) WFColor *startColor; // ivar: _startColor


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)baseColorForDarkMode:(BOOL)arg0 highContrast:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBaseColor:(id)arg0 darkBaseColor:(id)arg1 accessibilityBaseColor:(id)arg2 darkAccessibilityBaseColor:(id)arg3 startColor:(id)arg4 endColor:(id)arg5 blendMode:(NSInteger)arg6 ;
-(id)initWithBaseColor:(id)arg0 startColor:(id)arg1 endColor:(id)arg2 blendMode:(NSInteger)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColor:(id)arg0 ;
-(id)initWithStartColor:(id)arg0 endColor:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif