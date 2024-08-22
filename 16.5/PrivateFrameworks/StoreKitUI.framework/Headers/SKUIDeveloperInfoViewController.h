// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIDEVELOPERINFOVIEWCONTROLLER_H
#define SKUIDEVELOPERINFOVIEWCONTROLLER_H

@class UIScrollView;


#import "SKUIViewController.h"
#import "SKUIDeveloperInfoView.h"
#import "SKUIDeveloperInfo.h"

@interface SKUIDeveloperInfoViewController : SKUIViewController {
    SKUIDeveloperInfoView *_infoView;
    UIScrollView *_scrollView;
}


@property (readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // ivar: _developerInfo


-(id)initWithDeveloperInfo:(id)arg0 ;
-(void)loadView;


@end


#endif