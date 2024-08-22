// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQLOCALBACKUPHEADERVIEW_H
#define ICQLOCALBACKUPHEADERVIEW_H

@class UIActivityIndicatorView;


#import "ICQSubtitleHeaderView.h"

@interface ICQLocalBackupHeaderView : ICQSubtitleHeaderView {
    UIActivityIndicatorView *_spinner;
}




-(id)initWithSpecifier:(id)arg0 ;
-(void)hideSpinner;
-(void)layoutSubviews;
-(void)showSpinner;


@end


#endif