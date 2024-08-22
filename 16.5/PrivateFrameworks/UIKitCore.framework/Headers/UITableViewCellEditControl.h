// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UITABLEVIEWCELLEDITCONTROL_H
#define UITABLEVIEWCELLEDITCONTROL_H



#import "UIControl.h"
#import "UITableViewCell.h"
#import "UIImageView.h"
#import "UIColor.h"

@interface UITableViewCellEditControl : UIControl {
    UITableViewCell *_cell;
    UIImageView *_imageView;
    UIImageView *_shadowView;
    CGFloat _focalY;
    CGFloat _focalHeight;
    BOOL _style;
    BOOL _rotated;
    BOOL _rotating;
    BOOL _reserved;
}


@property (retain, nonatomic) UIColor *accessoryBackgroundColor; // ivar: _accessoryBackgroundColor
@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor
@property (nonatomic, getter=isRotated) BOOL rotated;
@property (readonly, nonatomic) BOOL wantsImageShadow;
@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;


-(BOOL)isRotating;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)_currentImage;
-(id)_deleteImage;
-(id)_imageView;
-(id)_insertImage;
-(id)_multiSelectNotSelectedImage;
-(id)_multiSelectSelectedImage;
-(id)_renderedImage;
-(id)_shadowImage;
-(id)initWithTableViewCell:(id)arg0 editingStyle:(NSInteger)arg1 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )defaultSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createImageViewIfNeccessary;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_multiselectColorChanged;
-(void)_toggleRotate;
-(void)_toggleRotateAnimationDidStop;
-(void)_updateImageView;
-(void)adjustLayoutForFocalRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif