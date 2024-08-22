// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICONTENTTRACKER_H
#define TRICONTENTTRACKER_H


#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRIContentTracker : NSObject {
    TRIDatabase *_db;
}




+(id)contentIdentifierForExperimentArtifactWithDeployment:(id)arg0 ;
+(id)contentIdentifierForFactorPackSetWithId:(id)arg0 ;
+(id)contentIdentifierForRolloutArtifactWithDeployment:(id)arg0 ;
+(id)contentIdentifierForTreatmentArtifactWithTreatmentId:(id)arg0 container:(id)arg1 ;
+(id)decodeContentIdentifier:(id)arg0 ;
-(BOOL)_addOrDropRefWithContentIdentifier:(id)arg0 changeType:(NSUInteger)arg1 ;
-(BOOL)addRefWithContentIdentifier:(id)arg0 ;
-(BOOL)clearRefsWithContentIdentifier:(id)arg0 ;
-(BOOL)dropRefWithContentIdentifier:(id)arg0 ;
-(BOOL)enumerateTrackedItemsWithBlock:(id)arg0 ;
-(BOOL)refCountForContentIdentifier:(id)arg0 refCount:(*NSInteger)arg1 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif