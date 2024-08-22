// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITEXTCONTEXTMENUINTERACTION_H
#define UITEXTCONTEXTMENUINTERACTION_H

@protocol UIContextMenuInteractionDelegate;


#import "UITextInteraction.h"
#import "UIContextMenuInteraction.h"

@interface UITextContextMenuInteraction : UITextInteraction

@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (readonly, nonatomic) BOOL dismissedByActionSelection;
@property (readonly, nonatomic) BOOL dismissedRecently;
@property (weak, nonatomic) NSObject<UIContextMenuInteractionDelegate> *externalContextMenuDelegate; // ivar: _externalContextMenuDelegate
@property (readonly, nonatomic) BOOL isDisplayingMenu;


+(BOOL)shouldUseContextMenuInteraction;
+(id)createMenuInteraction;
+(void)setShouldUseContextMenuInteraction:(BOOL)arg0 ;
-(BOOL)_textInputIsSecure;
-(struct CGPoint )locationInTextInputViewForLocationInView:(struct CGPoint )arg0 ;
-(void)dismissMenuForInputUI;
-(void)dismissSelectionCommandsWithReason:(NSInteger)arg0 ;
-(void)prepareForContextMenuAtLocationInView:(struct CGPoint )arg0 completion:(id)arg1 ;
-(void)presentMenuForInputUI:(id)arg0 ;
-(void)presentSelectionCommandsWithConfiguration:(id)arg0 ;
-(void)updateVisibleMenuPosition;


@end


#endif