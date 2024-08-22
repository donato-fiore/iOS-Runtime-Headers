// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONTACTTEXTVIEW_H
#define WFCONTACTTEXTVIEW_H

@class UITextView, NSString, NSSet;



@interface WFContactTextView : UITextView

@property (nonatomic) BOOL allowsTextEntry; // ivar: _allowsTextEntry
@property (copy, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSSet *supportedPersonProperties; // ivar: _supportedPersonProperties


-(id)attributesByAddingTintColorToAttributes:(id)arg0 ;
-(id)attributesForPasting;
-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)paste:(id)arg0 ;
-(void)pasteAttributedString:(id)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)tintColorDidChange;
-(void)updateTextAttachments;
-(void)updateTextContainerInsets;


@end


#endif