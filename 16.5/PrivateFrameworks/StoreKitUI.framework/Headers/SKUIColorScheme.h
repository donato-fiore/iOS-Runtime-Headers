// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUICOLORSCHEME_H
#define SKUICOLORSCHEME_H

@class UIColor;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKUIColorScheme : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (copy, nonatomic) UIColor *highlightedTextColor; // ivar: _highlightedTextColor
@property (copy, nonatomic) UIColor *primaryTextColor; // ivar: _primaryTextColor
@property (readonly, nonatomic) NSInteger schemeStyle;
@property (copy, nonatomic) UIColor *secondaryTextColor; // ivar: _secondaryTextColor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithColorSchemeDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif