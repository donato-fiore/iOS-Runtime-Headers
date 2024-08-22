// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYSHORTCUTHUDSHORTCUT_H
#define _UIKEYSHORTCUTHUDSHORTCUT_H

@class UIKeyShortcutHUDMenuElement, NSString, NSMutableDictionary, NSMutableArray, NSArray;
@protocol NSSecureCoding;


#import "UICommandAlternate.h"
#import "_UIKeyShortcutHUDShortcut.h"
#import "UIKeyCommand.h"

@interface _UIKeyShortcutHUDShortcut : UIKeyShortcutHUDMenuElement <NSSecureCoding>

 {
    NSString *_overrideTitle;
}


@property (weak, nonatomic) UICommandAlternate *alternateForBaseShortcut; // ivar: _alternateForBaseShortcut
@property (readonly, nonatomic) NSMutableDictionary *alternatesMap; // ivar: _alternatesMap
@property (readonly, nonatomic) NSUInteger attributes;
@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *baseShortcutForAlternate; // ivar: _baseShortcutForAlternate
@property (readonly, nonatomic) NSString *discoverabilityTitle;
@property (retain, nonatomic) UIKeyCommand *discoverabilityUIKeyCommand; // ivar: _discoverabilityUIKeyCommand
@property (readonly, nonatomic) NSMutableArray *displayableAlternates; // ivar: _displayableAlternates
@property (readonly, nonatomic) NSString *hudTitle;
@property (readonly, nonatomic) NSString *input;
@property (readonly, nonatomic) BOOL isPasteShortcut;
@property (readonly, nonatomic) NSInteger modifierFlags;
@property (weak, nonatomic) id *originalTarget; // ivar: _originalTarget
@property (readonly, nonatomic) NSArray *shortcutAlternates;
@property (readonly, nonatomic) UIKeyCommand *uiKeyCommand;


+(BOOL)supportsSecureCoding;
+(id)shortcutWithUIKeyCommand:(id)arg0 ;
-(BOOL)_isEquivalentToPasteAndMatchStyleShortcut;
-(BOOL)_isEquivalentToPasteShortcut;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)shortcutToDisplayForModifierFlags:(NSInteger)arg0 ;
// -(void)_acceptMenuVisit:(id)arg0 shortcutVisit:(unk)arg1  ;
-(void)_updateOverrideTitle;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif