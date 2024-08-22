// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSAVELOGSOPERATION_H
#define WFSAVELOGSOPERATION_H

@class NSString;


#import "WFOperation.h"

@interface WFSaveLogsOperation : WFOperation

@property (copy, nonatomic) NSString *comments; // ivar: _comments


-(id)initWithComments:(id)arg0 ;
-(void)start;


@end


#endif