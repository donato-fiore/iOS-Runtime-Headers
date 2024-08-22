// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMEDIAENTITIESFETCHCONTROLLERRESULT_H
#define VUIMEDIAENTITIESFETCHCONTROLLERRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface VUIMediaEntitiesFetchControllerResult : NSObject

@property (nonatomic) NSInteger fetchReason; // ivar: _fetchReason
@property (copy, nonatomic) NSArray *fetchResponseChanges; // ivar: _fetchResponseChanges
@property (copy, nonatomic) NSArray *fetchResponses; // ivar: _fetchResponses


-(id)description;
-(id)init;
-(id)initWithFetchReason:(NSInteger)arg0 fetchResponses:(id)arg1 ;


@end


#endif