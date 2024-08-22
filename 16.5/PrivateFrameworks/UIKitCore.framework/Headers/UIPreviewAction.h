// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPREVIEWACTION_H
#define UIPREVIEWACTION_H

@class NSString;
@protocol UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"

@interface UIPreviewAction : NSObject <UIPreviewActionItem_Internal, NSCopying, UIPreviewActionItem>



@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_actionWithPreviewMenuItem:(id)arg0 ;
+(id)_actionWithTitle:(id)arg0 color:(id)arg1 image:(id)arg2 handler:(id)arg3 ;
+(id)_actionWithTitle:(id)arg0 style:(NSInteger)arg1 color:(id)arg2 image:(id)arg3 handler:(id)arg4 ;
+(id)_actionWithTitle:(id)arg0 style:(NSInteger)arg1 image:(id)arg2 handler:(id)arg3 ;
+(id)_checkmarkImage;
+(id)actionWithTitle:(id)arg0 style:(NSInteger)arg1 handler:(id)arg2 ;
-(id)_effectiveColor;
-(id)_effectiveImage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif