// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSIRIADDTOACCOUSTICHISTORYREQUEST_H
#define ICSIRIADDTOACCOUSTICHISTORYREQUEST_H

@class NSString;


#import "ICRequestOperation.h"
#import "ICStoreRequestContext.h"

@interface ICSiriAddToAccousticHistoryRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSInteger _storeItemID;
    NSString *_affiliateIdentifier;
}




-(id)initWithRequestContext:(id)arg0 storeItemID:(NSInteger)arg1 affiliateIdentifier:(id)arg2 ;
-(void)execute;


@end


#endif