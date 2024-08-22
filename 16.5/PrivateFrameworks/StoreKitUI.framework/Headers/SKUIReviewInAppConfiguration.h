// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIREVIEWINAPPCONFIGURATION_H
#define SKUIREVIEWINAPPCONFIGURATION_H

@class NSString, UIImage, UIViewController;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"

@interface SKUIReviewInAppConfiguration : NSObject

@property (retain, nonatomic) SKUIClientContext *clientContext; // ivar: _clientContext
@property (copy, nonatomic) NSString *customDescription; // ivar: _customDescription
@property (retain, nonatomic) UIImage *icon; // ivar: _icon
@property (copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (nonatomic, getter=isSandboxed) BOOL sandboxed; // ivar: _sandboxed
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController




@end


#endif