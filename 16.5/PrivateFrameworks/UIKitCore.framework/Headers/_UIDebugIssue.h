// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDEBUGISSUE_H
#define _UIDEBUGISSUE_H

@class NSString, NSArray;
@protocol _UIDebugIssueReporting;

#import <Foundation/Foundation.h>

#import "_UIDebugIssueReport.h"

@interface _UIDebugIssue : NSObject <_UIDebugIssueReporting>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *description; // ivar: _description
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *prefix; // ivar: _prefix
@property (readonly, nonatomic, getter=_subissueReport) _UIDebugIssueReport *subissueReport; // ivar: _subissueReport
@property (readonly, copy, nonatomic) NSArray *subissues;
@property (readonly) Class superclass;


+(id)issueWithDescription:(id)arg0 ;
+(id)issueWithFormat:(id)arg0 ;
-(id)init;
-(void)addIssue:(id)arg0 ;


@end


#endif