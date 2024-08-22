// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTEXTATTACHMENTINTERACTION_H
#define WFTEXTATTACHMENTINTERACTION_H

@class NSString, UITapGestureRecognizer, NSTextContainer, UIView;
@protocol UIGestureRecognizerDelegate, UIInteraction, WFTextAttachmentInteractionDelegate;

#import <Foundation/Foundation.h>


@interface WFTextAttachmentInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTextAttachmentInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (retain, nonatomic) NSTextContainer *textContainer; // ivar: _textContainer
@property (nonatomic) UIEdgeInsets textContainerInset; // ivar: _textContainerInset
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)attachmentAtPoint:(struct CGPoint )arg0 characterRange:(struct _NSRange *)arg1 ;
-(id)layoutManager;
-(id)textStorage;
-(void)dealloc;
-(void)didMoveToView:(id)arg0 ;
-(void)handleTextTap:(id)arg0 ;
-(void)willMoveToView:(id)arg0 ;


@end


#endif