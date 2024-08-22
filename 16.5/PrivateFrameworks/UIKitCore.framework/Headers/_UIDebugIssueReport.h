// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDEBUGISSUEREPORT_H
#define _UIDEBUGISSUEREPORT_H

@class NSMutableArray, NSString, NSArray;
@protocol _UIDebugIssueReporting;

#import <Foundation/Foundation.h>


@interface _UIDebugIssueReport : NSObject <_UIDebugIssueReporting>

 {
    NSMutableArray *_mutableIssues;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *issues;
@property (readonly) Class superclass;


-(id)init;
-(void)addIssue:(id)arg0 ;


@end


#endif