// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIINTERFACEACTIONIMAGEPROPERTYVIEW_H
#define _UIINTERFACEACTIONIMAGEPROPERTYVIEW_H

@class NSLayoutConstraint, NSString;
@protocol UIInterfaceActionDisplayPropertyObserver;


#import "UIImageView.h"
#import "UIInterfaceAction.h"

@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver>

 {
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
}


@property (readonly, nonatomic) UIInterfaceAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *imageProperty; // ivar: _imageProperty
@property (readonly, nonatomic) BOOL isUsedToOccupySpaceIfNoImage;
@property (readonly) Class superclass;


-(id)_interfaceActionViewState;
-(id)_visualStyle;
-(id)initWithAction:(id)arg0 imageProperty:(id)arg1 ;
-(struct CGSize )_sizeToOccupy;
-(void)_applyVisualStyle;
-(void)_applyVisualStyleToImageView;
-(void)_reloadImageContent;
-(void)dealloc;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentActionProperties:(id)arg1 ;
-(void)interfaceAction:(id)arg0 reloadDisplayedContentVisualStyle:(id)arg1 ;
-(void)setImage:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif