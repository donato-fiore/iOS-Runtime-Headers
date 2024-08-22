// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICOLLECTIONVIEWLISTACCESSORYDISCLOSURE_H
#define _UICOLLECTIONVIEWLISTACCESSORYDISCLOSURE_H

@class NSString;
@protocol UIMenuForcedAutomaticSelectionDelegate, UITableConstants;


#import "UIControl.h"
#import "UIImageView.h"
#import "UIColor.h"
#import "UIImage.h"
#import "UIMenu.h"

@interface _UICollectionViewListAccessoryDisclosure : UIControl <UIMenuForcedAutomaticSelectionDelegate>

 {
    UIImageView *_imageView;
}


@property (retain, nonatomic) UIColor *accessoryTintColor; // ivar: _accessoryTintColor
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) NSObject<UITableConstants> *constants; // ivar: _constants
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIMenu *menu; // ivar: _menu
@property (nonatomic) BOOL rotated; // ivar: _rotated
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (copy, nonatomic) id *selectedElementDidChangeHandler; // ivar: _selectedElementDidChangeHandler
@property (readonly) Class superclass;


-(CGFloat)_enforcedWidthForWidth:(CGFloat)arg0 ;
-(NSUInteger)_controlEventsForActionTriggered;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)initWithConstants:(id)arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )_minimumSizeForHitTesting;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_executeActionHandler;
-(void)_updateRotation;
-(void)forcedSelectionOfMenu:(id)arg0 willChangeTo:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif