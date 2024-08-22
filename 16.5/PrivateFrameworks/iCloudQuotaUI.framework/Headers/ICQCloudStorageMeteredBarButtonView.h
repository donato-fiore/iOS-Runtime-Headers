// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQCLOUDSTORAGEMETEREDBARBUTTONVIEW_H
#define ICQCLOUDSTORAGEMETEREDBARBUTTONVIEW_H

@class UIView, UILabel, UIProgressView;



@interface ICQCloudStorageMeteredBarButtonView : UIView {
    CGFloat _percentUsed;
    UILabel *_storageString;
    UIProgressView *_progressBar;
}




+(id)barButtonItemWithString:(id)arg0 andPercentUsed:(CGFloat)arg1 ;
-(id)initWithString:(id)arg0 andPercentUsed:(CGFloat)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif