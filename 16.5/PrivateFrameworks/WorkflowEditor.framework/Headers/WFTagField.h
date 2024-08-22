// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTAGFIELD_H
#define WFTAGFIELD_H

@class UIView, NSString, UIButton, WFTextScrollView, NSArray;
@protocol UITextViewDelegate, WFTagPickerViewControllerDelegate, WFTagFieldDelegate;


#import "WFTagTextView.h"

@interface WFTagField : UIView <UITextViewDelegate, WFTagPickerViewControllerDelegate>



@property (nonatomic) BOOL allowsTextEntry; // ivar: _allowsTextEntry
@property (nonatomic) NSInteger autocapitalizationType; // ivar: _autocapitalizationType
@property (nonatomic) NSInteger autocorrectionType; // ivar: _autocorrectionType
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFTagFieldDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEditable) BOOL editable; // ivar: _editable
@property (copy, nonatomic) NSString *fieldTitle; // ivar: _fieldTitle
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger keyboardAppearance;
@property (nonatomic) NSInteger keyboardType;
@property (copy, nonatomic) NSString *placeholder;
@property (weak, nonatomic) UIButton *plusButton; // ivar: _plusButton
@property (weak, nonatomic) WFTextScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (copy, nonatomic) NSArray *suggestedTags; // ivar: _suggestedTags
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tags; // ivar: _tags
@property (nonatomic) NSInteger textAlignment;
@property (weak, nonatomic) WFTagTextView *textView; // ivar: _textView
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


-(BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange )arg1 replacementText:(id)arg2 ;
-(BOOL)tokenizeFreeTextFromRange:(struct _NSRange )arg0 ;
-(id)containingViewController;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 showsAddButton:(BOOL)arg1 ;
-(void)insertTag:(id)arg0 ;
-(void)layoutSubviews;
-(void)selectTag;
-(void)tagPicker:(id)arg0 didSelectTags:(id)arg1 ;
-(void)tagPickerDidCancel:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidChangeSelection:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;
-(void)updateEditableState;
-(void)updateTags;


@end


#endif