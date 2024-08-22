// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINPUTSESSIONACTION_H
#define _UITEXTINPUTSESSIONACTION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_UITextInputSessionBeganAction.h"
#import "_UITextInputSessionCopyAction.h"
#import "_UITextInputSessionCutAction.h"
#import "_UITextInputSessionDeletionAction.h"
#import "_UITextInputSessionDictationBeganAction.h"
#import "_UITextInputSessionDictationEndedAction.h"
#import "_UITextInputSessionDictationItemButtonPressAction.h"
#import "_UITextInputSessionEndAction.h"
#import "_UITextInputSessionInsertionAction.h"
#import "_UITextInputSessionPasteAction.h"
#import "_UITextInputSessionRedoAction.h"
#import "_UITextInputSessionReplaceTextAction.h"
#import "_UITextInputSessionReplaceWithCandidateAction.h"
#import "_UITextInputSessionSelectionAction.h"
#import "_UITextInputSessionUndoAction.h"

@interface _UITextInputSessionAction : NSObject

@property (readonly, nonatomic) _UITextInputSessionBeganAction *asBegan;
@property (readonly, nonatomic) _UITextInputSessionCopyAction *asCopy;
@property (readonly, nonatomic) _UITextInputSessionCutAction *asCut;
@property (readonly, nonatomic) _UITextInputSessionDeletionAction *asDeletion;
@property (readonly, nonatomic) _UITextInputSessionDictationBeganAction *asDictationBegan;
@property (readonly, nonatomic) _UITextInputSessionDictationEndedAction *asDictationEnded;
@property (readonly, nonatomic) _UITextInputSessionDictationItemButtonPressAction *asDictationItemButtonPress;
@property (readonly, nonatomic) _UITextInputSessionEndAction *asEnd;
@property (readonly, nonatomic) _UITextInputSessionInsertionAction *asInsertion;
@property (readonly, nonatomic) _UITextInputSessionPasteAction *asPaste;
@property (readonly, nonatomic) _UITextInputSessionRedoAction *asRedo;
@property (readonly, nonatomic) _UITextInputSessionReplaceTextAction *asReplaceText;
@property (readonly, nonatomic) _UITextInputSessionReplaceWithCandidateAction *asReplaceWithCandidate;
@property (readonly, nonatomic) _UITextInputSessionSelectionAction *asSelection;
@property (readonly, nonatomic) _UITextInputSessionUndoAction *asUndo;
@property (readonly, nonatomic) BOOL changedContent;
@property (nonatomic) NSInteger flagOptions; // ivar: _flagOptions
@property (readonly, nonatomic) NSInteger inputActionCount;
@property (nonatomic) NSInteger inputActionCountFromMergedActions; // ivar: _inputActionCountFromMergedActions
@property (copy, nonatomic) NSString *keyboardLayout; // ivar: _keyboardLayout
@property (copy, nonatomic) NSString *keyboardType; // ivar: _keyboardType
@property (copy, nonatomic) NSString *keyboardVariant; // ivar: _keyboardVariant
@property (copy, nonatomic) NSString *language; // ivar: _language
@property (copy, nonatomic) NSString *region; // ivar: _region
@property (nonatomic) _NSRange relativeRangeBefore; // ivar: _relativeRangeBefore
@property (nonatomic) NSInteger source; // ivar: _source
@property (nonatomic) NSInteger textInputActionsSource; // ivar: _textInputActionsSource
@property (nonatomic) NSInteger textInputActionsType; // ivar: _textInputActionsType


-(BOOL)isMergeableWith:(id)arg0 ;
-(NSInteger)mergeActionIfPossible:(id)arg0 ;
-(id)inputModeUniqueString;


@end


#endif