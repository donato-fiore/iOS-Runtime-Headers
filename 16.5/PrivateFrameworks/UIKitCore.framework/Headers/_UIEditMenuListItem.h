// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIEDITMENULISTITEM_H
#define _UIEDITMENULISTITEM_H

@class UISPasteVariant, NSString;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIImage.h"
#import "UIMenuElement.h"

@interface _UIEditMenuListItem : NSObject

@property (readonly, nonatomic) UIView *customView; // ivar: _customView
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) UIMenuElement *menuElement; // ivar: _menuElement
@property (readonly, nonatomic) NSInteger options; // ivar: _options
@property (nonatomic) CGFloat overrideMinimumWidth; // ivar: _overrideMinimumWidth
@property (readonly, nonatomic) UISPasteVariant *pasteVariant; // ivar: _pasteVariant
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)itemWithMenuElement:(id)arg0 ;
+(id)itemWithTitle:(id)arg0 ;
-(BOOL)hidesImageForTraitCollection:(id)arg0 ;
-(BOOL)hidesTitleForTraitCollection:(id)arg0 ;


@end


#endif