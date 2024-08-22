// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANALYTICSSTOREFILEWRITER_H
#define ANALYTICSSTOREFILEWRITER_H


#import <Foundation/Foundation.h>

#import "AnalyticsStoreMOHandler.h"

@interface AnalyticsStoreFileWriter : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *managedObjectHandler; // ivar: _managedObjectHandler


-(id)analyticsStoreFileWriterDirectory;
-(id)analyticsStoreFileWriterFilePath;
-(id)batchedWriteAnalyticsStoreToFile:(NSUInteger)arg0 maxAge:(NSUInteger)arg1 ;
-(id)batchedWriteAnalyticsStoreToFileWithBatchSize:(NSUInteger)arg0 maxAge:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithAnalyticsStore:(id)arg0 ;
-(id)relationshipKeyPathsForPrefetching:(id)arg0 ;
-(id)stringifyObjectWithPadding:(id)arg0 padding:(id)arg1 padToLength:(NSUInteger)arg2 ;
-(id)stringifyRelationship:(id)arg0 name:(*id)arg1 ;
-(id)stringifyValueArray:(id)arg0 ;
-(id)writeAnalyticsStoreToFile;
-(id)writeArrayToJSONFile:(id)arg0 ;
-(id)writeDeploymentGraphToFile;
-(id)writeDictionaryToJSONFile:(id)arg0 network:(id)arg1 ;
-(void)stringifyManagedObjectsArray:(id)arg0 titleString:(*id)arg1 dataStringsArray:(*id)arg2 ;


@end


#endif