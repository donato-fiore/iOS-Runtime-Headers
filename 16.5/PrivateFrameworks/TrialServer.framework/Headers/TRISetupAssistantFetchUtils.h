// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISETUPASSISTANTFETCHUTILS_H
#define TRISETUPASSISTANTFETCHUTILS_H


#import <Foundation/Foundation.h>


@interface TRISetupAssistantFetchUtils : NSObject



+(BOOL)removeNamespaceNamesWithRolloutForServerContext:(id)arg0 namespaceNames:(id)arg1 ;
+(BOOL)setValueInKeyValueStore:(id)arg0 key:(id)arg1 value:(id)arg2 error:(*id)arg3 ;
+(BOOL)stopSetupAssistantFetchWithServerContext:(id)arg0 namespaceNames:(id)arg1 error:(*id)arg2 ;
+(id)getIncompatibleNamespaceNamesForTriClientRollout:(id)arg0 namespaceDescriptorProvider:(id)arg1 ;
+(id)getNamespaceNamesWithFetchDuringSetupAssistantEnabledWithTRIPaths:(id)arg0 ;
+(id)getValueInKeyValueStore:(id)arg0 key:(id)arg1 error:(*id)arg2 ;
+(id)registerFinalizeBlockForDownloadLatencyTelemetryWithServerContext:(id)arg0 ;


@end


#endif