// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIUNDOTEXTOPERATION_H
#define _UIUNDOTEXTOPERATION_H


#import <Foundation/Foundation.h>

#import "UITextInputController.h"

@interface _UIUndoTextOperation : NSObject

@property (nonatomic) _NSRange affectedRange; // ivar: _affectedRange
@property (weak, nonatomic) UITextInputController *inputController; // ivar: _inputController


-(BOOL)supportsCoalescing;
-(id)initWithAffectedRange:(struct _NSRange )arg0 inputController:(id)arg1 ;
-(void)undoRedo;


@end


#endif