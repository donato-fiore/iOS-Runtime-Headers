// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8VIDEOSUI29MULTIPLAYERDISTRIBUTIONPICKER_H
#define _TTC8VIDEOSUI29MULTIPLAYERDISTRIBUTIONPICKER_H

@class UIView, NSArray;



@interface _TtC8VideosUI29MultiPlayerDistributionPicker : UIView {
    ? featuredDistributionSymbol;
    ? distribution;
    ? $__lazy_storage_$_featuredDistributionButton;
    ? $__lazy_storage_$_equalDistributionButton;
    ? onDistributionChange;
}


@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)equalPressed;
-(void)featuredPressed;


@end


#endif