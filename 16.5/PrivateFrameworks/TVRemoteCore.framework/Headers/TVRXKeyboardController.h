// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TVRXKEYBOARDCONTROLLER_H
#define TVRXKEYBOARDCONTROLLER_H

@class NSString;
@protocol TVRXKeyboardControllerDelegate, TVRXKeyboardImpl;

#import <Foundation/Foundation.h>

#import "TVRCKeyboardAttributes.h"

@interface TVRXKeyboardController : NSObject

@property (readonly, nonatomic) TVRCKeyboardAttributes *attributes;
@property (weak, nonatomic) NSObject<TVRXKeyboardControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (retain, nonatomic, getter=_keyboardImpl, setter=_setKeyboardImpl:) NSObject<TVRXKeyboardImpl> *keyboardImpl; // ivar: _keyboardImpl
@property (copy, nonatomic) NSString *text;


-(id)_init;
-(void)_beginSessionWithAttributes:(id)arg0 ;
-(void)_editingSessionBeganWithAttributes:(id)arg0 ;
-(void)_editingSessionEnded;
-(void)_editingSessionUpdatedAttributes:(id)arg0 ;
-(void)_editingSessionUpdatedText:(id)arg0 ;
-(void)_endSession;
-(void)_textActionPayloadGenerated:(id)arg0 ;
-(void)sendReturnKey;
-(void)sendTextActionPayload:(id)arg0 ;


@end


#endif