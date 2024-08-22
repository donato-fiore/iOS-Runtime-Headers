// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONDICTATIONITEMBUTTONPRESSACTION_H
#define _UITEXTINPUTSESSIONDICTATIONITEMBUTTONPRESSACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionDictationItemButtonPressAction : UITextInputSessionAction

@property (nonatomic) NSUInteger buttonPressResult; // ivar: _buttonPressResult
@property (nonatomic) NSInteger uiOrientation; // ivar: _uiOrientation


-(NSInteger)inputActionCount;
-(id)description;


@end


#endif