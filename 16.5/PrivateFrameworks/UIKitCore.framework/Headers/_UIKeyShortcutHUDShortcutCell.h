// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYSHORTCUTHUDSHORTCUTCELL_H
#define _UIKEYSHORTCUTHUDSHORTCUTCELL_H

@class UIKeyShortcutHUDMenuCell;


#import "_UIKeyShortcutHUDShortcut.h"
#import "_UIKeyShortcutHUDShortcutInputAccessoryView.h"

@interface _UIKeyShortcutHUDShortcutCell : UIKeyShortcutHUDMenuCell

@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *shortcut; // ivar: _shortcut
@property (readonly, nonatomic) _UIKeyShortcutHUDShortcutInputAccessoryView *shortcutInputAccessoryView; // ivar: _shortcutInputAccessoryView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)configureWithShortcut:(id)arg0 ;


@end


#endif