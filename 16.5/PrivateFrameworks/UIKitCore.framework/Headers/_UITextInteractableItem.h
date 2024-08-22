// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UITEXTINTERACTABLEITEM_H
#define _UITEXTINTERACTABLEITEM_H

@class NSArray, UIView<_UITextItemInteracting>;
@protocol _UITextItemInteractionHandler, _UITextContent;

#import <Foundation/Foundation.h>

#import "UINotificationFeedbackGenerator.h"
#import "_UIHighlightView.h"
#import "UIContextMenuInteraction.h"
#import "UITextRange.h"

@interface _UITextInteractableItem : NSObject {
    UINotificationFeedbackGenerator *_feedbackGenerator;
    _UIHighlightView *_highlightView;
}


@property (readonly, nonatomic) NSUInteger _preferredContextMenuLayout;
@property (readonly, nonatomic) CGRect bounds;
@property (weak, nonatomic) UIContextMenuInteraction *contextMenuInteraction; // ivar: _contextMenuInteraction
@property (retain, nonatomic) NSObject<_UITextItemInteractionHandler> *handler; // ivar: _handler
@property (nonatomic) CGPoint location; // ivar: _location
@property (retain, nonatomic) UITextRange *range; // ivar: _range
@property (readonly, nonatomic) NSArray *rects;
@property (weak, nonatomic) NSObject<_UITextContent> *textContent; // ivar: _textContent
@property (weak, nonatomic) UIView<_UITextItemInteracting> *textItemInteractingView; // ivar: _textItemInteractingView


+(id)_sharedHighlightView;
+(id)interactableAttachment:(id)arg0 range:(id)arg1 inTextItemInteractingView:(id)arg2 atLocation:(struct CGPoint )arg3 ;
+(id)interactableLink:(id)arg0 range:(id)arg1 inTextItemInteractingView:(id)arg2 atLocation:(struct CGPoint )arg3 ;
+(void)_removeHighlight;
-(BOOL)_allowHighlight;
-(BOOL)_allowInteraction:(NSInteger)arg0 ;
-(BOOL)canInvokeDefaultAction;
-(BOOL)isAttachment;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLink;
-(id)contextMenuConfiguration;
-(void)_warnForInvalidAction;
-(void)dealloc;
-(void)highlight;
-(void)invokeDefaultAction;
-(void)unhighlight;


@end


#endif