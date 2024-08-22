// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIEMOJISEARCHTEXTFIELD_H
#define TUIEMOJISEARCHTEXTFIELD_H

@class UITextField, NSDate, UIImageView, NSString;
@protocol UITextFieldDelegate, TUIEmojiSearchTextFieldDelegate;


#import "TUIEmojiSearchTextFieldPortalView.h"
#import "TUIEmojiSearchTextFieldBackgroundView.h"

@interface TUIEmojiSearchTextField : UITextField <UITextFieldDelegate>

 {
    NSDate *_highlightBeginTime;
    UIImageView *_magnifyingGlassView;
    TUIEmojiSearchTextFieldPortalView *_portalView;
    TUIEmojiSearchTextFieldBackgroundView *_backgroundView;
    BOOL _active;
}


@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL pretendsToBecomeFirstResponder; // ivar: _pretendsToBecomeFirstResponder
@property (weak, nonatomic) NSObject<TUIEmojiSearchTextFieldDelegate> *searchDelegate; // ivar: _searchDelegate
@property (readonly) Class superclass;


+(CGFloat)preferredHeight;
-(BOOL)_isInteractiveDespiteResponderStatus;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)isEditing;
-(BOOL)resignFirstResponder;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)_clearButton;
-(id)_textAndGlyphColorForRenderConfig:(id)arg0 ;
-(id)_textAndGlyphCompositingFilterForRenderConfig:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 pretendsToBecomeFirstResponder:(BOOL)arg1 ;
-(id)insertionPointColor;
-(id)portalView;
-(id)selectionContainerView;
-(struct CGRect )leftViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )rightViewRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )visibleRect;
-(void)_matchPortalViewFrame:(struct CGRect )arg0 ;
-(void)_setRenderConfig:(id)arg0 ;
-(void)_windowBecameKeyNotificationPosted:(id)arg0 ;
-(void)didMoveToWindow;
-(void)fieldEditorDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)paste:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)validateCommand:(id)arg0 ;


@end


#endif