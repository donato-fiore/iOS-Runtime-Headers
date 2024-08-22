// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUITOGGLEBUTTON_H
#define SKUITOGGLEBUTTON_H

@class NSString;
@protocol SKUIToggleItemStateCenterObserver, SKUIToggleButtonDelegate;


#import "SKUIStyledButton.h"
#import "SKUIAttributedStringLayout.h"
#import "SKUIButtonViewElement.h"

@interface SKUIToggleButton : SKUIStyledButton <SKUIToggleItemStateCenterObserver>

 {
    NSString *_itemIdentifier;
    SKUIAttributedStringLayout *_nonToggledLayout;
    NSString *_titleToggleString;
    SKUIAttributedStringLayout *_toggledLayout;
}


@property (nonatomic) BOOL autoIncrement; // ivar: _autoIncrement
@property (nonatomic) NSInteger autoIncrementCount; // ivar: _autoIncrementCount
@property (nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIToggleButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SKUIButtonViewElement *element; // ivar: _element
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *nonToggledContents; // ivar: _nonToggledContents
@property (retain, nonatomic) NSString *nonToggledTitle; // ivar: _nonToggledTitle
@property (readonly) Class superclass;
@property (nonatomic) NSInteger toggleButtonType; // ivar: _toggleButtonType
@property (retain, nonatomic) NSString *toggleItemIdentifier; // ivar: _toggleItemIdentifier
@property (nonatomic, getter=isToggled) BOOL toggled; // ivar: _toggled
@property (retain, nonatomic) id *toggledContents; // ivar: _toggledContents
@property (retain, nonatomic) NSString *toggledTitle; // ivar: _toggledTitle


-(id)_layoutForString:(id)arg0 ;
-(id)_nonToggledLayout;
-(id)_titleAttributes;
-(id)_toggledLayout;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_sendDidAnimate;
-(void)_sendWillAnimate;
-(void)_showToggleState:(BOOL)arg0 ;
-(void)dealloc;
-(void)itemStateCenter:(id)arg0 itemStateChanged:(id)arg1 ;
-(void)setButtonTitleText:(id)arg0 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif