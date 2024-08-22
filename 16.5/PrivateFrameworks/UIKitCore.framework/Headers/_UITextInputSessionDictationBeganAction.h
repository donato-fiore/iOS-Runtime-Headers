// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONDICTATIONBEGANACTION_H
#define _UITEXTINPUTSESSIONDICTATIONBEGANACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionDictationBeganAction : UITextInputSessionAction

@property (nonatomic) NSUInteger dictationBeganCount; // ivar: _dictationBeganCount
@property (nonatomic) NSUInteger modelessUsedAtLeastOnceCount; // ivar: _modelessUsedAtLeastOnceCount
@property (nonatomic) NSUInteger multiModalDictationBeganCount; // ivar: _multiModalDictationBeganCount


-(NSInteger)inputActionCount;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)description;


@end


#endif