// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIDEBUGCOLLECTIONVIEWDEFAULTSCELL_H
#define VUIDEBUGCOLLECTIONVIEWDEFAULTSCELL_H

@class NSString, UISwitch, UITextField;
@protocol UITextFieldDelegate;


#import "VUIListCollectionViewCell.h"
#import "VUIDebugViewDefaults.h"
#import "VUISeparatorView.h"
#import "VUILabel.h"
#import "VUITextLayout.h"

@interface VUIDebugCollectionViewDefaultsCell : VUIListCollectionViewCell <UITextFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) VUIDebugViewDefaults *defaults; // ivar: _defaults
@property (retain, nonatomic) UISwitch *defaultsSwitch; // ivar: _defaultsSwitch
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VUISeparatorView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) VUILabel *subtitleLabel; // ivar: _subtitleLabel
@property (retain, nonatomic) VUITextLayout *subtitleLayout; // ivar: _subtitleLayout
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) VUITextLayout *titleLayout; // ivar: _titleLayout


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_defaultsSwitchPressed:(id)arg0 ;
-(void)configureCellWithDefaults:(id)arg0 ;
-(void)layoutSubviews;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif