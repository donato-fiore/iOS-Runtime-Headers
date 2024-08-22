// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIINPUTVIEWSETPLACEMENT_FLOATINGASSISTANTAPPLICATOR_H
#define UIINPUTVIEWSETPLACEMENT_FLOATINGASSISTANTAPPLICATOR_H

@class AssistantApplicator, TUIInputAssistantHostView;



@interface UIInputViewSetPlacement_FloatingAssistantApplicator : AssistantApplicator

@property (retain, nonatomic) TUIInputAssistantHostView *hostView; // ivar: _hostView


+(struct UIEdgeInsets )inputAccessoryPaddingForTraitCollection:(id)arg0 ;
-(BOOL)shouldApplyOriginChange;
-(struct CGRect )popoverFrame;
-(struct UIEdgeInsets )inputAccessoryPadding;
-(void)applyChanges:(id)arg0 ;
-(void)invalidate;
-(void)prepare;
-(void)setupHostViewIfNeeded;


@end


#endif