// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTEXTMENULAYOUTARBITERINPUT_H
#define _UICONTEXTMENULAYOUTARBITERINPUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"

@interface _UIContextMenuLayoutArbiterInput : NSObject

@property (retain, nonatomic) NSArray *accessoryViews; // ivar: _accessoryViews
@property (nonatomic) ? preferredAnchor; // ivar: _preferredAnchor
@property (nonatomic) CGFloat preferredContentSpacing; // ivar: _preferredContentSpacing
@property (nonatomic) UIEdgeInsets preferredEdgeInsets; // ivar: _preferredEdgeInsets
@property (nonatomic) CGPoint preferredMenuAttachmentPoint; // ivar: _preferredMenuAttachmentPoint
@property (nonatomic) CGSize preferredMenuSize; // ivar: _preferredMenuSize
@property (nonatomic) NSUInteger preferredPreviewFittingStrategy; // ivar: _preferredPreviewFittingStrategy
@property (nonatomic) CGSize preferredPreviewSize; // ivar: _preferredPreviewSize
@property (nonatomic) BOOL shouldAvoidInputViews; // ivar: _shouldAvoidInputViews
@property (nonatomic) BOOL shouldUpdateAttachment; // ivar: _shouldUpdateAttachment
@property (retain, nonatomic) UITargetedPreview *sourcePreview; // ivar: _sourcePreview


-(BOOL)_hasVisibleMenu;
-(id)init;


@end


#endif