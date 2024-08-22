// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWCONFLICTRESOLUTION_H
#define WFWORKFLOWCONFLICTRESOLUTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFWorkflowConflictResolution : NSObject

@property (nonatomic) BOOL keepLocal; // ivar: _keepLocal
@property (nonatomic) BOOL keepRemote; // ivar: _keepRemote
@property (copy, nonatomic) NSString *localWorkflowID; // ivar: _localWorkflowID
@property (copy, nonatomic) NSString *remoteWorkflowID; // ivar: _remoteWorkflowID


-(id)description;


@end


#endif