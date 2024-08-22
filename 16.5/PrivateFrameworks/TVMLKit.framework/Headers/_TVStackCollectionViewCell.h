// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TVSTACKCOLLECTIONVIEWCELL_H
#define _TVSTACKCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, UIViewController;



@interface _TVStackCollectionViewCell : UICollectionViewCell {
    UIView *_cellContentView;
    NSInteger _pressesEventDepth;
    UIView *_stowedContentView;
}


@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(void)_pressesDidEnd;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif