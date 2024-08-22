// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10WORKFLOWUI29NAMEICONCOMPOSEVIEWCONTROLLER_H
#define _TTC10WORKFLOWUI29NAMEICONCOMPOSEVIEWCONTROLLER_H

@class UIViewController;
@protocol UIAdaptivePresentationControllerDelegate;



@interface _TtC10WorkflowUI29NameIconComposeViewController : UIViewController <UIAdaptivePresentationControllerDelegate>

 {
    ? mode;
    ? delegate;
    ? glyphCharacter;
    ? viewDidAppear;
    ? textFieldMinHeight;
    ? $__lazy_storage_$_scrollViewBottomConstraint;
    ? $__lazy_storage_$_glyphPickerHeightConstraint;
    ? $__lazy_storage_$_contentViewScrollViewEqualHeightConstraint;
    ? $__lazy_storage_$_contentViewViewEqualHeightConstraint;
    ? $__lazy_storage_$_scrollView;
    ? $__lazy_storage_$_contentView;
    ? $__lazy_storage_$_iconTextFieldOuterContainer;
    ? $__lazy_storage_$_iconTextFieldInnerContainer;
    ? $__lazy_storage_$_iconView;
    ? $__lazy_storage_$_textField;
    ? $__lazy_storage_$_glyphPicker;
    ? isIPad;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancel;
-(void)done;
-(void)keyboardWillChange:(id)arg0 ;
-(void)presentationControllerDidAttemptToDismiss:(id)arg0 ;
-(void)updateIsModalInPresentation;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif