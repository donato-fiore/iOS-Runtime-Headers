// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIADDTOWISHLISTANIMATION_H
#define SKUIADDTOWISHLISTANIMATION_H

@class UIImage, UINavigationButton;

#import <Foundation/Foundation.h>


@interface SKUIAddToWishlistAnimation : NSObject {
    id *_completionBlock;
    UIImage *_image;
    UINavigationButton *_targetButton;
}




-(id)initWithImage:(id)arg0 buttonItem:(id)arg1 navigationBar:(id)arg2 ;
-(void)animateWithCompletionBlock:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;


@end


#endif