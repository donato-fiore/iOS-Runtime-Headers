// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTNATIVEUIBARBUTTONITEM_H
#define SUSCRIPTNATIVEUIBARBUTTONITEM_H



#import "SUScriptButtonNativeObject.h"

@interface SUScriptNativeUIBarButtonItem : SUScriptButtonNativeObject {
    BOOL _isBackButton;
}




+(id)objectWithDefaultButtonForScriptButton:(id)arg0 ;
-(BOOL)isBackButton;
-(BOOL)isLoading;
-(BOOL)isShowingConfirmation;
-(NSInteger)tag;
-(id)image;
-(id)styleString;
-(id)systemItemString;
-(id)title;
-(int)buttonType;
-(struct UIEdgeInsets )imageInsets;
-(void)connectButtonAction;
-(void)destroyNativeObject;
-(void)disconnectButtonAction;
-(void)hideConfirmationAnimated:(BOOL)arg0 ;
-(void)setImage:(id)arg0 ;
-(void)setImageInsets:(struct UIEdgeInsets )arg0 ;
-(void)setLoading:(BOOL)arg0 ;
-(void)setStyleFromString:(id)arg0 ;
-(void)setTag:(NSInteger)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)setupNativeObject;
-(void)showConfirmationWithTitle:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif