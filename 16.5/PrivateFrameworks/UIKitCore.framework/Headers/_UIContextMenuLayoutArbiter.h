// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENULAYOUTARBITER_H
#define _UICONTEXTMENULAYOUTARBITER_H


#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIContextMenuLayoutArbiterInput.h"

@interface _UIContextMenuLayoutArbiter : NSObject

@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) CGRect contentBounds;
@property (retain, nonatomic) _UIContextMenuLayoutArbiterInput *currentInput; // ivar: _currentInput
@property (nonatomic) NSUInteger currentLayout; // ivar: _currentLayout
@property (readonly, nonatomic) ? menuAnchor; // ivar: _menuAnchor


-(CGFloat)contentSpacing;
-(NSUInteger)_automaticAlignmentAndOffset:(*CGFloat)arg0 forAttachment:(NSUInteger)arg1 sourcePoint:(struct CGPoint )arg2 ;
-(NSUInteger)_defaultAttachmentEdge;
-(id)_accessoryPositionsForBaseLayout:(id)arg0 ;
-(id)computedLayoutWithInput:(id)arg0 ;
-(id)initWithContainerView:(id)arg0 layout:(NSUInteger)arg1 ;
-(struct CGPoint )_computedMenuAnchorPointForMenuFrame:(struct CGRect )arg0 previewFrame:(struct CGRect )arg1 ;
-(struct CGRect )_computedMenuBoundsForContentBounds:(struct CGRect )arg0 predictedPreviewFrame:(struct CGRect )arg1 ;
-(struct CGRect )_computedPreviewBoundsForContentBounds:(struct CGRect )arg0 ;
-(void)_drawContentBoundsDebugUI:(struct CGRect )arg0 ;
-(void)_positionPlatterFrame:(struct CGRect *)arg0 andActionViewFrame:(struct CGRect *)arg1 inBounds:(struct CGRect )arg2 aboutSourcePoint:(struct CGPoint )arg3 ;


@end


#endif