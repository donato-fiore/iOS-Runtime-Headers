// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSERRORVIEWCONTROLLER_H
#define VSERRORVIEWCONTROLLER_H

@class UIViewController, NSError, UILabel, UIButton;


#import "VSFontCenter.h"

@interface VSErrorViewController : UIViewController

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VSFontCenter *fontCenter; // ivar: _fontCenter
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UIButton *recoveryButton; // ivar: _recoveryButton
@property (nonatomic, getter=isRecoveryDestructive) BOOL recoveryDestructive; // ivar: _recoveryDestructive
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_recoveryButtonPressed:(id)arg0 ;
-(void)_updateText;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif