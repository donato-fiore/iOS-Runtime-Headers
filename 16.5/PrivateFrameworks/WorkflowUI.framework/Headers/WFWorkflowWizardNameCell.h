// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWWIZARDNAMECELL_H
#define WFWORKFLOWWIZARDNAMECELL_H

@class UITableViewCell, NSString, NSArray, UIView, UITextField;
@protocol UITextFieldDelegate, WFWorkflowWizardNameCellDataSource, WFWorkflowWizardNameCellDelegate;


#import "WFWorkflowWizardNameClearButton.h"
#import "WFWorkflowWizardNameIconButton.h"
#import "WFWorkflowWizardNameRecordButton.h"

@interface WFWorkflowWizardNameCell : UITableViewCell <UITextFieldDelegate>



@property (retain, nonatomic) WFWorkflowWizardNameClearButton *clearButton; // ivar: _clearButton
@property (weak, nonatomic) NSObject<WFWorkflowWizardNameCellDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFWorkflowWizardNameCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *horizontalConstraintsWithInset; // ivar: _horizontalConstraintsWithInset
@property (retain, nonatomic) NSArray *horizontalConstraintsWithoutInset; // ivar: _horizontalConstraintsWithoutInset
@property (retain, nonatomic) WFWorkflowWizardNameIconButton *iconButton; // ivar: _iconButton
@property (readonly, copy, nonatomic) NSString *name;
@property (retain, nonatomic) UIView *phraseView; // ivar: _phraseView
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) WFWorkflowWizardNameRecordButton *recordButton; // ivar: _recordButton
@property (retain, nonatomic) UITextField *shortcutNameTextField; // ivar: _shortcutNameTextField
@property (nonatomic) BOOL showsHeySiri; // ivar: _showsHeySiri
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDoneButtonOnKeyboard; // ivar: _useDoneButtonOnKeyboard
@property (nonatomic) BOOL useHorizontalInset; // ivar: _useHorizontalInset


+(CGFloat)defaultRowHeight;
-(BOOL)becomeFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(BOOL)shortcutNameIsEmpty;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)useDropdownMenuIconButton;
-(id)dropdownMenuIconButton;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)regularIconButton;
-(void)configureIconButton;
-(void)configureWithName:(id)arg0 showsHeySiri:(BOOL)arg1 icon:(id)arg2 ;
-(void)configureWithName:(id)arg0 showsHeySiri:(BOOL)arg1 useHorizontalInset:(BOOL)arg2 icon:(id)arg3 ;
-(void)configureWithName:(id)arg0 showsHeySiri:(BOOL)arg1 useHorizontalInset:(BOOL)arg2 icon:(id)arg3 customImageData:(id)arg4 ;
-(void)didTapClearButton;
-(void)didTapIconButton;
-(void)didTapRecordButton;
-(void)setDropdownMenuForIconButton:(id)arg0 ;
-(void)setIcon:(id)arg0 customImageData:(id)arg1 ;
-(void)setUseHorizontalContraints:(BOOL)arg0 ;
-(void)textFieldDidChange;
-(void)updateButtonVisibility;
-(void)updateViewForDoneButton;
-(void)updateViewForHorizontalConstraints;


@end


#endif