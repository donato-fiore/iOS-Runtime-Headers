// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSCREDENTIALENTRYVIEWCONTROLLER_IOS_H
#define VSCREDENTIALENTRYVIEWCONTROLLER_IOS_H

@class ACUIViewController, UIView, NSArray, NSString, UIButton, PSSpecifier;
@protocol VSCredentialEntryViewController, VSPSPickerTableViewCellDelegate, VSAuthenticationViewControllerDelegate;


#import "VSIdentityProviderLogoView.h"
#import "VSCredentialEntryPicker.h"
#import "VSCredentialEntryViewModel.h"

@interface VSCredentialEntryViewController_iOS : ACUIViewController <VSCredentialEntryViewController, VSPSPickerTableViewCellDelegate>



@property (retain, nonatomic) UIView *buttonView; // ivar: _buttonView
@property (retain, nonatomic) NSArray *buttons; // ivar: _buttons
@property (nonatomic, getter=isCancellationAllowed) BOOL cancellationAllowed; // ivar: _cancellationAllowed
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSAuthenticationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *fieldSpecifiers; // ivar: _fieldSpecifiers
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat keyboardHeight; // ivar: _keyboardHeight
@property (weak, nonatomic) id *keyboardWillHideObserver; // ivar: _keyboardWillHideObserver
@property (weak, nonatomic) id *keyboardWillShowObserver; // ivar: _keyboardWillShowObserver
@property (retain, nonatomic) UIButton *linkButton; // ivar: _linkButton
@property (retain, nonatomic) VSIdentityProviderLogoView *logoView; // ivar: _logoView
@property (retain, nonatomic) VSCredentialEntryPicker *picker; // ivar: _picker
@property (retain, nonatomic) PSSpecifier *pickerButtonSpecifier; // ivar: _pickerButtonSpecifier
@property (retain, nonatomic) PSSpecifier *pickerSpecifier; // ivar: _pickerSpecifier
@property (readonly, nonatomic) CGSize preferredLogoSize;
@property (readonly) Class superclass;
@property (weak, nonatomic) id *textFieldTextDidChangeObserver; // ivar: _textFieldTextDidChangeObserver
@property (retain, nonatomic) VSCredentialEntryViewModel *viewModel; // ivar: _viewModel
@property (retain, nonatomic) id *weakTarget; // ivar: _weakTarget


-(NSInteger)pickerViewCellInitialSelectedRow:(id)arg0 ;
-(NSInteger)pickerViewCellNumberOfRows:(id)arg0 ;
-(id)_createSpecifierForField:(id)arg0 ;
-(id)_credentialEntryFieldForSpecifier:(id)arg0 ;
-(id)_linkURL;
-(id)_specifierForTextField:(id)arg0 ;
-(id)_textFieldForSpecifier:(id)arg0 ;
-(id)_textForSpecifier:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)pickerViewCell:(id)arg0 titleForRow:(NSInteger)arg1 ;
-(void)_jsButtonTapped:(id)arg0 ;
-(void)_linkButtonTapped:(id)arg0 ;
-(void)_presentError:(id)arg0 ;
-(void)_setText:(id)arg0 forSpecifier:(id)arg1 ;
-(void)_startObservingViewModel:(id)arg0 ;
-(void)_startValidation;
-(void)_stopObservingViewModel:(id)arg0 ;
-(void)_updateLinkButtonLayout;
-(void)buildButtonsIfNeeded;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)dealloc;
-(void)doneButtonPressed:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pickerViewCell:(id)arg0 didSelectRow:(NSInteger)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif