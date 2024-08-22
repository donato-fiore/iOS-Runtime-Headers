// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSLOTTEMPLATEVIEW_H
#define WFSLOTTEMPLATEVIEW_H

@class UIControl, NSArray, NSMutableDictionary, NSString, UIColor, UIButton, UIFont, NSParagraphStyle, NSTextContainer, NSDate, WFTextAttachmentInteraction;
@protocol WFSlotTemplateTextStorageDelegate, WFSlotTemplateTypingTextViewDelegate, WFTextAttachmentInteractionDelegate, WFSlotTemplateViewDelegate;


#import "WFSlotTemplateLayoutManager.h"
#import "WFSlotIdentifier.h"
#import "WFSlotTemplateTextStorage.h"
#import "WFSlotTemplateTypingTextView.h"

@interface WFSlotTemplateView : UIControl <WFSlotTemplateTextStorageDelegate, WFSlotTemplateTypingTextViewDelegate, WFTextAttachmentInteractionDelegate>



@property (retain, nonatomic) NSArray *accessibilityElements; // ivar: _accessibilityElements
@property (readonly, nonatomic) NSMutableDictionary *cachedHeightsByWidths; // ivar: _cachedHeightsByWidths
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFSlotTemplateViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *disabledSlotBackgroundColor;
@property (readonly, nonatomic) UIColor *disabledSlotTitleColor;
@property (nonatomic) BOOL disclosureArrowIsOpen; // ivar: _disclosureArrowIsOpen
@property (weak, nonatomic) UIButton *disclosureButton; // ivar: _disclosureButton
@property (copy, nonatomic) NSArray *exclusionRects; // ivar: _exclusionRects
@property (nonatomic) BOOL extendSlotBackgroundOffEdges;
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (nonatomic) NSUInteger lastLayoutManagerLineCount; // ivar: _lastLayoutManagerLineCount
@property (retain, nonatomic) WFSlotTemplateLayoutManager *layoutManager; // ivar: _layoutManager
@property (nonatomic) BOOL menuIsPresented; // ivar: _menuIsPresented
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (readonly, nonatomic) WFSlotIdentifier *selectedSlotIdentifier;
@property (nonatomic) BOOL showsDisclosureArrow; // ivar: _showsDisclosureArrow
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSTextContainer *textContainer; // ivar: _textContainer
@property (retain, nonatomic) WFSlotTemplateTextStorage *textStorage; // ivar: _textStorage
@property (retain, nonatomic) NSDate *touchDownTimestamp; // ivar: _touchDownTimestamp
@property (nonatomic) BOOL typingAllowsMultipleLines; // ivar: _typingAllowsMultipleLines
@property (retain, nonatomic) WFTextAttachmentInteraction *typingAttachmentInteraction; // ivar: _typingAttachmentInteraction
@property (retain, nonatomic) WFSlotTemplateLayoutManager *typingLayoutManager; // ivar: _typingLayoutManager
@property (readonly, nonatomic) WFSlotIdentifier *typingSlotIdentifier; // ivar: _typingSlotIdentifier
@property (retain, nonatomic) NSTextContainer *typingTextContainer; // ivar: _typingTextContainer
@property (retain, nonatomic) WFSlotTemplateTextStorage *typingTextStorage; // ivar: _typingTextStorage
@property (retain, nonatomic) WFSlotTemplateTypingTextView *typingTextView; // ivar: _typingTextView
@property (retain, nonatomic) UIFont *unpopulatedFont;


