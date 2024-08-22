// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIFULFILLEDCONTEXTMENUCONFIGURATION_H
#define _UIFULFILLEDCONTEXTMENUCONFIGURATION_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIResponder.h"
#import "UIMenu.h"
#import "UIAction.h"
#import "UIViewController.h"

@interface _UIFulfilledContextMenuConfiguration : NSObject

@property (retain, nonatomic) NSArray *accessoryViews; // ivar: _accessoryViews
@property (nonatomic) NSUInteger badgeCount; // ivar: _badgeCount
@property (weak, nonatomic) UIResponder *firstResponderTarget; // ivar: _firstResponderTarget
@property (copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (retain, nonatomic) id *internalIdentifier; // ivar: _internalIdentifier
@property (readonly, nonatomic) BOOL isMultiItemMenu;
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (copy, nonatomic) UIAction *previewAction; // ivar: _previewAction
@property (retain, nonatomic) UIViewController *previewViewController; // ivar: _previewViewController
@property (nonatomic) NSUInteger representedItemCount; // ivar: _representedItemCount


-(BOOL)isPresentable;


@end


#endif