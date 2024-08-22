// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSIMPLENUMBERPAD_H
#define TPSIMPLENUMBERPAD_H

@class UIButton;
@protocol TPSimpleNumberPadDelegate;


#import "TPNumberPad.h"

@interface TPSimpleNumberPad : TPNumberPad {
    UIButton *_deleteButton;
}


@property NSObject<TPSimpleNumberPadDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showsDeleteButton; // ivar: _showsDeleteButton


+(id)_numberPadCharacters;
-(Class)numberPadButtonClass;
-(id)initWithButtons:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)_deleteButtonClicked:(id)arg0 withEvent:(id)arg1 ;
-(void)_updateDeleteButton;
-(void)buttonUp:(id)arg0 ;
-(void)setNumberButtonsEnabled:(BOOL)arg0 ;


@end


#endif