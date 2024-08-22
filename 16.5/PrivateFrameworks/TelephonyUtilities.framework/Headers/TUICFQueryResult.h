// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUICFQUERYRESULT_H
#define TUICFQUERYRESULT_H


#import <Foundation/Foundation.h>


@interface TUICFQueryResult : NSObject

@property (nonatomic) BOOL allowCallForDestinationID; // ivar: _allowCallForDestinationID
@property (nonatomic, getter=isFromBlockList) BOOL fromBlockList; // ivar: _fromBlockList


-(id)description;


@end


#endif