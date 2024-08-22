// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIKEYSHORTCUTHUDSEARCHTEXTFIELD_H
#define _UIKEYSHORTCUTHUDSEARCHTEXTFIELD_H



#import "UISearchTextField.h"
#import "_UIKeyShortcutHUDSearchButton.h"
#import "_UIKeyShortcutHUDShortcutInputView.h"

@interface _UIKeyShortcutHUDSearchTextField : UISearchTextField

@property (retain, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton; // ivar: _searchButton
@property (retain, nonatomic) _UIKeyShortcutHUDShortcutInputView *shortcutInputView; // ivar: _shortcutInputView


-(BOOL)_suppressSoftwareKeyboard;
-(id)preferredFocusEnvironments;
-(struct CGRect )clearButtonRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )editingRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )placeholderRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )textRectForBounds:(struct CGRect )arg0 ;
-(void)buildMenuWithBuilder:(id)arg0 ;


@end


#endif