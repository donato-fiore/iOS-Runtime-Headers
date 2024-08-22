// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUSCRIPTGIFTVIEWCONTROLLER_H
#define SUSCRIPTGIFTVIEWCONTROLLER_H

@class SKUIItem;


#import "SUScriptViewController.h"

@interface SUScriptGiftViewController : SUScriptViewController {
    NSInteger _giftCategory;
    SKUIItem *_item;
}


@property (readonly, nonatomic) NSInteger giftCategoryApps;
@property (readonly, nonatomic) NSInteger giftCategoryBooks;
@property (readonly, nonatomic) NSInteger giftCategoryMedia;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)initialize;
-(id)_className;
-(id)attributeKeys;
-(id)newNativeViewController;
-(id)scriptAttributeKeys;
-(void)setCreditGiftStyle:(NSInteger)arg0 ;
-(void)setProductGiftItem:(id)arg0 ;


@end


#endif