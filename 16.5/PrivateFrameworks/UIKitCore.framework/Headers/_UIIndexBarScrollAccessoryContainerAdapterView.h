// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINDEXBARSCROLLACCESSORYCONTAINERADAPTERVIEW_H
#define _UIINDEXBARSCROLLACCESSORYCONTAINERADAPTERVIEW_H

@class UIView<UIScrollAccessory>;
@protocol UIScrollAccessory;


#import "UIView.h"
#import "UIScrollView.h"

@interface _UIIndexBarScrollAccessoryContainerAdapterView : UIView <UIScrollAccessory>

 {
    UIView<UIScrollAccessory> *_delegatedView;
}


@property (nonatomic) NSInteger edge;
@property (readonly, nonatomic) BOOL overlay;
@property (weak, nonatomic) UIScrollView *scrollView;


-(id)initWithContents:(id)arg0 delegatingToView:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)update;


@end


#endif