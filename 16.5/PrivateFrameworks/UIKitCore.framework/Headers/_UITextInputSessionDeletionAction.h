// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONDELETIONACTION_H
#define _UITEXTINPUTSESSIONDELETIONACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionDeletionAction : UITextInputSessionAction

@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSUInteger removedEmojiCount; // ivar: _removedEmojiCount
@property (nonatomic) NSUInteger removedTextLength; // ivar: _removedTextLength


-(BOOL)changedContent;
-(NSInteger)inputActionCount;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)description;


@end


#endif