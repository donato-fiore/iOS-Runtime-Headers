// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIADDTOWISHLISTOPERATION_H
#define SKUIADDTOWISHLISTOPERATION_H

@class NSOperation, NSMutableDictionary;



@interface SKUIAddToWishlistOperation : NSOperation {
    NSInteger _itemIdentifier;
    NSInteger _reason;
    NSMutableDictionary *_requestParameters;
}




-(id)initWithItem:(id)arg0 reason:(NSInteger)arg1 ;
-(void)main;


@end


#endif