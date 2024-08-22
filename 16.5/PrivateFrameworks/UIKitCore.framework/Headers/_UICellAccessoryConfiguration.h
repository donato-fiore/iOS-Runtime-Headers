// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICELLACCESSORYCONFIGURATION_H
#define _UICELLACCESSORYCONFIGURATION_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UICellAccessoryConfiguration : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic, getter=_backgroundColor, setter=_setBackgroundColor:) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (readonly, nonatomic, getter=_isSystemType) BOOL isSystemType;
@property (readonly, nonatomic, getter=_systemType) NSInteger systemType;
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (nonatomic) BOOL usesDefaultLayoutWidth; // ivar: _usesDefaultLayoutWidth


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif