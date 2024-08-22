// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISEARCHCONTROLLERLIMITEDACCESSVIEW_H
#define _UISEARCHCONTROLLERLIMITEDACCESSVIEW_H



#import "UIView.h"
#import "UILabel.h"
#import "UIButton.h"

@interface _UISearchControllerLimitedAccessView : UIView {
    UIView *_backgroundView;
    UILabel *_keyboardLimitedLabel;
}


@property (retain, nonatomic) UIButton *backButton; // ivar: _backButton


-(BOOL)shouldUpdateFocusInContext:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif