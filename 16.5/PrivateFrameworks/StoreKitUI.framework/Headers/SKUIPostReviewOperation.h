// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPOSTREVIEWOPERATION_H
#define SKUIPOSTREVIEWOPERATION_H

@class ISOperation, NSDictionary;


#import "SKUIReviewMetadata.h"

@interface SKUIPostReviewOperation : ISOperation {
    NSDictionary *_responseDictionary;
    SKUIReviewMetadata *_review;
}


@property (readonly) NSDictionary *responseDictionary;


-(id)_httpBody;
-(id)initWithReviewMetadata:(id)arg0 ;
-(void)run;


@end


#endif