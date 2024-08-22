// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTATTRIBUTEDEFAULTS_H
#define _UITEXTATTRIBUTEDEFAULTS_H

@class UIFont, NSParagraphStyle, NSShadow, NSString;
@protocol _UITextAttributeDefaults, NSCopying;

#import <Foundation/Foundation.h>

#import "_UIMutableTextAttributeDictionary.h"
#import "_UITextAttributeDictionary.h"
#import "UIColor.h"

@interface _UITextAttributeDefaults : NSObject <_UITextAttributeDefaults, NSCopying>

 {
    _UIMutableTextAttributeDictionary *_attributes;
}


@property (readonly, copy, nonatomic) _UITextAttributeDictionary *_attributes;
@property (retain, nonatomic, setter=_setFont:) UIFont *_font;
@property (retain, nonatomic, setter=_setParagraphStyle:) NSParagraphStyle *_paragraphStyle;
@property (retain, nonatomic, setter=_setShadow:) NSShadow *_shadow;
@property (retain, nonatomic, setter=_setTextColor:) UIColor *_textColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_defaultsForUserInterfaceIdiom:(NSInteger)arg0 ;
+(id)_unspecifiedDefaults;
+(void)_getFontSizesForUserInterfaceIdiom:(NSInteger)arg0 labelFontSize:(*CGFloat)arg1 buttonFontSize:(*CGFloat)arg2 systemFontSize:(*CGFloat)arg3 smallSystemFontSize:(*CGFloat)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)_initWithFallback:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif