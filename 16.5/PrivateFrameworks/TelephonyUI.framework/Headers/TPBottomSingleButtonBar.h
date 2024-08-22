// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPBOTTOMSINGLEBUTTONBAR_H
#define TPBOTTOMSINGLEBUTTONBAR_H



#import "TPBottomBar.h"
#import "TPButton.h"

@interface TPBottomSingleButtonBar : TPBottomBar {
    id *_delegate;
    TPButton *_button;
}




+(id)_backgroundImage;
-(CGFloat)buttonWidth;
-(id)button;
-(void)setButton:(id)arg0 andStyle:(BOOL)arg1 ;


@end


#endif