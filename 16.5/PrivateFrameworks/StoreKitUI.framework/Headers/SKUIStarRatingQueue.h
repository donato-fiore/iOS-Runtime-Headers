// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUISTARRATINGQUEUE_H
#define SKUISTARRATINGQUEUE_H

@class UIWindow;

#import <Foundation/Foundation.h>

#import "SKUIClientContext.h"
#import "SKUIReviewConfiguration.h"

@interface SKUIStarRatingQueue : NSObject {
    SKUIClientContext *_clientContext;
    SKUIReviewConfiguration *_reviewConfiguration;
}


@property (weak, nonatomic) UIWindow *window; // ivar: _window


-(id)init;
-(id)initWithClientContext:(id)arg0 reviewConfiguration:(id)arg1 ;
-(void)_setRating:(NSInteger)arg0 forItemID:(id)arg1 account:(id)arg2 completionBlock:(id)arg3 ;
-(void)setRating:(NSInteger)arg0 forItemID:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif