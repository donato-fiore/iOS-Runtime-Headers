// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPPASSCODEVIEW_H
#define TPPASSCODEVIEW_H

@class UIView, NSMutableString, NSString;



@interface TPPasscodeView : UIView

@property (retain) NSMutableString *passcodeMutableString; // ivar: _passcodeMutableString
@property (readonly) NSString *passcodeString;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)appendCharacter:(id)arg0 ;
-(void)clear;
-(void)deleteLastCharacter;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif