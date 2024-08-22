// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSMARTPROMPTSEXFILTRATIONLOGGER_H
#define WFSMARTPROMPTSEXFILTRATIONLOGGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFSmartPromptsExfiltrationLogger : NSObject

@property (retain) NSMutableDictionary *store; // ivar: _store


-(NSUInteger)currentExfiltratedItemCountForActionUUID:(id)arg0 contentOrigin:(id)arg1 ;
-(id)attributionSetByRewritingSetWithLoggedCounts:(id)arg0 forExfiltratingActionUUID:(id)arg1 ;
-(id)init;
-(void)logExfiltratedItemsCount:(NSUInteger)arg0 actionUUID:(id)arg1 contentOrigin:(id)arg2 ;


@end


#endif