// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIEXPERIMENTDATABASE_H
#define TRIEXPERIMENTDATABASE_H


#import <Foundation/Foundation.h>

#import "TRIDatabase.h"

@interface TRIExperimentDatabase : NSObject {
    TRIDatabase *_db;
}




// -(BOOL)_enumerateExperimentRecordsMatchingWhereClause:(id)arg0 bind:(id)arg1 block:(unk)arg2  ;
-(BOOL)enumerateActiveExperimentRecordsWithVisibility:(unsigned int)arg0 block:(id)arg1 ;
-(BOOL)enumerateExperimentRecordsMatchingExperimentId:(id)arg0 block:(id)arg1 ;
-(BOOL)enumerateExperimentRecordsMatchingStatuses:(id)arg0 block:(id)arg1 ;
-(BOOL)enumerateExperimentRecordsWithBlock:(id)arg0 ;
-(BOOL)enumerateNamespaceRecordsForExperimentDeployment:(id)arg0 usingTransaction:(id)arg1 block:(id)arg2 ;
-(BOOL)hasRecordReferencingTreatmentId:(id)arg0 withReferenceType:(unsigned int)arg1 ;
-(BOOL)namespacesAreAvailableForExperiment:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 namespaces:(id)arg3 ;
-(BOOL)setManuallyTargeted:(BOOL)arg0 forExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 ;
-(BOOL)setStatus:(NSInteger)arg0 forExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 ;
-(BOOL)setTreatmentId:(id)arg0 forExperimentDeployment:(id)arg1 usingTransaction:(id)arg2 ;
-(BOOL)setTreatmentURL:(id)arg0 forExperimentDeployment:(id)arg1 namespaceName:(id)arg2 ;
-(id)activeExperimentRecordWithTreatmentId:(id)arg0 ;
-(id)experimentRecordWithExperimentDeployment:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(id)treatmentURLsForExperimentDeployment:(id)arg0 usingTransaction:(id)arg1 ;
-(struct ? )addExperimentWithExperimentDeployment:(id)arg0 environment:(int)arg1 type:(int)arg2 status:(NSInteger)arg3 startDate:(id)arg4 endDate:(id)arg5 namespaces:(id)arg6 artifact:(id)arg7 ;
-(struct ? )removeExperimentRecordWithExperimentDeployment:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )readTransactionWithFailableBlock:(id)arg0 ;
-(struct _PASDBTransactionCompletion_ )writeTransactionWithFailableBlock:(id)arg0 ;


@end


#endif