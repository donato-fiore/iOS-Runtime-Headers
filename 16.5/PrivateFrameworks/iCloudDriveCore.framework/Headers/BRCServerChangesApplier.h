// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCSERVERCHANGESAPPLIER_H
#define BRCSERVERCHANGESAPPLIER_H


#import <Foundation/Foundation.h>

#import "BRCAccountSessionFPFS.h"

@interface BRCServerChangesApplier : NSObject

@property (readonly, nonatomic) BRCAccountSessionFPFS *session; // ivar: _session


-(BOOL)_handleServerItemBRAliasIfNeeded:(id)arg0 li:(id)arg1 jobID:(NSInteger)arg2 zone:(id)arg3 diffs:(NSUInteger)arg4 ;
-(id)initWithAccountSession:(id)arg0 ;
-(void)applyChanges:(id)arg0 localItem:(id)arg1 rank:(NSInteger)arg2 zone:(id)arg3 hasFinished:(*BOOL)arg4 ;


@end


#endif