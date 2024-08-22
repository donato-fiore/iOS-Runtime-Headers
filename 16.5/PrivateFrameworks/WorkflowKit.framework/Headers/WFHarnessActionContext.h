// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHARNESSACTIONCONTEXT_H
#define WFHARNESSACTIONCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WFHarnessActionContext : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger indexInWorkflow; // ivar: _indexInWorkflow


-(id)initWithIdentifier:(id)arg0 indexInWorkflow:(NSUInteger)arg1 ;


@end


#endif