// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFPOSTERSERVICE_H
#define WFPOSTERSERVICE_H


#import <Foundation/Foundation.h>


@interface WFPosterService : NSObject



-(void)fetchEligiblePostersWithCompletionHandler:(id)arg0 ;
-(void)findPosterMatchingRepresentation:(id)arg0 completionHandler:(id)arg1 ;
-(void)getPostersWithCompletionHandler:(id)arg0 ;


@end


#endif