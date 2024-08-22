// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISPASTEVARIANT_H
#define UISPASTEVARIANT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UISPasteVariant : NSObject

@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) NSString *glyph; // ivar: _glyph
@property (readonly, nonatomic) NSString *keyInput; // ivar: _keyInput
@property (readonly, nonatomic) NSInteger keyModifierFlags; // ivar: _keyModifierFlags
@property (readonly, nonatomic) unsigned int secureName; // ivar: _secureName
@property (readonly, nonatomic) SEL selector; // ivar: _selector


+(id)allVariants;
+(id)variantForActionIdentifier:(id)arg0 ;
+(id)variantForSecureName:(unsigned int)arg0 ;
+(id)variantForSelector:(SEL)arg0 ;
-(id)initWithSecureName:(unsigned int)arg0 selector:(SEL)arg1 actionIdentifier:(id)arg2 glpyh:(id)arg3 keyInput:(id)arg4 keyModifierFlags:(NSInteger)arg5 ;
-(id)localizedStringForLocalization:(id)arg0 ;


@end


#endif