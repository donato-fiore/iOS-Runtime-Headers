// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSERVERCHANGESAPPLYUTIL_H
#define BRCSERVERCHANGESAPPLYUTIL_H


#import <Foundation/Foundation.h>


@interface BRCServerChangesApplyUtil : NSObject



+(BOOL)checkEarlyExitsPriorToApplying:(id)arg0 si:(id)arg1 rank:(NSInteger)arg2 scheduler:(id)arg3 zone:(id)arg4 session:(id)arg5 isDeleteOfShareRoot:(BOOL)arg6 diffs:(NSUInteger)arg7 clientZone:(id)arg8 ;
+(BOOL)deletingShareRoot:(id)arg0 localItem:(id)arg1 ;
+(BOOL)handleApplyChangesForUnliveServerItem:(id)arg0 isDeleteOfShareRoot:(BOOL)arg1 rank:(NSInteger)arg2 scheduler:(id)arg3 zone:(id)arg4 session:(id)arg5 ;
+(BOOL)handleEtagsChangesOnly:(id)arg0 si:(id)arg1 rank:(NSInteger)arg2 scheduler:(id)arg3 zone:(id)arg4 diffs:(*NSUInteger)arg5 needsSave:(*BOOL)arg6 ;
+(BOOL)handleNonRevivedItemIfNecessary:(id)arg0 si:(id)arg1 rank:(NSInteger)arg2 scheduler:(id)arg3 zone:(id)arg4 ;
+(BOOL)shouldForceApplyContentForItem:(id)arg0 ;


@end


#endif