+(CGFloat)heightForWidth:(CGFloat)arg0 withContents:(id)arg1 horizontalPadding:(CGFloat)arg2 font:(id)arg3 unpopulatedFont:(id)arg4 alignment:(NSInteger)arg5 ;
+(id)paragraphStyleWithAlignment:(NSInteger)arg0 ;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldPresentMenuAboveView;
-(BOOL)shouldRecognizeTapOnTextAttachment:(id)arg0 inSlotWithIdentifier:(id)arg1 ;
-(BOOL)startEditingHighlightedSlot;
-(BOOL)textAttachmentInteraction:(id)arg0 shouldRecognizeTapOnTextAttachment:(id)arg1 inCharacterRange:(struct _NSRange )arg2 ;
-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(CGFloat)heightForWidth:(CGFloat)arg0 ;
-(NSInteger)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(NSInteger)arg0 ;
-(id)attachmentAtPoint:(struct CGPoint )arg0 characterRange:(struct _NSRange *)arg1 ;
-(id)configureMenuAtLocation:(struct CGPoint )arg0 wasTriggeredByTap:(BOOL)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)highlightedSlot;
-(id)highlightedSlotIdentifier;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)selectedSlot;
-(id)slotAfterSlotIdentifier:(id)arg0 ;
-(id)slotAtPoint:(struct CGPoint )arg0 ;
-(id)slotBeforeSlotIdentifier:(id)arg0 ;
-(id)slotIdentifierBeforeSlot:(id)arg0 inContents:(id)arg1 ;
-(id)slotIdentifierForAttachmentInteraction:(id)arg0 characterRange:(struct _NSRange )arg1 ;
-(id)slotWithIdentifier:(id)arg0 ;
-(id)typingParagraphStyleForParagraphStyle:(id)arg0 ;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(struct CGRect )sourceRectForSlot:(id)arg0 ;
-(struct CGRect )sourceRectForSlotWithIdentifier:(id)arg0 ;
-(void)_deselectSlotAndNotifyDelegate:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_selectSlot:(id)arg0 notifyDelegate:(BOOL)arg1 ;
-(void)accessibilityShiftFocusBackToView;
-(void)beginTypingInSlotWithIdentifier:(id)arg0 ;
-(void)contextMenuInteraction:(id)arg0 willDisplayMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)deselectSlot;
-(void)didTapDisclosureArrow;
-(void)didTapTextAttachment:(id)arg0 inSlotWithIdentifier:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endTyping;
-(void)handleTouch:(id)arg0 withPhase:(NSUInteger)arg1 ;
-(void)handleTouchWithPhase:(NSUInteger)arg0 atLocation:(struct CGPoint )arg1 ;
-(void)highlightSlotWithIdentifier:(id)arg0 ;
-(void)invalidateDisplay;
-(void)invalidateIntrinsicContentSize;
-(void)layoutSubviews;
-(void)menuWillPresent;
-(void)performFadeTransition:(id)arg0 ;
-(void)positionTypingAboveSlot:(id)arg0 ;
-(void)presentedMenuDidDismiss;
-(void)resetTextView;
-(void)selectSlotWithIdentifier:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContents:(id)arg0 animated:(BOOL)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setupTextEntry;
-(void)slotTemplateStorageDidInvalidateDisplay:(id)arg0 ;
-(void)slotTemplateTypingTextViewDidCopy:(id)arg0 withOriginalBlock:(id)arg1 ;
-(void)slotTemplateTypingTextViewDidCut:(id)arg0 withOriginalBlock:(id)arg1 ;
-(void)slotTemplateTypingTextViewDidDelete:(id)arg0 ;
-(void)slotTemplateTypingTextViewDidPaste:(id)arg0 withOriginalBlock:(id)arg1 ;
-(void)slotTemplateTypingTextViewDidTabBackwards:(id)arg0 withOriginalBlock:(id)arg1 ;
-(void)slotTemplateTypingTextViewDidTabForwards:(id)arg0 withOriginalBlock:(id)arg1 ;
-(void)textAttachmentInteraction:(id)arg0 didTapTextAttachment:(id)arg1 inCharacterRange:(struct _NSRange )arg2 ;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)unhighlightSlot;
-(void)updateAccessibilityElements;
-(void)updateDisclosureButtonPosition;
-(void)updateDisclosureButtonTransformAnimated:(BOOL)arg0 ;
-(void)updateExclusionRectsWithBounds:(struct CGRect )arg0 ;
-(void)updateTintColorInTextStorage;
-(void)updateTypingFont;
-(void)updateTypingParagraphStyle;
-(void)updateTypingTextContainerSize;
-(void)updateTypingTextContents:(id)arg0 ;
-(void)updateTypingUnpopulatedFont;
-(void)updateVariableAttachmentAppearanceInContents;


@end


#endif