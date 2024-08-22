// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTAGTEXTVIEW_H
#define WFTAGTEXTVIEW_H

@class UITextView, NSString;



@interface WFTagTextView : UITextView

@property (copy, nonatomic) NSString *placeholder;


-(id)initWithFrame:(struct CGRect )arg0 textContainer:(id)arg1 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dealloc;
-(void)paste:(id)arg0 ;
-(void)setAttributedText:(id)arg0 ;
-(void)setFont:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)setTextAlignment:(NSInteger)arg0 ;
-(void)textDidChange:(id)arg0 ;
-(void)updateTextAttachments;
-(void)updateTextContainerInsets;


@end


#endif