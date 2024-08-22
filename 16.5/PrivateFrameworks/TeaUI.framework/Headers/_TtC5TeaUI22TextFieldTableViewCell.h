// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC5TEAUI22TEXTFIELDTABLEVIEWCELL_H
#define _TTC5TEAUI22TEXTFIELDTABLEVIEWCELL_H

@class UITableViewCell;
@protocol UITextFieldDelegate;



@interface _TtC5TeaUI22TextFieldTableViewCell : UITableViewCell <UITextFieldDelegate>

 {
    ? onChange;
    ? textField;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif