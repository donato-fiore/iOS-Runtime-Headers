// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTINPUTCONTEXT_H
#define UITEXTINPUTCONTEXT_H


#import <Foundation/Foundation.h>


@interface UITextInputContext : NSObject

@property (nonatomic, getter=isDictationInputExpected) BOOL dictationInputExpected;
@property (nonatomic, getter=isHardwareKeyboardInputExpected) BOOL hardwareKeyboardInputExpected;
@property (nonatomic, getter=isPencilInputExpected) BOOL pencilInputExpected;


+(id)current;
+(id)new;
-(void)updateInputSource:(NSInteger)arg0 toUpdate:(BOOL)arg1 ;


@end


#endif