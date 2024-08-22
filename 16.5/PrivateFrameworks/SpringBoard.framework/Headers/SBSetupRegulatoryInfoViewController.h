// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSETUPREGULATORYINFOVIEWCONTROLLER_H
#define SBSETUPREGULATORYINFOVIEWCONTROLLER_H

@class UIViewController, UIScrollView, UIImageView;



@interface SBSetupRegulatoryInfoViewController : UIViewController {
    UIScrollView *_containerView;
    UIImageView *_regulatoryImageView;
}




-(BOOL)_canShowWhileLocked;
-(void)loadView;


@end


#endif