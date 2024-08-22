// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPREVIEWACTIONGROUP_H
#define UIPREVIEWACTIONGROUP_H

@class NSArray, NSString;
@protocol UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"

@interface UIPreviewActionGroup : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem>



@property (copy, nonatomic, getter=_actions, setter=_setActions:) NSArray *actions; // ivar: _actions
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_actionGroupWithPreviewMenuItemWithSubactions:(id)arg0 ;
+(id)_actionGroupWithTitle:(id)arg0 style:(NSInteger)arg1 color:(id)arg2 actions:(id)arg3 ;
+(id)actionGroupWithTitle:(id)arg0 style:(NSInteger)arg1 actions:(id)arg2 ;
-(id)_effectiveColor;
-(id)_effectiveImage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif