// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIPROACTIVECANDIDATECELL_H
#define TUIPROACTIVECANDIDATECELL_H

@class TIKeyboardCandidate, UIView;


#import "TUICandidateBaseCell.h"

@interface TUIProactiveCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (retain, nonatomic) UIView *slotContentView; // ivar: _slotContentView


+(id)reuseIdentifier;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;


@end


#endif