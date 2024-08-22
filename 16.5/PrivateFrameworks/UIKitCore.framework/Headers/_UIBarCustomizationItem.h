// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARCUSTOMIZATIONITEM_H
#define _UIBARCUSTOMIZATIONITEM_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_UIBarCustomizationChiclet.h"
#import "UIImage.h"
#import "UIColor.h"
#import "UIView.h"

@interface _UIBarCustomizationItem : NSObject

@property (retain, nonatomic) _UIBarCustomizationChiclet *_chiclet; // ivar: __chiclet
@property (nonatomic) BOOL collapsed; // ivar: _collapsed
@property (nonatomic) BOOL collapsible; // ivar: _collapsible
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL removable; // ivar: _removable
@property (nonatomic) BOOL reverseItemsForRTL; // ivar: _reverseItemsForRTL
@property (copy, nonatomic) id *sourceViewProvider; // ivar: _sourceViewProvider
@property (readonly, nonatomic) NSArray *subitems; // ivar: _subitems
@property (copy, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) UIView *view; // ivar: _view


+(id)groupWithWithIdentifier:(id)arg0 icon:(id)arg1 name:(id)arg2 items:(id)arg3 ;
+(id)itemWithIdentifier:(id)arg0 icon:(id)arg1 name:(id)arg2 view:(id)arg3 ;
-(id)description;
-(id)init;
-(struct CGRect )_sourceFrameInContainer:(id)arg0 ;
-(void)_enumerateSubitemsWithBlock:(id)arg0 ;


@end


#endif