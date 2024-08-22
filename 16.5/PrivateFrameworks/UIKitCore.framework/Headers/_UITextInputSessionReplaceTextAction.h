// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONREPLACETEXTACTION_H
#define _UITEXTINPUTSESSIONREPLACETEXTACTION_H

@class UITextInputSessionAction;



@interface _UITextInputSessionReplaceTextAction : UITextInputSessionAction

@property (nonatomic) NSUInteger insertedEmojiCount; // ivar: _insertedEmojiCount
@property (nonatomic) NSUInteger insertedPunctuationCount; // ivar: _insertedPunctuationCount
@property (nonatomic) NSUInteger insertedTextLength; // ivar: _insertedTextLength
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSUInteger removedEmojiCount; // ivar: _removedEmojiCount
@property (nonatomic) NSUInteger removedPunctuationCount; // ivar: _removedPunctuationCount
@property (nonatomic) NSUInteger removedTextLength; // ivar: _removedTextLength


-(BOOL)changedContent;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)description;


@end


#endif