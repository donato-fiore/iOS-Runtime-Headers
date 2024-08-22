// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIFONTPICKERVIEWCONTROLLERCONFIGURATION_H
#define UIFONTPICKERVIEWCONTROLLERCONFIGURATION_H

@class NSPredicate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIFontPickerViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, setter=_setHideSearchBar:) BOOL _hideSearchBar; // ivar: __hideSearchBar
@property (nonatomic) BOOL _includeDefaultFont; // ivar: __includeDefaultFont
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor; // ivar: __tintColor
@property (nonatomic) BOOL displayUsingSystemFont; // ivar: _displayUsingSystemFont
@property (copy, nonatomic) NSPredicate *filteredLanguagesPredicate; // ivar: _filteredLanguagesPredicate
@property (nonatomic) unsigned int filteredTraits; // ivar: _filteredTraits
@property (nonatomic) BOOL includeFaces; // ivar: _includeFaces


+(BOOL)supportsSecureCoding;
+(id)filterPredicateForFilteredLanguages:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif