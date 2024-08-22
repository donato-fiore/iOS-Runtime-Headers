// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWCREATIONOPTIONS_H
#define WFWORKFLOWCREATIONOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WFWorkflowRecord.h"

@interface WFWorkflowCreationOptions : NSObject

@property (copy, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger location; // ivar: _location
@property (readonly, nonatomic) WFWorkflowRecord *record; // ivar: _record


-(id)init;
-(id)initWithRecord:(id)arg0 ;


@end


#endif